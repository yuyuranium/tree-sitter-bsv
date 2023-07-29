#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_package = 1,
  anon_sym_SEMI = 2,
  anon_sym_endpackage = 3,
  anon_sym_COLON = 4,
  anon_sym_export = 5,
  anon_sym_COMMA = 6,
  anon_sym_LPAREN_DOT_DOT_RPAREN = 7,
  anon_sym_COLON_COLON = 8,
  anon_sym_STAR = 9,
  anon_sym_import = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_POUND = 13,
  anon_sym_bit = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_int = 17,
  anon_sym_interface = 18,
  anon_sym_endinterface = 19,
  anon_sym_numeric = 20,
  anon_sym_type = 21,
  anon_sym_method = 22,
  anon_sym_endmodule = 23,
  anon_sym_module = 24,
  sym_moduleFormalParams = 25,
  sym_moduleFormalArgs = 26,
  sym_moduleStmt = 27,
  sym_provisos = 28,
  anon_sym_SQUOTE0 = 29,
  anon_sym_SQUOTE1 = 30,
  anon_sym_SQUOTEd = 31,
  anon_sym_SQUOTED = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  aux_sym_decDigits_token1 = 35,
  aux_sym_decDigitsUnderscore_token1 = 36,
  sym_Identifier = 37,
  sym_identifier = 38,
  sym_program = 39,
  sym_package = 40,
  sym_exportDecl = 41,
  sym_exportItem = 42,
  sym_importDecl = 43,
  sym_importItem = 44,
  sym_packageStmt = 45,
  sym_packageIde = 46,
  sym_type = 47,
  sym_typePrimary = 48,
  sym_typeIde = 49,
  sym_typeNat = 50,
  sym_interfaceDecl = 51,
  sym_typeDefType = 52,
  sym_typeFormals = 53,
  sym_typeFormal = 54,
  sym_interfaceMemberDecl = 55,
  sym_methodProto = 56,
  sym_methodProtoFormals = 57,
  sym_methodProtoFormal = 58,
  sym_subinterfaceDecl = 59,
  sym_moduleDef = 60,
  sym_moduleProto = 61,
  sym_decDigits = 62,
  aux_sym_program_repeat1 = 63,
  aux_sym_exportDecl_repeat1 = 64,
  aux_sym_importDecl_repeat1 = 65,
  aux_sym_type_repeat1 = 66,
  aux_sym_interfaceDecl_repeat1 = 67,
  aux_sym_typeFormals_repeat1 = 68,
  aux_sym_methodProtoFormals_repeat1 = 69,
  aux_sym_moduleDef_repeat1 = 70,
  aux_sym_decDigits_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_endpackage] = "endpackage",
  [anon_sym_COLON] = ":",
  [anon_sym_export] = "export",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = "(..)",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_STAR] = "*",
  [anon_sym_import] = "import",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND] = "#",
  [anon_sym_bit] = "bit",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_int] = "int",
  [anon_sym_interface] = "interface",
  [anon_sym_endinterface] = "endinterface",
  [anon_sym_numeric] = "numeric",
  [anon_sym_type] = "type",
  [anon_sym_method] = "method",
  [anon_sym_endmodule] = "endmodule",
  [anon_sym_module] = "module",
  [sym_moduleFormalParams] = "moduleFormalParams",
  [sym_moduleFormalArgs] = "moduleFormalArgs",
  [sym_moduleStmt] = "moduleStmt",
  [sym_provisos] = "provisos",
  [anon_sym_SQUOTE0] = "'0",
  [anon_sym_SQUOTE1] = "'1",
  [anon_sym_SQUOTEd] = "'d",
  [anon_sym_SQUOTED] = "'D",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_decDigits_token1] = "decDigits_token1",
  [aux_sym_decDigitsUnderscore_token1] = "decDigitsUnderscore_token1",
  [sym_Identifier] = "Identifier",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym_package] = "package",
  [sym_exportDecl] = "exportDecl",
  [sym_exportItem] = "exportItem",
  [sym_importDecl] = "importDecl",
  [sym_importItem] = "importItem",
  [sym_packageStmt] = "packageStmt",
  [sym_packageIde] = "packageIde",
  [sym_type] = "type",
  [sym_typePrimary] = "typePrimary",
  [sym_typeIde] = "typeIde",
  [sym_typeNat] = "typeNat",
  [sym_interfaceDecl] = "interfaceDecl",
  [sym_typeDefType] = "typeDefType",
  [sym_typeFormals] = "typeFormals",
  [sym_typeFormal] = "typeFormal",
  [sym_interfaceMemberDecl] = "interfaceMemberDecl",
  [sym_methodProto] = "methodProto",
  [sym_methodProtoFormals] = "methodProtoFormals",
  [sym_methodProtoFormal] = "methodProtoFormal",
  [sym_subinterfaceDecl] = "subinterfaceDecl",
  [sym_moduleDef] = "moduleDef",
  [sym_moduleProto] = "moduleProto",
  [sym_decDigits] = "decDigits",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_exportDecl_repeat1] = "exportDecl_repeat1",
  [aux_sym_importDecl_repeat1] = "importDecl_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_interfaceDecl_repeat1] = "interfaceDecl_repeat1",
  [aux_sym_typeFormals_repeat1] = "typeFormals_repeat1",
  [aux_sym_methodProtoFormals_repeat1] = "methodProtoFormals_repeat1",
  [aux_sym_moduleDef_repeat1] = "moduleDef_repeat1",
  [aux_sym_decDigits_repeat1] = "decDigits_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_endpackage] = anon_sym_endpackage,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = anon_sym_LPAREN_DOT_DOT_RPAREN,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_bit] = anon_sym_bit,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_endinterface] = anon_sym_endinterface,
  [anon_sym_numeric] = anon_sym_numeric,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_endmodule] = anon_sym_endmodule,
  [anon_sym_module] = anon_sym_module,
  [sym_moduleFormalParams] = sym_moduleFormalParams,
  [sym_moduleFormalArgs] = sym_moduleFormalArgs,
  [sym_moduleStmt] = sym_moduleStmt,
  [sym_provisos] = sym_provisos,
  [anon_sym_SQUOTE0] = anon_sym_SQUOTE0,
  [anon_sym_SQUOTE1] = anon_sym_SQUOTE1,
  [anon_sym_SQUOTEd] = anon_sym_SQUOTEd,
  [anon_sym_SQUOTED] = anon_sym_SQUOTED,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_decDigits_token1] = aux_sym_decDigits_token1,
  [aux_sym_decDigitsUnderscore_token1] = aux_sym_decDigitsUnderscore_token1,
  [sym_Identifier] = sym_Identifier,
  [sym_identifier] = sym_identifier,
  [sym_program] = sym_program,
  [sym_package] = sym_package,
  [sym_exportDecl] = sym_exportDecl,
  [sym_exportItem] = sym_exportItem,
  [sym_importDecl] = sym_importDecl,
  [sym_importItem] = sym_importItem,
  [sym_packageStmt] = sym_packageStmt,
  [sym_packageIde] = sym_packageIde,
  [sym_type] = sym_type,
  [sym_typePrimary] = sym_typePrimary,
  [sym_typeIde] = sym_typeIde,
  [sym_typeNat] = sym_typeNat,
  [sym_interfaceDecl] = sym_interfaceDecl,
  [sym_typeDefType] = sym_typeDefType,
  [sym_typeFormals] = sym_typeFormals,
  [sym_typeFormal] = sym_typeFormal,
  [sym_interfaceMemberDecl] = sym_interfaceMemberDecl,
  [sym_methodProto] = sym_methodProto,
  [sym_methodProtoFormals] = sym_methodProtoFormals,
  [sym_methodProtoFormal] = sym_methodProtoFormal,
  [sym_subinterfaceDecl] = sym_subinterfaceDecl,
  [sym_moduleDef] = sym_moduleDef,
  [sym_moduleProto] = sym_moduleProto,
  [sym_decDigits] = sym_decDigits,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_exportDecl_repeat1] = aux_sym_exportDecl_repeat1,
  [aux_sym_importDecl_repeat1] = aux_sym_importDecl_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_interfaceDecl_repeat1] = aux_sym_interfaceDecl_repeat1,
  [aux_sym_typeFormals_repeat1] = aux_sym_typeFormals_repeat1,
  [aux_sym_methodProtoFormals_repeat1] = aux_sym_methodProtoFormals_repeat1,
  [aux_sym_moduleDef_repeat1] = aux_sym_moduleDef_repeat1,
  [aux_sym_decDigits_repeat1] = aux_sym_decDigits_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_DOT_DOT_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endinterface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numeric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [sym_moduleFormalParams] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleFormalArgs] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_provisos] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decDigits_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decDigitsUnderscore_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_Identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_exportDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_exportItem] = {
    .visible = true,
    .named = true,
  },
  [sym_importDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_importItem] = {
    .visible = true,
    .named = true,
  },
  [sym_packageStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_packageIde] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_typePrimary] = {
    .visible = true,
    .named = true,
  },
  [sym_typeIde] = {
    .visible = true,
    .named = true,
  },
  [sym_typeNat] = {
    .visible = true,
    .named = true,
  },
  [sym_interfaceDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_typeDefType] = {
    .visible = true,
    .named = true,
  },
  [sym_typeFormals] = {
    .visible = true,
    .named = true,
  },
  [sym_typeFormal] = {
    .visible = true,
    .named = true,
  },
  [sym_interfaceMemberDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_methodProto] = {
    .visible = true,
    .named = true,
  },
  [sym_methodProtoFormals] = {
    .visible = true,
    .named = true,
  },
  [sym_methodProtoFormal] = {
    .visible = true,
    .named = true,
  },
  [sym_subinterfaceDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleDef] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleProto] = {
    .visible = true,
    .named = true,
  },
  [sym_decDigits] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exportDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_importDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interfaceDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typeFormals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_methodProtoFormals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_moduleDef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decDigits_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 20,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(136);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '[') ADVANCE(117);
      if (lookahead == ']') ADVANCE(118);
      if (lookahead == '_') ADVANCE(139);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '[') ADVANCE(117);
      if (lookahead == ']') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(107);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == 'D') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 96:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 97:
      if (eof) ADVANCE(99);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(97)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_endpackage);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_endinterface);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_numeric);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_endmodule);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_moduleFormalParams);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_moduleFormalArgs);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_moduleStmt);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_provisos);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE0);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SQUOTE1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SQUOTEd);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SQUOTED);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_decDigits_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_decDigitsUnderscore_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 97},
  [3] = {.lex_state = 98},
  [4] = {.lex_state = 98},
  [5] = {.lex_state = 97},
  [6] = {.lex_state = 98},
  [7] = {.lex_state = 98},
  [8] = {.lex_state = 97},
  [9] = {.lex_state = 97},
  [10] = {.lex_state = 97},
  [11] = {.lex_state = 97},
  [12] = {.lex_state = 97},
  [13] = {.lex_state = 97},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 98},
  [17] = {.lex_state = 98},
  [18] = {.lex_state = 98},
  [19] = {.lex_state = 98},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 98},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 98},
  [28] = {.lex_state = 98},
  [29] = {.lex_state = 98},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 98},
  [34] = {.lex_state = 98},
  [35] = {.lex_state = 98},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 97},
  [41] = {.lex_state = 98},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 98},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 98},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 98},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 98},
  [68] = {.lex_state = 98},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 97},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 98},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 98},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 98},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 98},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 97},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 97},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 98},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_endpackage] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN_DOT_DOT_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_endinterface] = ACTIONS(1),
    [anon_sym_numeric] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_endmodule] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [sym_moduleFormalParams] = ACTIONS(1),
    [sym_moduleFormalArgs] = ACTIONS(1),
    [sym_moduleStmt] = ACTIONS(1),
    [sym_provisos] = ACTIONS(1),
    [anon_sym_SQUOTE0] = ACTIONS(1),
    [anon_sym_SQUOTE1] = ACTIONS(1),
    [anon_sym_SQUOTEd] = ACTIONS(1),
    [anon_sym_SQUOTED] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_decDigits_token1] = ACTIONS(1),
    [aux_sym_decDigitsUnderscore_token1] = ACTIONS(1),
    [sym_Identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(158),
    [sym_package] = STATE(156),
    [sym_exportDecl] = STATE(6),
    [sym_importDecl] = STATE(6),
    [sym_packageStmt] = STATE(6),
    [sym_interfaceDecl] = STATE(24),
    [sym_moduleDef] = STATE(24),
    [sym_moduleProto] = STATE(73),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      anon_sym_bit,
    ACTIONS(19), 1,
      anon_sym_int,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    ACTIONS(23), 1,
      sym_Identifier,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(32), 1,
      sym_typeIde,
    STATE(37), 1,
      sym_typeNat,
    STATE(39), 1,
      sym_typePrimary,
    STATE(58), 1,
      sym_methodProtoFormal,
    STATE(120), 1,
      sym_type,
    STATE(141), 1,
      sym_methodProtoFormals,
  [43] = 8,
    ACTIONS(29), 1,
      anon_sym_export,
    ACTIONS(32), 1,
      anon_sym_import,
    ACTIONS(35), 1,
      anon_sym_interface,
    ACTIONS(38), 1,
      anon_sym_module,
    STATE(73), 1,
      sym_moduleProto,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_endpackage,
    STATE(24), 2,
      sym_interfaceDecl,
      sym_moduleDef,
    STATE(3), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_program_repeat1,
  [73] = 8,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(41), 1,
      anon_sym_endpackage,
    STATE(73), 1,
      sym_moduleProto,
    STATE(24), 2,
      sym_interfaceDecl,
      sym_moduleDef,
    STATE(3), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_program_repeat1,
  [102] = 12,
    ACTIONS(17), 1,
      anon_sym_bit,
    ACTIONS(19), 1,
      anon_sym_int,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    ACTIONS(23), 1,
      sym_Identifier,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(32), 1,
      sym_typeIde,
    STATE(37), 1,
      sym_typeNat,
    STATE(39), 1,
      sym_typePrimary,
    STATE(89), 1,
      sym_methodProtoFormal,
    STATE(120), 1,
      sym_type,
  [139] = 8,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_moduleProto,
    STATE(24), 2,
      sym_interfaceDecl,
      sym_moduleDef,
    STATE(3), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_program_repeat1,
  [168] = 8,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(45), 1,
      anon_sym_endpackage,
    STATE(73), 1,
      sym_moduleProto,
    STATE(24), 2,
      sym_interfaceDecl,
      sym_moduleDef,
    STATE(4), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_program_repeat1,
  [197] = 11,
    ACTIONS(17), 1,
      anon_sym_bit,
    ACTIONS(19), 1,
      anon_sym_int,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    ACTIONS(23), 1,
      sym_Identifier,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(32), 1,
      sym_typeIde,
    STATE(37), 1,
      sym_typeNat,
    STATE(39), 1,
      sym_typePrimary,
    STATE(48), 1,
      sym_type,
  [231] = 11,
    ACTIONS(17), 1,
      anon_sym_bit,
    ACTIONS(19), 1,
      anon_sym_int,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    ACTIONS(23), 1,
      sym_Identifier,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(32), 1,
      sym_typeIde,
    STATE(37), 1,
      sym_typeNat,
    STATE(39), 1,
      sym_typePrimary,
    STATE(78), 1,
      sym_type,
  [265] = 11,
    ACTIONS(17), 1,
      anon_sym_bit,
    ACTIONS(19), 1,
      anon_sym_int,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    ACTIONS(23), 1,
      sym_Identifier,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(32), 1,
      sym_typeIde,
    STATE(37), 1,
      sym_typeNat,
    STATE(39), 1,
      sym_typePrimary,
    STATE(162), 1,
      sym_type,
  [299] = 11,
    ACTIONS(17), 1,
      anon_sym_bit,
    ACTIONS(19), 1,
      anon_sym_int,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    ACTIONS(23), 1,
      sym_Identifier,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(32), 1,
      sym_typeIde,
    STATE(37), 1,
      sym_typeNat,
    STATE(39), 1,
      sym_typePrimary,
    STATE(124), 1,
      sym_type,
  [333] = 11,
    ACTIONS(17), 1,
      anon_sym_bit,
    ACTIONS(19), 1,
      anon_sym_int,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    ACTIONS(23), 1,
      sym_Identifier,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(32), 1,
      sym_typeIde,
    STATE(37), 1,
      sym_typeNat,
    STATE(39), 1,
      sym_typePrimary,
    STATE(106), 1,
      sym_type,
  [367] = 11,
    ACTIONS(17), 1,
      anon_sym_bit,
    ACTIONS(19), 1,
      anon_sym_int,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    ACTIONS(23), 1,
      sym_Identifier,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(32), 1,
      sym_typeIde,
    STATE(37), 1,
      sym_typeNat,
    STATE(39), 1,
      sym_typePrimary,
    STATE(125), 1,
      sym_type,
  [401] = 3,
    ACTIONS(49), 1,
      aux_sym_decDigits_token1,
    STATE(14), 1,
      aux_sym_decDigits_repeat1,
    ACTIONS(47), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [416] = 3,
    ACTIONS(54), 1,
      aux_sym_decDigits_token1,
    STATE(14), 1,
      aux_sym_decDigits_repeat1,
    ACTIONS(52), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [431] = 5,
    ACTIONS(56), 1,
      anon_sym_interface,
    ACTIONS(58), 1,
      anon_sym_endinterface,
    ACTIONS(60), 1,
      anon_sym_method,
    STATE(18), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(67), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [449] = 5,
    ACTIONS(62), 1,
      anon_sym_interface,
    ACTIONS(65), 1,
      anon_sym_endinterface,
    ACTIONS(67), 1,
      anon_sym_method,
    STATE(17), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(67), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [467] = 5,
    ACTIONS(56), 1,
      anon_sym_interface,
    ACTIONS(60), 1,
      anon_sym_method,
    ACTIONS(70), 1,
      anon_sym_endinterface,
    STATE(17), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(67), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [485] = 2,
    ACTIONS(74), 1,
      anon_sym_COLON,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [497] = 1,
    ACTIONS(76), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_identifier,
  [507] = 2,
    ACTIONS(80), 1,
      anon_sym_COLON,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [519] = 2,
    ACTIONS(84), 1,
      anon_sym_COLON,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [531] = 2,
    ACTIONS(88), 1,
      anon_sym_COLON,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [543] = 1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [552] = 1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [561] = 1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [570] = 1,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [579] = 1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [588] = 1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [597] = 1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [606] = 1,
    ACTIONS(102), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [615] = 2,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(104), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [626] = 1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [635] = 1,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [644] = 1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [653] = 1,
    ACTIONS(114), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [661] = 1,
    ACTIONS(104), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [669] = 1,
    ACTIONS(116), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [677] = 2,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [687] = 3,
    ACTIONS(124), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    ACTIONS(126), 1,
      anon_sym_COLON_COLON,
    ACTIONS(122), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [698] = 4,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(128), 1,
      sym_typeNat,
  [711] = 3,
    STATE(60), 1,
      sym_typeIde,
    STATE(143), 1,
      sym_typeDefType,
    ACTIONS(23), 2,
      sym_Identifier,
      sym_identifier,
  [722] = 4,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    STATE(15), 1,
      aux_sym_decDigits_repeat1,
    STATE(31), 1,
      sym_decDigits,
    STATE(159), 1,
      sym_typeNat,
  [735] = 1,
    ACTIONS(128), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [742] = 4,
    ACTIONS(130), 1,
      sym_Identifier,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(66), 1,
      sym_exportItem,
    STATE(151), 1,
      sym_packageIde,
  [755] = 1,
    ACTIONS(134), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [762] = 4,
    ACTIONS(130), 1,
      sym_Identifier,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(114), 1,
      sym_exportItem,
    STATE(151), 1,
      sym_packageIde,
  [775] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_type_repeat1,
  [785] = 1,
    ACTIONS(140), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [791] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_typeFormals_repeat1,
  [801] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_typeFormals_repeat1,
  [811] = 3,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_importDecl_repeat1,
  [821] = 3,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_importDecl_repeat1,
  [831] = 3,
    ACTIONS(160), 1,
      anon_sym_endmodule,
    ACTIONS(162), 1,
      sym_moduleStmt,
    STATE(55), 1,
      aux_sym_moduleDef_repeat1,
  [841] = 3,
    ACTIONS(164), 1,
      anon_sym_endmodule,
    ACTIONS(166), 1,
      sym_moduleStmt,
    STATE(55), 1,
      aux_sym_moduleDef_repeat1,
  [851] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_type_repeat1,
  [861] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_type_repeat1,
  [871] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_methodProtoFormals_repeat1,
  [881] = 3,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_exportDecl_repeat1,
  [891] = 3,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      anon_sym_POUND,
    STATE(127), 1,
      sym_typeFormals,
  [901] = 1,
    ACTIONS(186), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [907] = 3,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_exportDecl_repeat1,
  [917] = 3,
    ACTIONS(192), 1,
      anon_sym_numeric,
    ACTIONS(194), 1,
      anon_sym_type,
    STATE(50), 1,
      sym_typeFormal,
  [927] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym_importDecl_repeat1,
  [937] = 2,
    STATE(35), 1,
      sym_typeIde,
    ACTIONS(198), 2,
      sym_Identifier,
      sym_identifier,
  [945] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      aux_sym_exportDecl_repeat1,
  [955] = 1,
    ACTIONS(202), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [961] = 2,
    ACTIONS(124), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    ACTIONS(122), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [969] = 3,
    ACTIONS(204), 1,
      sym_Identifier,
    STATE(112), 1,
      sym_importItem,
    STATE(148), 1,
      sym_packageIde,
  [979] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_type_repeat1,
  [989] = 1,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [995] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_typeFormals_repeat1,
  [1005] = 3,
    ACTIONS(213), 1,
      anon_sym_endmodule,
    ACTIONS(215), 1,
      sym_moduleStmt,
    STATE(54), 1,
      aux_sym_moduleDef_repeat1,
  [1015] = 3,
    ACTIONS(192), 1,
      anon_sym_numeric,
    ACTIONS(194), 1,
      anon_sym_type,
    STATE(82), 1,
      sym_typeFormal,
  [1025] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_methodProtoFormals_repeat1,
  [1035] = 1,
    ACTIONS(219), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1041] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_methodProtoFormals_repeat1,
  [1051] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_type_repeat1,
  [1061] = 1,
    ACTIONS(228), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1067] = 3,
    ACTIONS(204), 1,
      sym_Identifier,
    STATE(64), 1,
      sym_importItem,
    STATE(148), 1,
      sym_packageIde,
  [1077] = 2,
    STATE(28), 1,
      sym_typeIde,
    ACTIONS(198), 2,
      sym_Identifier,
      sym_identifier,
  [1085] = 1,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1090] = 1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1095] = 2,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(234), 1,
      sym_identifier,
  [1102] = 2,
    ACTIONS(204), 1,
      sym_Identifier,
    STATE(152), 1,
      sym_packageIde,
  [1109] = 1,
    ACTIONS(236), 2,
      anon_sym_endmodule,
      sym_moduleStmt,
  [1114] = 1,
    ACTIONS(238), 2,
      anon_sym_endmodule,
      sym_moduleStmt,
  [1119] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      anon_sym_COLON,
  [1126] = 1,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1131] = 2,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym_moduleFormalParams,
  [1138] = 2,
    ACTIONS(204), 1,
      sym_Identifier,
    STATE(149), 1,
      sym_packageIde,
  [1145] = 2,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      sym_provisos,
  [1152] = 1,
    ACTIONS(252), 2,
      anon_sym_endmodule,
      sym_moduleStmt,
  [1157] = 1,
    ACTIONS(254), 2,
      anon_sym_endmodule,
      sym_moduleStmt,
  [1162] = 2,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      sym_provisos,
  [1169] = 1,
    ACTIONS(260), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1174] = 2,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 1,
      sym_moduleFormalArgs,
  [1181] = 2,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      sym_provisos,
  [1188] = 2,
    ACTIONS(204), 1,
      sym_Identifier,
    STATE(140), 1,
      sym_packageIde,
  [1195] = 1,
    ACTIONS(270), 2,
      anon_sym_endmodule,
      sym_moduleStmt,
  [1200] = 1,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1205] = 2,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      sym_moduleFormalParams,
  [1212] = 1,
    ACTIONS(278), 2,
      anon_sym_endmodule,
      sym_moduleStmt,
  [1217] = 2,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      sym_provisos,
  [1224] = 1,
    ACTIONS(284), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1229] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1234] = 2,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
  [1241] = 2,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    ACTIONS(292), 1,
      sym_moduleFormalArgs,
  [1248] = 1,
    ACTIONS(294), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1253] = 2,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 1,
      sym_moduleFormalArgs,
  [1260] = 2,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      sym_provisos,
  [1267] = 1,
    ACTIONS(155), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1272] = 1,
    ACTIONS(304), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1277] = 1,
    ACTIONS(177), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1282] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      anon_sym_COLON,
  [1289] = 1,
    ACTIONS(310), 2,
      anon_sym_endmodule,
      sym_moduleStmt,
  [1294] = 2,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      sym_moduleFormalArgs,
  [1301] = 2,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      sym_provisos,
  [1308] = 1,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
  [1312] = 1,
    ACTIONS(320), 1,
      sym_identifier,
  [1316] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [1320] = 1,
    ACTIONS(324), 1,
      anon_sym_SEMI,
  [1324] = 1,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
  [1328] = 1,
    ACTIONS(328), 1,
      sym_identifier,
  [1332] = 1,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
  [1336] = 1,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
  [1340] = 1,
    ACTIONS(334), 1,
      anon_sym_SEMI,
  [1344] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
  [1348] = 1,
    ACTIONS(316), 1,
      anon_sym_SEMI,
  [1352] = 1,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
  [1356] = 1,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
  [1360] = 1,
    ACTIONS(338), 1,
      sym_identifier,
  [1364] = 1,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
  [1368] = 1,
    ACTIONS(342), 1,
      anon_sym_STAR,
  [1372] = 1,
    ACTIONS(344), 1,
      anon_sym_STAR,
  [1376] = 1,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
  [1380] = 1,
    ACTIONS(348), 1,
      anon_sym_SEMI,
  [1384] = 1,
    ACTIONS(300), 1,
      anon_sym_SEMI,
  [1388] = 1,
    ACTIONS(350), 1,
      anon_sym_SEMI,
  [1392] = 1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [1396] = 1,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [1400] = 1,
    ACTIONS(356), 1,
      anon_sym_SEMI,
  [1404] = 1,
    ACTIONS(358), 1,
      anon_sym_SEMI,
  [1408] = 1,
    ACTIONS(360), 1,
      sym_identifier,
  [1412] = 1,
    ACTIONS(266), 1,
      anon_sym_SEMI,
  [1416] = 1,
    ACTIONS(362), 1,
      sym_identifier,
  [1420] = 1,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [1424] = 1,
    ACTIONS(366), 1,
      anon_sym_COLON_COLON,
  [1428] = 1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [1432] = 1,
    ACTIONS(370), 1,
      anon_sym_SEMI,
  [1436] = 1,
    ACTIONS(372), 1,
      anon_sym_COLON_COLON,
  [1440] = 1,
    ACTIONS(374), 1,
      anon_sym_SEMI,
  [1444] = 1,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
  [1448] = 1,
    ACTIONS(248), 1,
      anon_sym_SEMI,
  [1452] = 1,
    ACTIONS(256), 1,
      anon_sym_SEMI,
  [1456] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [1460] = 1,
    ACTIONS(378), 1,
      sym_identifier,
  [1464] = 1,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
  [1468] = 1,
    ACTIONS(382), 1,
      anon_sym_COLON,
  [1472] = 1,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [1476] = 1,
    ACTIONS(386), 1,
      anon_sym_type,
  [1480] = 1,
    ACTIONS(388), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 197,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 265,
  [SMALL_STATE(11)] = 299,
  [SMALL_STATE(12)] = 333,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 401,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 449,
  [SMALL_STATE(18)] = 467,
  [SMALL_STATE(19)] = 485,
  [SMALL_STATE(20)] = 497,
  [SMALL_STATE(21)] = 507,
  [SMALL_STATE(22)] = 519,
  [SMALL_STATE(23)] = 531,
  [SMALL_STATE(24)] = 543,
  [SMALL_STATE(25)] = 552,
  [SMALL_STATE(26)] = 561,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 579,
  [SMALL_STATE(29)] = 588,
  [SMALL_STATE(30)] = 597,
  [SMALL_STATE(31)] = 606,
  [SMALL_STATE(32)] = 615,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 635,
  [SMALL_STATE(35)] = 644,
  [SMALL_STATE(36)] = 653,
  [SMALL_STATE(37)] = 661,
  [SMALL_STATE(38)] = 669,
  [SMALL_STATE(39)] = 677,
  [SMALL_STATE(40)] = 687,
  [SMALL_STATE(41)] = 698,
  [SMALL_STATE(42)] = 711,
  [SMALL_STATE(43)] = 722,
  [SMALL_STATE(44)] = 735,
  [SMALL_STATE(45)] = 742,
  [SMALL_STATE(46)] = 755,
  [SMALL_STATE(47)] = 762,
  [SMALL_STATE(48)] = 775,
  [SMALL_STATE(49)] = 785,
  [SMALL_STATE(50)] = 791,
  [SMALL_STATE(51)] = 801,
  [SMALL_STATE(52)] = 811,
  [SMALL_STATE(53)] = 821,
  [SMALL_STATE(54)] = 831,
  [SMALL_STATE(55)] = 841,
  [SMALL_STATE(56)] = 851,
  [SMALL_STATE(57)] = 861,
  [SMALL_STATE(58)] = 871,
  [SMALL_STATE(59)] = 881,
  [SMALL_STATE(60)] = 891,
  [SMALL_STATE(61)] = 901,
  [SMALL_STATE(62)] = 907,
  [SMALL_STATE(63)] = 917,
  [SMALL_STATE(64)] = 927,
  [SMALL_STATE(65)] = 937,
  [SMALL_STATE(66)] = 945,
  [SMALL_STATE(67)] = 955,
  [SMALL_STATE(68)] = 961,
  [SMALL_STATE(69)] = 969,
  [SMALL_STATE(70)] = 979,
  [SMALL_STATE(71)] = 989,
  [SMALL_STATE(72)] = 995,
  [SMALL_STATE(73)] = 1005,
  [SMALL_STATE(74)] = 1015,
  [SMALL_STATE(75)] = 1025,
  [SMALL_STATE(76)] = 1035,
  [SMALL_STATE(77)] = 1041,
  [SMALL_STATE(78)] = 1051,
  [SMALL_STATE(79)] = 1061,
  [SMALL_STATE(80)] = 1067,
  [SMALL_STATE(81)] = 1077,
  [SMALL_STATE(82)] = 1085,
  [SMALL_STATE(83)] = 1090,
  [SMALL_STATE(84)] = 1095,
  [SMALL_STATE(85)] = 1102,
  [SMALL_STATE(86)] = 1109,
  [SMALL_STATE(87)] = 1114,
  [SMALL_STATE(88)] = 1119,
  [SMALL_STATE(89)] = 1126,
  [SMALL_STATE(90)] = 1131,
  [SMALL_STATE(91)] = 1138,
  [SMALL_STATE(92)] = 1145,
  [SMALL_STATE(93)] = 1152,
  [SMALL_STATE(94)] = 1157,
  [SMALL_STATE(95)] = 1162,
  [SMALL_STATE(96)] = 1169,
  [SMALL_STATE(97)] = 1174,
  [SMALL_STATE(98)] = 1181,
  [SMALL_STATE(99)] = 1188,
  [SMALL_STATE(100)] = 1195,
  [SMALL_STATE(101)] = 1200,
  [SMALL_STATE(102)] = 1205,
  [SMALL_STATE(103)] = 1212,
  [SMALL_STATE(104)] = 1217,
  [SMALL_STATE(105)] = 1224,
  [SMALL_STATE(106)] = 1229,
  [SMALL_STATE(107)] = 1234,
  [SMALL_STATE(108)] = 1241,
  [SMALL_STATE(109)] = 1248,
  [SMALL_STATE(110)] = 1253,
  [SMALL_STATE(111)] = 1260,
  [SMALL_STATE(112)] = 1267,
  [SMALL_STATE(113)] = 1272,
  [SMALL_STATE(114)] = 1277,
  [SMALL_STATE(115)] = 1282,
  [SMALL_STATE(116)] = 1289,
  [SMALL_STATE(117)] = 1294,
  [SMALL_STATE(118)] = 1301,
  [SMALL_STATE(119)] = 1308,
  [SMALL_STATE(120)] = 1312,
  [SMALL_STATE(121)] = 1316,
  [SMALL_STATE(122)] = 1320,
  [SMALL_STATE(123)] = 1324,
  [SMALL_STATE(124)] = 1328,
  [SMALL_STATE(125)] = 1332,
  [SMALL_STATE(126)] = 1336,
  [SMALL_STATE(127)] = 1340,
  [SMALL_STATE(128)] = 1344,
  [SMALL_STATE(129)] = 1348,
  [SMALL_STATE(130)] = 1352,
  [SMALL_STATE(131)] = 1356,
  [SMALL_STATE(132)] = 1360,
  [SMALL_STATE(133)] = 1364,
  [SMALL_STATE(134)] = 1368,
  [SMALL_STATE(135)] = 1372,
  [SMALL_STATE(136)] = 1376,
  [SMALL_STATE(137)] = 1380,
  [SMALL_STATE(138)] = 1384,
  [SMALL_STATE(139)] = 1388,
  [SMALL_STATE(140)] = 1392,
  [SMALL_STATE(141)] = 1396,
  [SMALL_STATE(142)] = 1400,
  [SMALL_STATE(143)] = 1404,
  [SMALL_STATE(144)] = 1408,
  [SMALL_STATE(145)] = 1412,
  [SMALL_STATE(146)] = 1416,
  [SMALL_STATE(147)] = 1420,
  [SMALL_STATE(148)] = 1424,
  [SMALL_STATE(149)] = 1428,
  [SMALL_STATE(150)] = 1432,
  [SMALL_STATE(151)] = 1436,
  [SMALL_STATE(152)] = 1440,
  [SMALL_STATE(153)] = 1444,
  [SMALL_STATE(154)] = 1448,
  [SMALL_STATE(155)] = 1452,
  [SMALL_STATE(156)] = 1456,
  [SMALL_STATE(157)] = 1460,
  [SMALL_STATE(158)] = 1464,
  [SMALL_STATE(159)] = 1468,
  [SMALL_STATE(160)] = 1472,
  [SMALL_STATE(161)] = 1476,
  [SMALL_STATE(162)] = 1480,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(80),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decDigits_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decDigits_repeat1, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decDigits, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeIde, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleDef, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleDef, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageStmt, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleDef, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeNat, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleDef, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageIde, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeFormals_repeat1, 2), SHIFT_REPEAT(74),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeFormals_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2), SHIFT_REPEAT(69),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moduleDef_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_moduleDef_repeat1, 2), SHIFT_REPEAT(55),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormals, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2), SHIFT_REPEAT(47),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDefType, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceMemberDecl, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(12),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormals, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 7),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_methodProtoFormals_repeat1, 2), SHIFT_REPEAT(5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_methodProtoFormals_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subinterfaceDecl, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormal, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 11),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 10),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 9),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormal, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 8),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormal, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importItem, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormals, 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDefType, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 7),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormals, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [380] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bsv(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
