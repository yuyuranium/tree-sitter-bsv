
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
    [$.typeIde, $.exprPrimary],
    [$.lValue, $.exprPrimary],
    [$.typeIde, $.subinterfaceDef],
    [$.typeIde, $.methodDef],
    [$.moduleStmt, $.expressionStmt],
    [$.exprPrimary, $.actionStmt],
    [$.exprPrimary, $.actionValueStmt],
    [$.exprPrimary, $.moduleStmt],
    [$.moduleBeginEndStmt, $.expressionBeginEndStmt],
    [$.expressionStmt, $.actionStmt],
    [$.expressionStmt, $.actionValueStmt],
    [$.expressionBeginEndStmt, $.actionBeginEndStmt],
    [$.expressionBeginEndStmt, $.actionValueBeginEndStmt],
    [$.moduleStmt, $.caseExprItem],
    [$.moduleCaseStmt, $.caseExpr],
    [$.expressionCaseStmt, $.caseExpr],
    [$.moduleCaseStmt, $.expressionCaseStmt],
    [$.moduleCaseStmt, $.expressionCaseStmt, $.caseExpr],
    [$.caseExpr, $.actionCaseStmt],
    [$.expressionCaseStmt, $.actionCaseStmt],
    [$.expressionCaseStmt, $.actionCaseStmt, $.caseExpr],
    [$.actionValueStmt, $.caseExprItem],
    [$.caseExpr, $.actionValueCaseStmt],
    [$.expressionCaseStmt, $.actionValueCaseStmt],
    [$.expressionCaseStmt, $.actionValueCaseStmt, $.caseExpr],
    [$.typeIde, $.moduleApp, $.exprPrimary],
    [$.exprPrimary, $.structExpr]
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
      $.functionDef,
      $.typeclassDef,
      $.typeclassInstanceDef,
      $.externCImport
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
      seq('bit', optional(seq('[', $.typeNat, ':', $.typeNat, ']'))),
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

    moduleStmt: $ => choice(
      $.moduleInst,
      $.methodDef,
      $.subinterfaceDef,
      $.rule,
      $.varDo, $.varDeclDo,
      seq($.functionCall, ';'),
      $.systemTaskStmt,
      seq('(', $.expression, ')'),
      $.returnStmt,
      $.varDecl, $.varAssign,
      $.functionDef,
      $.moduleDef,
      $.moduleBeginEndStmt,
      $.moduleIfStmt,
      $.moduleCaseStmt,
      $.moduleWhileStmt,
      $.moduleForStmt
    ),

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
      seq('(', optional(comma_sep($.moduleActualParamArg)), ')')
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
        optional($.functionBody),
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
        optional(seq('(', optional($.methodFormals), ')')),
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

    typeclassDef: $ => seq(
      'typeclass', $.typeclassIde, $.typeFormals, optional($.provisos),
      optional($.typedepends), ';',
      repeat($.overloadedDef),
      'endtypeclass', optional(seq(':', $.typeclassIde))
    ),
    typeclassIde: $ => $.Identifier,
    typeFormals: $ => seq('#', '(', comma_sep($.typeFormal), ')'),
    typeFormal: $ => seq(optional('numeric'), 'type', $.typeIde),
    typedepends: $ => seq('dependencies', '(', comma_sep($.typedepend), ')'),
    typedepend: $ => seq($.typelist, 'determines', $.typelist),
    typelist: $ => choice(
      $.typeIde,
      seq('(', comma_sep($.typeIde), ')')
    ),
    overloadedDef: $ => choice($.functionProto, $.varDecl, $.moduleProto),

    typeclassInstanceDef: $ => seq(
      'instance', $.typeclassIde, '#', '(', comma_sep($.type), ')', optional($.provisos), ';',
      repeat(choice(
        seq($.varAssign, ';'),
        $.functionDef,
        $.moduleDef
      )),
      'endinstance', optional(seq(':', $.typeclassIde))
    ),
    
    derives: $ => seq('deriving', '(', comma_sep($.typeclassIde), ')'),

    //////////////////////////////////////////
    // Variable declarations and statements //
    //////////////////////////////////////////
    varDecl: $ => choice(
      seq($.type, comma_sep($.varInit), ';'),
      prec(PREC.ASSIGN, seq('let', $.identifier, '=', $.expression, ';'))
    ),
    varInit: $ => seq($.identifier, optional($.arrayDims), optional(seq('=', $.expression))),
    arrayDims: $ => repeat1(seq('[', $.expression, ']')),

    varAssign: $ => prec(PREC.ASSIGN, choice(
      seq($.lValue, '=', $.expression, ';'),
      seq('let', $.identifier, '<-', $.expression, ';'),
      seq('match', $.pattern, '=', $.expression, ';')
    )),
    lValue: $ => choice(
      $.identifier,
      prec(PREC.FIELD, seq($.lValue, '.', $.identifier)),
      prec(PREC.ARRAY_INDEX, seq($.lValue, '[', $.expression, ']')),
      prec(PREC.ARRAY_INDEX, seq($.lValue, '[', $.expression, ':', $.expression, ']'))
    ),

    regWrite: $ => choice(
      prec(PREC.ASSIGN, seq($.lValue, '<=', $.expression, ';')),
      prec(PREC.ASSIGN, seq('(', $.expression, ')', '<=', $.expression, ';')),
    ),

    //////////////////////////
    // Function definitions //
    //////////////////////////
    functionDef: $ => choice(
      seq(
        optional($.attributeInstances),
        $.functionProto,
        optional($.functionBody),  // Can have no functionBody
        'endfunction', optional(seq(':', $.identifier))
      ),
      $.functionAssign
    ),
    functionAssign: $ => seq(
      'function', $.type, $.identifier, '(', optional($.functionFormals), ')',
      optional($.provisos), '=', $.expression, ';'
    ),
    functionProto: $ => seq(
      'function', $.type, $.identifier, '(', optional($.functionFormals), ')', optional($.provisos), ';'
    ),
    functionFormals: $ => comma_sep($.functionFormal),
    functionFormal: $ => seq($.type, $.identifier),
    functionBody: $ => choice(
      $.actionBlock,
      $.actionValueBlock,
      repeat1($.functionBodyStmt)
    ),
    functionBodyStmt: $ => choice(
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
    ),
    returnStmt: $ => seq('return', $.expression, ';'),

    functionBodyBeginEndStmt: $ => beginEndStmt($, $.functionBodyStmt),
    functionBodyIfStmt: $ => ifStmt($, $.functionBodyStmt),
    functionBodyCaseStmt: $ => caseStmt($, $.functionBodyStmt),
    functionBodyWhileStmt: $ => whileStmt($, $.functionBodyStmt),
    functionBodyForStmt: $ => forStmt($, $.functionBodyStmt),

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
      $.Identifier,
      $.intLiteral,
      $.realLiteral,
      $.stringLiteral,
      $.systemFunctionCall,
      seq('valueof', '(', $.type, ')'),
      seq('valueOf', '(', $.type, ')'),
      seq('(', $.expression, ')'),
      '?',  // Don't-care expressions
      $.bitConcat, $.bitSelect,
      $.beginEndExpr,
      $.actionBlock,
      $.actionValueBlock,
      $.functionCall,
      $.methodCall,
      $.typeAssertion,
      $.structExpr,
      prec(PREC.FIELD, seq($.exprPrimary, '.', $.identifier)),  // Struct member selection
      $.taggedUnionExpr,
      $.interfaceExpr,
      $.rulesExpr,
      $.caseExpr,
      prec(PREC.STMT, $.seqFsmStmt),
      prec(PREC.STMT, $.parFsmStmt),
      "True", "False"
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

    bitConcat: $ => seq('{', comma_sep($.expression), '}'),

    bitSelect: $ => prec(PREC.ARRAY_INDEX, seq(
      $.exprPrimary, '[', $.expression, optional(seq(':', $.expression)), ']'
    )),

    beginEndExpr: $ => prec.left(seq(
      'begin', optional(seq(':', $.identifier)),
      repeat($.expressionStmt),
      $.expression,
      'end', optional(seq(':', $.identifier))
    )),

    /////////////
    // Actions //
    /////////////
    actionBlock: $ => prec.left(seq(
      'action', optional(seq(':', $.identifier)),
      repeat($.actionStmt),
      'endaction', optional(seq(':', $.identifier))
    )),
    actionStmt: $ => choice(
      $.regWrite,
      $.varDo, $.varDeclDo,
      seq($.functionCall, ';'),
      $.systemTaskStmt,
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
    ),

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
    actionValueStmt: $ => choice(
      $.regWrite,
      $.varDo, $.varDeclDo,
      seq($.functionCall, ';'),
      $.systemTaskStmt,
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
    ),

    actionValueBeginEndStmt: $ => beginEndStmt($, $.actionValueStmt),
    actionValueIfStmt: $ => ifStmt($, $.actionValueStmt),
    actionValueCaseStmt: $ => caseStmt($, $.actionValueStmt),
    actionValueWhileStmt: $ => whileStmt($, $.actionValueStmt),
    actionValueForStmt: $ => forStmt($, $.actionValueStmt),

    varDeclDo: $ => prec(PREC.ASSIGN, seq($.type, $.identifier, '<-', $.expression, ';')),
    varDo: $ => prec(PREC.ASSIGN, seq($.lValue, '<-', $.expression, ';')),

    functionCall: $ => prec.left(PREC.CALL, seq(
      // Note: The function must includes the argument list, like func(arg1, arg2)
      $.exprPrimary, seq('(', optional(comma_sep($.expression)), ')')
    )),

    methodCall: $ => prec.left(PREC.CALL, seq(
      $.exprPrimary, '.', $.identifier,
      optional(seq('(', optional(comma_sep($.expression)), ')'))
    )),

    typeAssertion: $ => choice(
      seq($.type, '\'', $.bitConcat),
      seq($.type, '\'', '(', $.expression, ')')
    ),

    structExpr: $ => seq($.Identifier, '{', comma_sep($.memberBind), '}'),
    memberBind: $ => seq($.identifier, ':', $.expression),

    taggedUnionExpr: $ => prec.right(choice(
      seq('tagged', $.Identifier, '{', comma_sep($.memberBind), '}'),
      seq('tagged', $.Identifier, optional($.exprPrimary))
    )),

    interfaceExpr: $ => prec.left(seq(
      'interface', $.type, ';',
      repeat($.interfaceStmt),
      'endinterface', optional(seq(':', $.Identifier))
    )),

    rulesExpr: $ => prec.left(seq(
      optional($.attributeInstances),
      'rules', optional(seq(':', $.identifier)),
      $.rulesStmt,
      'endrules', optional(seq(':', $.identifier))
    )),

    rulesStmt: $ => choice($.rule, $.expressionStmt),

    //////////////////////
    // Pattern matching //
    //////////////////////
    pattern: $ => choice(
      seq('.', $.identifier),  // Pattern variable
      seq('.', '*'),           // Wildcard
      $.constantPattern,       // Constant
      $.taggedUnionPattern,    // Tagged union
      $.structPattern,         // Struct
      $.tuplePattern           // Tuple
    ),

    constantPattern: $ => choice(
      $.intLiteral,
      $.realLiteral,
      $.stringLiteral,
      $.Identifier  // Enum label
    ),
    taggedUnionPattern: $ => seq('tagged', $.Identifier, optional($.pattern)),
    structPattern: $ => seq('tagged', $.Identifier, '{', comma_sep(seq($.identifier, ':', $.pattern)), '}'),
    tuplePattern: $ => seq('{', comma_sep($.pattern), '}'),

    /////////////////////
    // Case expression //
    /////////////////////
    caseExpr: $ => choice(
      seq(
        'case', '(', $.expression, ')', 'matches',
        repeat($.caseExprPatItem),
        'endcase'
      ),
      seq(
        'case', '(', $.expression, ')',
        repeat($.caseExprItem),
        'endcase'
      )
    ),
    caseExprPatItem: $ => choice(
      field('case_item', seq($.pattern, optional(seq('&&&', $.expression)), ':', $.returnStmt)),
      field('default_item', seq('default', optional(':'), $.returnStmt))
    ),
    caseExprItem: $ => choice(
      field('case_item', seq(comma_sep($.expression), ':', $.returnStmt)),
      field('default_item', seq('default', optional(':'), $.returnStmt))
    ),

    //////////////////////////
    // Finite state machine //
    //////////////////////////
    fsmStmt: $ => choice(
      $.exprFsmStmt,
      $.seqFsmStmt,
      $.parFsmStmt,
      $.ifFsmStmt,
      $.whileFsmStmt,
      $.repeatFsmStmt,
      $.forFsmStmt,
      $.returnFsmStmt
    ),
    exprFsmStmt: $ => choice(
      $.regWrite,
      seq($.expression, ';'),
      $.systemTaskStmt,
      seq('noAction', ';')
    ),
    seqFsmStmt: $ => seq(
      'seq', repeat1($.fsmStmt), 'endseq'
    ),
    parFsmStmt: $ => seq(
      'par', repeat1($.fsmStmt), 'endpar'
    ),
    ifFsmStmt: $ => prec.left(seq(
      'if', $.expression, field('if_body', $.fsmStmt),
      optional(seq('else', $.fsmStmt))
    )),
    whileFsmStmt: $ => seq(
      'while', '(', $.expression, ')',
      field('while_body', $.loopBodyFsmStmt)
    ),
    forFsmStmt: $ => seq(
      // The first ';' is removed due to the existance of ';' in all fsmStmt.
      // 'for', '(', $.fsmStmt, ';', $.expression, ';', $.fsmStmt, ')',
      'for', '(', $.fsmStmt, $.expression, ';', $.fsmStmt, ')',
      field('for_body', $.loopBodyFsmStmt)
    ),
    returnFsmStmt: $ => seq(
      'return', ';'
    ),
    repeatFsmStmt: $ => seq(
      'repeat', '(', $.expression, ')',
      $.loopBodyFsmStmt
    ),
    loopBodyFsmStmt: $ => choice(
      $.fsmStmt,
      seq('break', ';'),
      seq('continue', ';')
    ),

    ////////////////////////////////
    // System tasks and functions //
    ////////////////////////////////
    systemTaskStmt: $ => choice(
      // General case
      seq($.dollarIdentifier, optional(seq('(', optional(comma_sep($.expression)), ')')), ';'),
      seq($.displayTaskName, '(', optional(comma_sep($.expression)), ')', ';')
    ),
    displayTaskName: $ => choice(
      '$display', '$displayb', '$displayo', '$displayh',
      '$write', '$writeb', '$writeo', '$writeh'
    ),
    systemFunctionCall: $ => choice(
      '$time',
      '$stime'
    ),
    dollarIdentifier: $ => token(seq('$', LOWER_CASE_CHARS, IDENTIFIER_CHARS)),

    /////////////////////////////////
    // Embedding C in a BSV Design //
    /////////////////////////////////
    externCImport: $ => seq(
      'import', '"BDPI"', optional(seq($.identifier, '=')), 'function', $.type,
      $.identifier, '(', optional($.CFuncArgs), ')', optional($.provisos), ';'
    ),
    CFuncArgs: $ => comma_sep($.CFuncArg),
    CFuncArg: $ => seq($.type, optional($.identifier)),

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
      seq(optional($.decNum), choice('\'d', '\'D'), $.decDigitsUnderscore),
      seq(optional($.decNum), choice('\'h', '\'H'), $.hexDigitsUnderscore),
      seq(optional($.decNum), choice('\'o', '\'O'), $.octDigitsUnderscore),
      seq(optional($.decNum), choice('\'b', '\'B'), $.binDigitsUnderscore),
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
    field('if_body', stmt),
    optional(seq('else', stmt))
  ));
}

function caseStmt($, stmt) {
  let caseItem = field('case_item', seq(comma_sep($.expression), ':', stmt));
  let defaultItem = field('default_item', seq('default', optional(':'), stmt));
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
    field('while_body', stmt)
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
    field('for_body', stmt)
  );
}

function comma_sep(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
