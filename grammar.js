
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

    moduleFormalParams: $ => 'param',

    moduleFormalArgs: $ => 'args',

    moduleStmt: $ => 'stmt',

    provisos: $ => 'provisos()',

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

    decDigits: $ => repeat1(/[0-9]/),
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
