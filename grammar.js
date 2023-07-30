
const UPPER_CASE_CHARS = /[A-Z]/
const LOWER_CASE_CHARS = /[a-z]/
const IDENTIFIER_CHARS = /([a-zA-Z0-9_$])*/

module.exports = grammar({
  name: 'bsv',

  inline: $ => [
    $.packageBody
  ],

  extras: $ => [
    /\s/
  ],

  conflicts: $ => [
    [$.condPredicate],
    [$.moduleApp, $.exprPrimary]
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
      // varDecl
      // varAssign
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
      seq($.typePrimary, '(', comma_sep($.type), ')')
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
      // optional(attributeInstances),
      'interface', $.typeDefType, ';',
      repeat($.interfaceMemberDecl),
      'endinterface', optional(seq(':', $.typeIde))
    ),

    typeDefType: $ => seq($.typeIde, optional($.typeFormals)),
    typeFormals: $ => seq(
      '#', '(', comma_sep($.typeFormal), ')'
    ),
    typeFormal: $ => seq(optional('numeric'), 'type', $.identifier),

    interfaceMemberDecl: $ => choice(
      $.methodProto,
      $.subinterfaceDecl
    ),

    methodProto: $ => seq(
      // optional(attributeInstances),
      'method', $.type, $.identifier,
      optional(seq('(', optional($.methodProtoFormals), ')')),
      ';'
    ),
    methodProtoFormals: $ => comma_sep($.methodProtoFormal),
    methodProtoFormal: $ => seq(
      // optional(attributeInstances),
      $.type, $.identifier
    ),

    subinterfaceDecl: $ => seq(
      // optional(attributeInstances),
      'interface', $.type, $.identifier, ';'
    ),

    ////////////
    // Module //
    ////////////
    moduleDef: $ => seq(
      // optional(attributeInstances),
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
      // optional(attributeInstances),
      optional('parameter'), $.type, $.identifier
    ),

    moduleFormalArgs: $ => choice(
      $.type,  // seq(optional(attributeInstances), $.type)
      comma_sep(seq($.type, $.identifier))
      //           ^optional(attributeInstances)
    ),

    moduleStmt: $ => choice(
      $.moduleInst,
      $.methodDef,
      // subinterfaceDef
      $.rule,
      $.varDo, $.varDeclDo,
      // functionCall
      // systemTaskStmt
      seq('(', $.expression, ')'),
      $.returnStmt,
      $.functionDef,
      $.moduleDef,
      // beginEndStmt,
      // if, case, for, while
    ),

    provisos: $ => 'provisos()',

    //////////////////////////
    // Module instantiation //
    //////////////////////////
    moduleInst: $ => seq(
      // optional(attributeInstances),
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

    rule: $ => 'rule',

    //////////////////////////
    // Function definitions //
    //////////////////////////
    functionDef: $ => seq(
      // optional(attributeInstances),
      $.functionProto,
      $.functionBody,
      'endfunction', optional(seq(':', $.identifier))
    ),
    functionProto: $ => seq(
      'function', $.type, $.identifier, '(', $.functionFormals, ')', optional($.provisos), ';'
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
      // varDecl
      // varAssign
      // functionDef
      $.moduleDef,
      // beginEndStmt
      // if, case, for, while
    ),
    returnStmt: $ => seq('return', $.expression, ';'),

    /////////////////
    // Expressions //
    /////////////////
    // TODO: parse actual expression
    expression: $ => choice(
      $.condExpr,
      // operatorExpr,
      $.exprPrimary
    ),
    exprPrimary: $ => choice(
      $.identifier,
      $.intLiteral,
      $.realLiteral,
      $.stringLiteral,
      // systemFunctionCall
      seq('(', $.expression, ')'),
      '?'
      // ...
    ),

    condExpr: $ => prec.right(2, seq($.condPredicate, '?', $.expression, ':', $.expression)),
    condPredicate: $ => seq(
      $.exprOrCondPattern, repeat(seq('&&&', $.exprOrCondPattern))
    ),
    exprOrCondPattern: $ => choice(
      $.expression,
      seq($.expression, 'matches', $.pattern)
    ),

    /////////////
    // Actions //
    /////////////
    actionBlock: $ => seq(
      'action', optional(seq(':', $.identifier)),
      repeat($.actionStmt),
      'endaction', optional(seq(':', $.identifier))
    ),
    actionStmt: $ => choice(
      // regWrite
      $.varDo, $.varDeclDo,
      // functionCall
      // systemTaskStmt
      // (expression)
      $.actionBlock,
      // varDecl
      // varAssign
      // functionDef
      $.moduleDef
      // beginEndStmt
      // if, case, for, while
    ),

    //////////////////
    // ActionValues //
    //////////////////
    actionValueBlock: $ => seq(
      'actionvalue', optional(seq(':', $.identifier)),
      repeat($.actionStmt),
      'endactionvalue', optional(seq(':', $.identifier))
    ),
    actionValueStmt: $ => choice(
      // regWrite
      $.varDo, $.varDeclDo,
      // functionCall
      // systemTaskStmt
      // (expression)
      $.returnStmt,
      $.actionBlock,
      // varDecl
      // varAssign
      // functionDef
      $.moduleDef
      // beginEndStmt
      // if, case, for, while
    ),

    varDeclDo: $ => seq($.type, $.identifier, '<-', $.expression),
    varDo: $ => seq($.identifier, '<-', $.expression),

    //////////////////////
    // Pattern matching //
    //////////////////////
    // TODO: parse pattern
    pattern: $ => choice(
      seq('.', $.identifier),  // Pattern variable
      seq('.', '*')            // Wildcard
    ),

    //////////////////////
    // Integer literals //
    //////////////////////
    intLiteral: $ => choice(
      '\'0',
      '\'1',
      $.sizedIntLiteral,
      $.unsizedIntLiteral
    ),

    sizedIntLiteral: $ => seq($.bitWidth, $.baseLiteral),

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

    decNum: $ => seq(
      $.decDigits, optional($.decDigitsUnderscore)
    ),

    bitWidth: $ => $.decDigits,

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

    // Identifiers starts with uppercase letters
    Identifier: $ => token(seq(UPPER_CASE_CHARS, IDENTIFIER_CHARS)),

    // Identifiers starts with lowercase letters
    identifier: $ => token(seq(LOWER_CASE_CHARS, IDENTIFIER_CHARS))
  }
});

function comma_sep(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
