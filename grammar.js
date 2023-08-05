
const UPPER_CASE_CHARS = /[A-Z]/
const LOWER_CASE_CHARS = /[a-z_]/
const IDENTIFIER_CHARS = /([a-zA-Z0-9_$])*/

const PREC = {
  ARRAY_INDEX: 22,
  FIELD: 21,
  CALL: 20,
  COND_PATTERN: 19,
  UNOP_PLUS: 18,
  UNOP_AND: 17,
  UNOP_NAND: 16,
  UNOP_OR: 15,
  UNOP_NOR: 14,
  UNOP_XOR: 13,
  UNOP_XNOR: 12,
  BINOP_MUL: 11,
  BINOP_ADD: 10,
  BINOP_SHT: 9,
  BINOP_COMP: 8,
  BINOP_EQ: 7,
  BINOP_AND: 6,
  BINOP_XOR: 5,
  BINOP_XNOR: 4,
  BINOP_OR: 3,
  BINOP_LOGIC_AND: 2,
  BINOP_LOGIC_OR: 1,
  COND: -1,
  ASSIGN: -2,
  STMT: -3
};

module.exports = grammar({
  name: 'bsv',

  inline: $ => [
    $.packageBody
  ],

  extras: $ => [
    /\s/,
    $.comment
  ],

  conflicts: $ => [
    [$.condPredicate],
    [$.moduleApp, $.exprPrimary],
    [$.typeIde, $.exprPrimary],
    [$.IValue, $.exprPrimary],
    [$.typeIde, $.subinterfaceDef],
    [$.typeIde, $.methodDef],
    [$.typeNat, $.decNum]
  ],

  word: $ => $.identifier,

  rules: {
    program: $ => choice($.package, repeat($.packageBody)),

    //////////////
    // Packages //
    //////////////
    package: $ => seq(
      'package', $.packageIde, ';',
      repeat($.packageBody),
      'endpackage', optional(seq(':', $.packageIde))
    ),

    packageBody: $ => choice(
      $.exportDecl,
      $.importDecl,
      $.packageStmt
    ),

    exportDecl: $ => seq(
      'export', comma_sep($.exportItem), ';'),
    exportItem: $ => choice(
      seq($.identifier, optional('(..)')),
      seq($.Identifier, optional('(..)')),
      seq($.packageIde, '::', '*')
    ),

    importDecl: $ => seq('import', comma_sep($.importItem), ';'),
    importItem: $ => seq($.packageIde, '::', '*'),

    packageStmt: $ => choice(
      $.moduleDef,
      $.interfaceDecl,
      $.typeDef,
      $.varDecl,
      $.varAssign,
      $.functionDef
      // typeclassDef
      // typeclassInstanceDef
      // externModuleImport
    ),

    packageIde: $ => $.Identifier,

    ///////////
    // Types //
    ///////////
    type: $ => choice(
      $.typePrimary,
      seq($.typePrimary, '(', comma_sep($.type), ')')  // Function type
    ),

    typePrimary: $ => choice(
      seq($.typeIde, optional(seq('#', '(', comma_sep($.type), ')'))),
      $.typeNat,
      seq('bit', '[', $.typeNat, ':', $.typeNat, ']'),
      'int'
    ),

    // Polymorphism types starts with lowercase letters
    typeIde: $ => choice($.Identifier, $.identifier),
    typeNat: $ => $.decDigits,

    ///////////////
    // Interface //
    ///////////////
    interfaceDecl: $ => seq(
      optional($.attributeInstances),
      'interface', $.typeDefType, ';',
      repeat($.interfaceMemberDecl),
      'endinterface', optional(seq(':', $.typeIde))
    ),

    typeDefType: $ => seq($.typeIde, optional($.typeFormals)),
    typeFormals: $ => seq('#', '(', comma_sep($.typeFormal), ')'),
    typeFormal: $ => seq(optional('numeric'), 'type', $.identifier),

    interfaceMemberDecl: $ => choice(
      $.methodProto,
      $.subinterfaceDecl
    ),

    methodProto: $ => seq(
      optional($.attributeInstances),
      'method', $.type, $.identifier,
      optional(seq('(', optional($.methodProtoFormals), ')')),
      ';'
    ),
    methodProtoFormals: $ => comma_sep($.methodProtoFormal),
    methodProtoFormal: $ => seq(optional($.attributeInstances), $.type, $.identifier),

    subinterfaceDecl: $ => seq(
      optional($.attributeInstances), 'interface', $.type, $.identifier, ';'
    ),

    ////////////
    // Module //
    ////////////
    moduleDef: $ => seq(
      optional($.attributeInstances),
      $.moduleProto,
      repeat($.moduleStmt),
      'endmodule', optional(seq(':', $.identifier))
    ),

    moduleProto: $ => seq(
      'module', optional(seq('[', $.type, ']')), $.identifier,
      optional($.moduleFormalParams), '(', optional($.moduleFormalArgs), ')',
      optional($.provisos), ';'
    ),

    moduleFormalParams: $ => seq(
      '#', '(', comma_sep($.moduleFormalParam), ')'
    ),
    moduleFormalParam: $ => seq(
      optional($.attributeInstances),
      optional('parameter'), $.type, $.identifier
    ),

    moduleFormalArgs: $ => choice(
      seq(optional($.attributeInstances), $.type),
      comma_sep(seq(optional($.attributeInstances), $.type, $.identifier))
    ),

    moduleStmt: $ => prec(PREC.STMT, choice(
      $.moduleInst,
      $.methodDef,
      $.subinterfaceDef,
      $.rule,
      $.varDo, $.varDeclDo,
      seq($.functionCall, ';'),
      // systemTaskStmt
      seq('(', $.expression, ')'),
      $.returnStmt,
      $.varDecl, $.varDeclDo,
      $.functionDef,
      $.moduleDef,
      $.moduleBeginEndStmt,
      $.moduleIfStmt,
      $.moduleCaseStmt,
      $.moduleWhileStmt,
      $.moduleForStmt
    )),

    moduleBeginEndStmt: $ => beginEndStmt($, $.moduleStmt),
    moduleIfStmt: $ => ifStmt($, $.moduleStmt),
    moduleCaseStmt: $ => caseStmt($, $.moduleStmt),
    moduleWhileStmt: $ => whileStmt($, $.moduleStmt),
    moduleForStmt: $ => forStmt($, $.moduleStmt),

    //////////////////////////
    // Module instantiation //
    //////////////////////////
    moduleInst: $ => seq(
      optional($.attributeInstances),
      $.type, $.identifier, '<-', $.moduleApp, ';'
    ),
    moduleApp: $ => seq(
      $.identifier,
      '(', optional(comma_sep($.moduleActualParamArg)), ')'
    ),
    moduleActualParamArg: $ => choice(
      $.expression,
      seq('clocked_by', $.expression),
      seq('reset_by', $.expression)
    ),

    ////////////////////////
    // Method definitions //
    ////////////////////////
    methodDef: $ => choice(
      seq(
        'method', optional($.type), $.identifier,
        optional(seq('(', optional($.methodFormals), ')')),
        optional($.implicitCond), ';',
        $.functionBody,
        'endmethod', optional(seq(':', $.identifier))
      ),
      seq(
        'method', 'Action', $.identifier,
        optional(seq('(', optional($.methodFormals), ')')),
        optional($.implicitCond), ';',
        repeat($.actionStmt),
        'endmethod', optional(seq(':', $.identifier))
      ),
      seq(
        'method', 'ActionValue', '#', '(', $.type, ')', $.identifier,
        optional(seq('(', optional($.methodFormals), ')')),
        optional($.implicitCond), ';',
        repeat($.actionValueStmt),
        'endmethod', optional(seq(':', $.identifier))
      ),
      seq(
        'method', optional(choice('Action', 'ActionValue', $.type)), $.identifier,
        optional(seq('(', $.methodFormals, ')')),
        optional($.implicitCond), '=', $.expression, ';'
      )
    ),

    methodFormals: $ => comma_sep($.methodFormal),
    methodFormal: $ => seq(optional($.type), $.identifier),
    implicitCond: $ => seq('if', '(', $.condPredicate, ')'),

    subinterfaceDef: $ => choice(
      seq(
        'interface', $.Identifier, $.identifier, ';',
        repeat($.interfaceStmt),
        'endinterface', optional(seq(':', $.identifier))
      ),
      seq('interface', optional($.type), $.identifier, '=', $.expression, ';')
    ),
    interfaceStmt: $ => choice(
      $.methodDef,
      $.subinterfaceDef,
      $.expressionStmt
    ),
    expressionStmt: $ => choice(
      $.varDecl, $.varAssign,
      $.functionDef,
      $.moduleDef,
      $.expressionBeginEndStmt,
      $.expressionIfStmt,
      $.expressionCaseStmt,
      $.expressionForStmt,
      $.expressionWhileStmt
    ),

    expressionBeginEndStmt: $ => beginEndStmt($, $.expressionStmt),
    expressionIfStmt: $ => ifStmt($, $.expressionStmt),
    expressionCaseStmt: $ => caseStmt($, $.expressionStmt),
    expressionForStmt: $ => forStmt($, $.expressionStmt),
    expressionWhileStmt: $ => whileStmt($, $.expressionStmt),

    rule: $ => seq(
      optional($.attributeInstances),
      'rule', $.identifier, optional($.ruleCond), ';',
      repeat($.actionStmt),  // ruleBody
      'endrule', optional(seq(':', $.identifier))
    ),
    ruleCond: $ => seq('(', $.condPredicate, ')'),

    ///////////////////////////////////////////
    // User-defined types (type definitions) //
    ///////////////////////////////////////////
    typeDef: $ => choice(
      $.typedefSynonym,
      $.typedefEnum,
      $.typedefStruct,
      $.typedefTaggedUnion
    ),

    typedefSynonym: $ => seq('typedef', $.type, $.typeDefType, ';'),

    typedefEnum: $ => seq(
      'typedef', 'enum', '{', $.typedefEnumElements, '}', $.Identifier,
      optional($.derives), ';'
    ),
    typedefEnumElements: $ => comma_sep($.typedefEnumElement),
    typedefEnumElement: $ => choice(
      seq($.Identifier, optional(seq('=', $.intLiteral))),
      seq($.Identifier, optional(seq('[', $.intLiteral, ']')), optional(seq('=', $.intLiteral))),
      seq(
        $.Identifier, optional(seq('[', $.intLiteral, ':', $.intLiteral, ']')),
        optional(seq('=', $.intLiteral))
      ),
    ),

    typedefStruct: $ => seq(
      'typedef', 'struct', '{',
      repeat($.structMember),
      '}', $.typeDefType, optional($.derives), ';'
    ),
    typedefTaggedUnion: $ => seq(
      'typedef', 'union', 'tagged', '{',
      repeat($.unionMember),
      '}', $.typeDefType, optional($.derives), ';'
    ),
    structMember: $ => choice(
      seq($.type, $.identifier, ';'),
      seq($.subUnion, $.identifier, ';')
    ),
    unionMember: $ => choice(
      seq($.type, $.Identifier, ';'),
      seq($.subStruct, $.Identifier, ';'),
      seq($.subUnion, $.Identifier, ';'),
      seq('void', $.Identifier, ';')
    ),
    subStruct: $ => seq(
      'struct', '{',
      repeat($.structMember),
      '}'
    ),
    subUnion: $ => seq(
      'union', 'tagged', '{',
      repeat($.unionMember),
      '}'
    ),

    /////////////////////////////////////////////////////
    // Type classes (overloading groups) and provisos  //
    /////////////////////////////////////////////////////
    provisos: $ => seq('provisos', '(', comma_sep($.proviso), ')'),
    proviso: $ => seq($.Identifier, '#', '(', comma_sep($.type), ')'),

    typeclassIde: $ => $.Identifier,
    
    derives: $ => seq('deriving', '(', comma_sep($.typeclassIde), ')'),

    //////////////////////////////////////////
    // Variable declarations and statements //
    //////////////////////////////////////////
    varDecl: $ => choice(
      seq($.type, comma_sep($.varInit), ';'),
      seq('let', $.identifier, '=', $.expression, ';')
    ),
    varInit: $ => seq($.identifier, optional($.arrayDims), optional(seq('=', $.expression))),
    arrayDims: $ => repeat1(seq('[', $.expression, ']')),

    varAssign: $ => prec.right(PREC.ASSIGN, choice(
      seq($.IValue, '=', $.expression, ';'),
      seq('let', $.identifier, '<-', $.expression, ';')
      // match pattern = expression ;
    )),
    IValue: $ => choice(
      $.identifier,
      prec(PREC.FIELD, seq($.IValue, '.', $.identifier)),
      prec(PREC.ARRAY_INDEX, seq($.IValue, '[', $.expression, ']')),
      prec(PREC.ARRAY_INDEX, seq($.IValue, '[', $.expression, ':', $.expression, ']'))
    ),

    regWrite: $ => prec.right(PREC.ASSIGN, choice(
      seq($.IValue, '<=', $.expression, ';'),
      seq('(', $.expression, ')', '<=', $.expression, ';'),
    )),

    //////////////////////////
    // Function definitions //
    //////////////////////////
    functionDef: $ => seq(
      optional($.attributeInstances),
      $.functionProto,
      $.functionBody,
      'endfunction', optional(seq(':', $.identifier))
    ),
    functionProto: $ => choice(
      seq(
        'function', $.type, $.identifier, '(', $.functionFormals, ')', optional($.provisos), ';'
      ),
      seq(
        'function', $.type, $.identifier, '(', $.functionFormals, ')',
        optional($.provisos), '=', $.expression, ';'
      )
    ),
    functionFormals: $ => comma_sep($.functionFormal),
    functionFormal: $ => seq($.type, $.identifier),
    functionBody: $ => choice(
      $.actionBlock,
      $.actionValueBlock,
      repeat1($.functionBodyStmt)  // Hotfix: can have no functionBody
    ),
    functionBodyStmt: $ => prec(PREC.STMT, choice(
      $.returnStmt,
      $.varDecl,
      $.varAssign,
      $.functionDef,
      $.moduleDef,
      $.functionBodyBeginEndStmt,
      $.functionBodyIfStmt,
      $.functionBodyCaseStmt,
      $.functionBodyWhileStmt,
      $.functionBodyForStmt
    )),
    returnStmt: $ => seq('return', $.expression, ';'),

    functionBodyBeginEndStmt: $ => beginEndStmt($, $.functionBodyStmt),
    functionBodyIfStmt: $ => ifStmt($, $.functionBodyStmt),
    functionBodyCaseStmt: $ => caseStmt($, $.functionBodyStmt),
    functionBodyWhileStmt: $ => whileStmt($, $.functionBodyStmt),
    functionBodyForStmt: $ => forStmt($, $.functionBodyForStmt),

    /////////////////
    // Expressions //
    /////////////////
    expression: $ => choice(
      $.condExpr,
      $.operatorExpr,
      $.exprPrimary
    ),
    exprPrimary: $ => choice(
      $.identifier,
      $.intLiteral,
      $.realLiteral,
      $.stringLiteral,
      // systemFunctionCall
      seq('(', $.expression, ')'),
      '?',  // Don't-care expressions
      // bitConcat, bitSelect
      // beginEndExpr
      $.actionBlock,
      $.actionValueBlock,
      $.functionCall,
      // methodCall
      // typeAssertion
      // structExpr
      seq($.exprPrimary, '.', $.identifier)
      // taggedUnionExpr
      // interfaceExpr
      // ruleExpr
      // caseExpr
      // seqFsmStmt, parFsmStmt
    ),

    condExpr: $ => prec.right(PREC.COND, seq(
      $.condPredicate, '?', $.expression, ':', $.expression
    )),
    condPredicate: $ => seq($.exprOrCondPattern, repeat(seq('&&&', $.exprOrCondPattern))),
    exprOrCondPattern: $ => prec(PREC.COND_PATTERN, choice(
      $.expression,
      seq($.expression, 'matches', $.pattern)
    )),

    operatorExpr: $ => choice(
      $.unaryExpr,
      $.binaryExpr,
    ),

    unaryExpr: $ => {
      const table = [
        ['+', PREC.UNOP_PLUS],
        ['-', PREC.UNOP_PLUS],
        ['!', PREC.UNOP_PLUS],
        ['~', PREC.UNOP_PLUS],
        ['&', PREC.UNOP_AND],
        ['~&', PREC.UNOP_NAND],
        ['|', PREC.UNOP_OR],
        ['~|', PREC.UNOP_NOR],
        ['^', PREC.UNOP_XOR],
        ['~^', PREC.UNOP_XNOR],
        ['^~', PREC.UNOP_XNOR]
      ];

      return choice(...table.map(([operator, precedence]) => {
        return prec(precedence, seq(
          field('unary_operator', operator),
          field('unary_right', $.expression),
        ));
      }));

    },

    binaryExpr: $ => {
      const table = [
        ['*', PREC.BINOP_MUL],
        ['/', PREC.BINOP_MUL],
        ['%', PREC.BINOP_MUL],
        ['+', PREC.BINOP_ADD],
        ['-', PREC.BINOP_ADD],
        ['<<', PREC.BINOP_SHT],
        ['>>', PREC.BINOP_SHT],
        ['<=', PREC.BINOP_COMP],
        ['>=', PREC.BINOP_COMP],
        ['<', PREC.BINOP_COMP],
        ['>', PREC.BINOP_COMP],
        ['==', PREC.BINOP_EQ],
        ['!=', PREC.BINOP_EQ],
        ['&', PREC.BINOP_AND],
        ['^', PREC.BINOP_XOR],
        ['~^', PREC.BINOP_XNOR],
        ['^~', PREC.BINOP_XNOR],
        ['|', PREC.BINOP_OR],
        ['&&', PREC.BINOP_LOGIC_AND],
        ['||', PREC.BINOP_LOGIC_OR]
      ];

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('binary_left', $.expression),
          field('binary_operator', operator),
          field('binary_right', $.expression),
        ));
      }));
    },

    /////////////
    // Actions //
    /////////////
    actionBlock: $ => prec.left(seq(
      'action', optional(seq(':', $.identifier)),
      repeat($.actionStmt),
      'endaction', optional(seq(':', $.identifier))
    )),
    actionStmt: $ => prec(PREC.STMT, choice(
      $.regWrite,
      $.varDo, $.varDeclDo,
      seq($.functionCall, ';'),
      // systemTaskStmt
      seq('(', $.expression, ')'),
      $.actionBlock,
      $.varDecl,
      $.varAssign,
      $.functionDef,
      $.moduleDef,
      $.actionBeginEndStmt,
      $.actionIfStmt,
      $.actionCaseStmt,
      $.actionWhileStmt,
      $.actionForStmt
    )),

    actionBeginEndStmt: $ => beginEndStmt($, $.actionStmt),
    actionIfStmt: $ => ifStmt($, $.actionStmt),
    actionCaseStmt: $ => caseStmt($, $.actionStmt),
    actionWhileStmt: $ => whileStmt($, $.actionStmt),
    actionForStmt: $ => forStmt($, $.actionStmt),

    //////////////////
    // ActionValues //
    //////////////////
    actionValueBlock: $ => prec.left(seq(
      'actionvalue', optional(seq(':', $.identifier)),
      repeat($.actionStmt),
      'endactionvalue', optional(seq(':', $.identifier))
    )),
    actionValueStmt: $ => prec(PREC.STMT, choice(
      $.regWrite,
      $.varDo, $.varDeclDo,
      seq($.functionCall, ';'),
      // systemTaskStmt
      seq('(', $.expression, ')'),
      $.returnStmt,
      $.actionBlock,
      $.varDecl,
      $.varAssign,
      $.functionDef,
      $.moduleDef,
      $.actionValueBeginEndStmt,
      $.actionValueIfStmt,
      $.actionValueCaseStmt,
      $.actionValueWhileStmt,
      $.actionValueForStmt
    )),

    actionValueBeginEndStmt: $ => beginEndStmt($, $.actionValueStmt),
    actionValueIfStmt: $ => ifStmt($, $.actionValueStmt),
    actionValueCaseStmt: $ => caseStmt($, $.actionValueStmt),
    actionValueWhileStmt: $ => whileStmt($, $.actionValueStmt),
    actionValueForStmt: $ => forStmt($, $.actionValueStmt),

    varDeclDo: $ => prec.right(PREC.ASSIGN, seq($.type, $.identifier, '<-', $.expression, ';')),
    varDo: $ => prec.right(PREC.ASSIGN, seq($.identifier, '<-', $.expression, ';')),

    functionCall: $ => prec.left(PREC.CALL, seq(
      // Note: The function must includes the argument list, like func(arg1, arg2)
      $.exprPrimary, seq('(', optional(comma_sep($.expression)), ')')
    )),

    //////////////////////
    // Pattern matching //
    //////////////////////
    // TODO: parse pattern
    pattern: $ => choice(
      seq('.', $.identifier),  // Pattern variable
      seq('.', '*')            // Wildcard
      // constantPattern
      // taggedUnionPattern
      // structPattern
      // tuplePattern
    ),

    ////////////////
    // Attributes //
    ////////////////
    attributeInstances: $ => repeat1($.attributeInstance),
    attributeInstance: $ => seq('(*', comma_sep($.attrSpec), '*)'),
    attrSpec: $ => seq($.attrName, optional(seq('=', $.expression))),
    attrName: $ => choice($.identifier, $.Identifier),

    //////////////////////
    // Integer literals //
    //////////////////////
    intLiteral: $ => choice(
      '\'0',
      '\'1',
      $.sizedIntLiteral,
      $.unsizedIntLiteral
    ),

    sizedIntLiteral: $ => seq(field('bitWidth', $.decDigits), $.baseLiteral),

    unsizedIntLiteral: $ => prec.left(choice(
      seq(optional($.sign), $.baseLiteral),
      seq(optional($.sign), $.decNum)
    )),

    baseLiteral: $ => choice(
      seq(choice('\'d', '\'D'), $.decDigitsUnderscore),
      seq(choice('\'h', '\'H'), $.hexDigitsUnderscore),
      seq(choice('\'o', '\'O'), $.octDigitsUnderscore),
      seq(choice('\'b', '\'B'), $.binDigitsUnderscore),
    ),

    decNum: $ => token(seq(/[0-9]+/, optional(/[0-9_]+/))),

    sign: $ => choice('+', '-'),

    decDigits: $ => /[0-9]+/,
    decDigitsUnderscore: $ => /[0-9_]+/,
    hexDigitsUnderscore: $ => /[0-9a-fA-F_]+/,
    octDigitsUnderscore: $ => /[0-7_]+/,
    binDigitsUnderscore: $ => /[01_]+/,

    ///////////////////
    // Real literals //
    ///////////////////
    realLiteral: $ => choice(
      token(seq(/[0-9]+[0-9_]*/, optional(seq('.', /[0-9_]+/)),
            /[eE]/, optional(/[-\+]/), /[0-9_]+/)),
      token(seq(/[0-9]+[0-9_]*/, '.', /[0-9_]+/))
    ),

    /////////////////////
    // String literals //
    /////////////////////
    stringLiteral: $ => seq('"', repeat(choice(
      /\\[nt\\"vfa]/,
      /\\[0-7]{3}/,
      /\\x[0-9A-Fa-f]{2}/,
      /[^"\\]/),
    ), '"'),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _ => token(choice(
      seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),

    // Identifiers starts with uppercase letters
    Identifier: $ => token(seq(UPPER_CASE_CHARS, IDENTIFIER_CHARS)),

    // Identifiers starts with lowercase letters
    identifier: $ => token(seq(LOWER_CASE_CHARS, IDENTIFIER_CHARS))
  }
});

function beginEndStmt($, stmt) {
  return seq(
    'begin', optional(seq(':', $.identifier)),
    repeat(stmt),
    'end', optional(seq(':', $.identifier))
  );
}

function ifStmt($, stmt) {
  return prec.left(seq(
    'if', '(', $.condPredicate, ')',
    stmt,
    optional(seq('else', stmt))
  ));
}

function caseStmt($, stmt) {
  let caseItem = seq(comma_sep($.expression), ':', stmt);
  let defaultItem = seq('default', optional(':'), stmt);
  // cases matches
  return seq(
    'case', '(', $.expression, ')',
    repeat(caseItem),
    optional(defaultItem),
    'endcase'
  );
}

function whileStmt($, stmt) {
  return seq(
    'while', '(', $.expression, ')',
    stmt
  );
}

function forStmt($, stmt) {
  let simpleVarAssign = seq($.identifier, '=', $.expression);
  let simpleVarDeclAssign = seq(optional($.type), $.identifier, '=', $.expression);
  let forOldInit = comma_sep(simpleVarAssign);
  let forNewInit = seq(
    $.type, $.identifier, '=', $.expression, repeat(seq(',', simpleVarDeclAssign))
  );
  let forInit = choice(
    forOldInit,
    forNewInit
  );
  let forTest = $.expression;
  let varIncr = seq($.identifier, '=', $.expression);
  let forIncr = comma_sep(varIncr);
  return seq(
    'for', '(', forInit, ';', forTest, ';', forIncr, ')',
    stmt
  );
}

function comma_sep(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
