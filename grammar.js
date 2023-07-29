
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
      'export', $.exportItem, repeat(seq(',', $.exportItem)), ';'),
    exportItem: $ => choice(
      seq($.identifier, optional('(..)')),
      seq($.Identifier, optional('(..)')),
      seq($.packageIde, '::', '*')
    ),

    importDecl: $ => seq(
      'import', $.importItem, repeat(seq(',', $.importItem)), ';'),
    importItem: $ => seq($.packageIde, '::', '*'),

    packageStmt: $ => choice(
      $.moduleDef,
      $.interfaceDecl,
      // typeDef
      // varDecl
      // varAssign
      // functionDef
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
      seq($.typePrimary, '(', $.type, repeat(seq(',', $.type)), ')')
    ),

    typePrimary: $ => choice(
      seq($.typeIde, optional(
        seq('#', '(', $.type, repeat(seq(',', $.type)), ')'))),
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
      '#', '(', $.typeFormal, repeat(seq(',', $.typeFormal)), ')'
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
    methodProtoFormals: $ => seq(
      $.methodProtoFormal, repeat(seq(',', $.methodProtoFormal))
    ),
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
      '#', '(', $.moduleFormalParam, repeat(seq(',', $.moduleFormalParam)), ')'
    ),
    moduleFormalParam: $ => seq(
      // optional(attributeInstances),
      optional('parameter'), $.type, $.identifier
    ),

    moduleFormalArgs: $ => choice(
      $.type,  // seq(optional(attributeInstances), $.type)
      seq($.type, $.identifier, repeat(seq(',', $.type, $.identifier)))
      // ^optional(attributeInstances)         ^optional(attributeInstances)
    ),

    moduleStmt: $ => choice(
      $.moduleInst,
      $.methodDef,
      // subinterfaceDef
      $.rule,
      // ...
    ),

    provisos: $ => 'provisos()',

    moduleInst: $ => seq(
      // optional(attributeInstances),
      $.type, $.identifier, '<-', $.moduleApp, ';'
    ),
    moduleApp: $ => seq(
      $.identifier,
      '(', optional(seq($.moduleActualParamArg, repeat(seq(',', $.moduleActualParamArg)))), ')'
    ),
    moduleActualParamArg: $ => choice(
      $.expression,
      seq('clocked_by', $.expression),
      seq('reset_by', $.expression)
    ),

    methodDef: $ => 'method',

    rule: $ => 'rule',

    /////////////////
    // Expressions //
    /////////////////
    expression: $ => '123',

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
      seq($.sign, $.baseLiteral),
      seq($.sign, $.decNum)
    ),

    baseLiteral: $ => choice(
      seq(choice('\'d', '\'D'), $.decDigitsUnderscore)
      // h
      // o
      // b
    ),

    decNum: $ => seq(
      $.decDigits, optional($.decDigitsUnderscore)
    ),

    bitWidth: $ => $.decDigits,

    sign: $ => choice('+', '-'),

    decDigits: $ => repeat1(/[0-9]/),
    decDigitsUnderscore: $ => repeat1(/[0-9_]/),
    // hex
    // oct
    // bin

    ///////////////////
    // Real literals //
    ///////////////////
    // TODO

    /////////////////////
    // String literals //
    /////////////////////
    // TODO

    // Identifiers starts with uppercase letters
    Identifier: $ => token(seq(UPPER_CASE_CHARS, IDENTIFIER_CHARS)),

    // Identifiers starts with lowercase letters
    identifier: $ => token(seq(LOWER_CASE_CHARS, IDENTIFIER_CHARS))
  }
});
