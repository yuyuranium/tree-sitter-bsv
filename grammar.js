
const UPPER_CASE_CHARS = /[A-Z]/
const LOWER_CASE_CHARS = /[a-z]/
const IDENTIFIER_CHARS = /([a-zA-Z0-9_$])*/

module.exports = grammar({
  name: 'bsv',

  extras: $ => [
    /\s/
  ],

  rules: {
    program: $ => choice($.package, optional($.packageBody)),

    //////////////
    // Packages //
    //////////////
    package: $ => seq(
      'package', $.packageIde, ';',
      optional($.packageBody),
      'endpackage', optional(seq(':', $.packageIde))
    ),

    packageBody: $ => repeat1(choice(
      $.exportDecl,
      $.importDecl,
      $.packageStmt
    )),

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
    moduleDef: $ => 'module',

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
