
const UPPER_CASE_CHARS = /[A-Z]/
const LOWER_CASE_CHARS = /[a-z_]/
const IDENTIFIER_CHARS = /([a-zA-Z0-9_$])*/

const PREC = {
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
  BINOP_LOGIC_OR: 1
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

    importDecl: $ => seq(
      'import', comma_sep($.importItem), ';'),
    importItem: $ => seq($.packageIde, '::', '*'),

    packageStmt: $ => choice(
      $.moduleDef,
      $.interfaceDecl,
      // typeDef
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
      seq($.typeIde, optional(
        seq('#', '(', comma_sep($.type), ')'))),
      $.typeNat,
      seq('bit', '[', $.typeNat, ':', $.typeNat, ']'),
      'int'
    ),

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
    methodProtoFormal: $ => seq(
      optional($.attributeInstances), $.type, $.identifier
    ),

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

    moduleStmt: $ => prec(-3, choice(
      $.moduleInst,
      $.methodDef,
      // subinterfaceDef
      $.rule,
      $.varDo, $.varDeclDo,
      seq($.functionCall, ';'),
      // systemTaskStmt
      seq('(', $.expression, ')'),
      $.returnStmt,
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

    provisos: $ => 'provisos()',

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
        'method', $.type, $.identifier,
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
      )
    ),

    methodFormals: $ => comma_sep($.methodFormal),
    methodFormal: $ => seq(optional($.type), $.identifier),
    implicitCond: $ => seq('if', '(', $.condPredicate, ')'),

    rule: $ => seq(
      optional($.attributeInstances),
      'rule', $.identifier, optional($.ruleCond), ';',
      repeat($.actionStmt),  // ruleBody
      'endrule', optional(seq(':', $.identifier))
    ),
    ruleCond: $ => seq('(', $.condPredicate, ')'),

    //////////////////////////////////////////
    // Variable declarations and statements //
    //////////////////////////////////////////
    varDecl: $ => choice(
      seq($.type, comma_sep($.varInit), ';'),
      seq('let', $.identifier, '=', $.expression, ';')
    ),
    varInit: $ => seq($.identifier, optional($.arrayDims), optional(seq('=', $.expression))),
    arrayDims: $ => repeat1(seq('[', $.expression, ']')),

    varAssign: $ => prec.right(-2, choice(
      seq($.IValue, '=', $.expression, ';'),
      seq('let', $.identifier, '<-', $.expression, ';')
    )),
    IValue: $ => choice(
      $.identifier,
      seq($.IValue, '.', $.identifier),
      seq($.IValue, '[', $.expression, ']'),
      seq($.IValue, '[', $.expression, ':', $.expression, ']')
    ),

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
        'function', $.type, $.identifier, '(', $.functionFormals, ')',
        optional($.provisos), ';'
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
      repeat1($.functionBodyStmt)
    ),
    functionBodyStmt: $ => prec(-3, choice(
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
      '?',
      $.functionCall
      // ...
    ),

    condExpr: $ => prec.right(-1, seq(
      $.condPredicate, '?', $.expression, ':', $.expression
    )),
    condPredicate: $ => seq(
      $.exprOrCondPattern, repeat(seq('&&&', $.exprOrCondPattern))
    ),
    exprOrCondPattern: $ => prec(PREC.UNOP_PLUS + 1, choice(
      $.expression,
      seq($.expression, 'matches', $.pattern)
    )),

    operatorExpr: $ => choice(
      seq($.unop, $.expression),
      prec.left(PREC.BINOP_MUL, seq($.expression, $.binop, $.expression))
    ),


    unop: $ => choice(
      prec(PREC.UNOP_PLUS, choice('+', '-', '!', '~')),
      prec(PREC.UNOP_AND, '&'),
      prec(PREC.UNOP_NAND, '~&'),
      prec(PREC.UNOP_OR, '|'),
      prec(PREC.UNOP_NOR, '~|'),
      prec(PREC.UNOP_XOR, '^'),
      prec(PREC.UNOP_XNOR, choice('~^', '^~'))
    ),

    binop: $ => choice(
      prec(PREC.BINOP_MUL, choice('*', '/', '%')),
      prec(PREC.BINOP_ADD, choice('+', '-')),
      prec(PREC.BINOP_SHT, choice('<<', '>>')),
      prec(PREC.BINOP_COMP, choice('<=', '>=', '<', '>')),
      prec(PREC.BINOP_EQ, choice('==', '!=')),
      prec(PREC.BINOP_AND, '&'),
      prec(PREC.BINOP_XOR, '^'),
      prec(PREC.BINOP_XNOR, choice('~^', '^~')),
      prec(PREC.BINOP_OR, '|'),
      prec(PREC.BINOP_LOGIC_AND, '&&'),
      prec(PREC.BINOP_LOGIC_OR, '||')
    ),

    /////////////
    // Actions //
    /////////////
    actionBlock: $ => seq(
      'action', optional(seq(':', $.identifier)),
      repeat($.actionStmt),
      'endaction', optional(seq(':', $.identifier))
    ),
    actionStmt: $ => prec(-3, choice(
      // regWrite
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
    actionValueBlock: $ => seq(
      'actionvalue', optional(seq(':', $.identifier)),
      repeat($.actionStmt),
      'endactionvalue', optional(seq(':', $.identifier))
    ),
    actionValueStmt: $ => prec(-3, choice(
      // regWrite
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

    varDeclDo: $ => prec.right(-2, seq($.type, $.identifier, '<-', $.expression)),
    varDo: $ => prec.right(-2, seq($.identifier, '<-', $.expression)),

    functionCall: $ => prec.left(19, seq(
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

    unsizedIntLiteral: $ => choice(
      seq(optional($.sign), $.baseLiteral),
      seq(optional($.sign), $.decNum)
    ),

    baseLiteral: $ => choice(
      seq(choice('\'d', '\'D'), $.decDigitsUnderscore),
      seq(choice('\'h', '\'H'), $.hexDigitsUnderscore),
      seq(choice('\'o', '\'O'), $.octDigitsUnderscore),
      seq(choice('\'b', '\'B'), $.binDigitsUnderscore),
    ),

    decNum: $ => prec.left(seq(
      $.decDigits, optional($.decDigitsUnderscore)
    )),

    sign: $ => choice('+', '-'),

    decDigits: $ => prec.left(repeat1(/[0-9]/)),
    decDigitsUnderscore: $ => repeat1(/[0-9_]/),
    hexDigitsUnderscore: $ => repeat1(/[0-9a-fA-F_]/),
    octDigitsUnderscore: $ => repeat1(/[0-7_]/),
    binDigitsUnderscore: $ => repeat1(/[01_]/),

    ///////////////////
    // Real literals //
    ///////////////////
    realLiteral: $ => choice(
      seq($.decNum, optional(seq('.', $.decDigitsUnderscore)),
          $.exp, optional($.sign), $.decDigitsUnderscore),
      seq($.decNum, '.', $.decDigitsUnderscore)
    ),

    exp: $ => choice('e', 'E'),

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
  let simpleVarDeclAssign = seq(optional($.type), $.identifier, '=', $.expression)
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
