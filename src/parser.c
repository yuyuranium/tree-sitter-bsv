#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  sym_moduleDef = 23,
  anon_sym_SQUOTE0 = 24,
  anon_sym_SQUOTE1 = 25,
  anon_sym_SQUOTEd = 26,
  anon_sym_SQUOTED = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  aux_sym_decDigits_token1 = 30,
  aux_sym_decDigitsUnderscore_token1 = 31,
  sym_Identifier = 32,
  sym_identifier = 33,
  sym_program = 34,
  sym_package = 35,
  sym_packageBody = 36,
  sym_exportDecl = 37,
  sym_exportItem = 38,
  sym_importDecl = 39,
  sym_importItem = 40,
  sym_packageStmt = 41,
  sym_packageIde = 42,
  sym_type = 43,
  sym_typePrimary = 44,
  sym_typeIde = 45,
  sym_typeNat = 46,
  sym_interfaceDecl = 47,
  sym_typeDefType = 48,
  sym_typeFormals = 49,
  sym_typeFormal = 50,
  sym_interfaceMemberDecl = 51,
  sym_methodProto = 52,
  sym_methodProtoFormals = 53,
  sym_methodProtoFormal = 54,
  sym_subinterfaceDecl = 55,
  sym_decDigits = 56,
  aux_sym_packageBody_repeat1 = 57,
  aux_sym_exportDecl_repeat1 = 58,
  aux_sym_importDecl_repeat1 = 59,
  aux_sym_type_repeat1 = 60,
  aux_sym_interfaceDecl_repeat1 = 61,
  aux_sym_typeFormals_repeat1 = 62,
  aux_sym_methodProtoFormals_repeat1 = 63,
  aux_sym_decDigits_repeat1 = 64,
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
  [sym_moduleDef] = "moduleDef",
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
  [sym_packageBody] = "packageBody",
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
  [sym_decDigits] = "decDigits",
  [aux_sym_packageBody_repeat1] = "packageBody_repeat1",
  [aux_sym_exportDecl_repeat1] = "exportDecl_repeat1",
  [aux_sym_importDecl_repeat1] = "importDecl_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_interfaceDecl_repeat1] = "interfaceDecl_repeat1",
  [aux_sym_typeFormals_repeat1] = "typeFormals_repeat1",
  [aux_sym_methodProtoFormals_repeat1] = "methodProtoFormals_repeat1",
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
  [sym_moduleDef] = sym_moduleDef,
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
  [sym_packageBody] = sym_packageBody,
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
  [sym_decDigits] = sym_decDigits,
  [aux_sym_packageBody_repeat1] = aux_sym_packageBody_repeat1,
  [aux_sym_exportDecl_repeat1] = aux_sym_exportDecl_repeat1,
  [aux_sym_importDecl_repeat1] = aux_sym_importDecl_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_interfaceDecl_repeat1] = aux_sym_interfaceDecl_repeat1,
  [aux_sym_typeFormals_repeat1] = aux_sym_typeFormals_repeat1,
  [aux_sym_methodProtoFormals_repeat1] = aux_sym_methodProtoFormals_repeat1,
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
  [sym_moduleDef] = {
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
  [sym_packageBody] = {
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
  [sym_decDigits] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_packageBody_repeat1] = {
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
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '_') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == 'D') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 'k') ADVANCE(8);
      END_STATE();
    case 40:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_endpackage);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_endinterface);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_numeric);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_moduleDef);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SQUOTE0);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SQUOTE1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SQUOTEd);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SQUOTED);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_decDigits_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_decDigitsUnderscore_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 69},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 68},
  [5] = {.lex_state = 68},
  [6] = {.lex_state = 68},
  [7] = {.lex_state = 69},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 69},
  [11] = {.lex_state = 69},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 69},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 69},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 69},
  [25] = {.lex_state = 69},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 68},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 69},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 68},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 69},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 69},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 69},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 69},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 69},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 69},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 69},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
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
    [sym_moduleDef] = ACTIONS(1),
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
    [sym_program] = STATE(114),
    [sym_package] = STATE(112),
    [sym_packageBody] = STATE(112),
    [sym_exportDecl] = STATE(7),
    [sym_importDecl] = STATE(7),
    [sym_packageStmt] = STATE(7),
    [sym_interfaceDecl] = STATE(26),
    [aux_sym_packageBody_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [sym_moduleDef] = ACTIONS(13),
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
    STATE(12), 1,
      aux_sym_decDigits_repeat1,
    STATE(19), 1,
      sym_decDigits,
    STATE(29), 1,
      sym_typeIde,
    STATE(36), 1,
      sym_typePrimary,
    STATE(38), 1,
      sym_typeNat,
    STATE(55), 1,
      sym_methodProtoFormal,
    STATE(100), 1,
      sym_type,
    STATE(101), 1,
      sym_methodProtoFormals,
  [43] = 12,
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
    STATE(12), 1,
      aux_sym_decDigits_repeat1,
    STATE(19), 1,
      sym_decDigits,
    STATE(29), 1,
      sym_typeIde,
    STATE(36), 1,
      sym_typePrimary,
    STATE(38), 1,
      sym_typeNat,
    STATE(77), 1,
      sym_methodProtoFormal,
    STATE(100), 1,
      sym_type,
  [80] = 11,
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
    STATE(12), 1,
      aux_sym_decDigits_repeat1,
    STATE(19), 1,
      sym_decDigits,
    STATE(29), 1,
      sym_typeIde,
    STATE(36), 1,
      sym_typePrimary,
    STATE(38), 1,
      sym_typeNat,
    STATE(67), 1,
      sym_type,
  [114] = 11,
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
    STATE(12), 1,
      aux_sym_decDigits_repeat1,
    STATE(19), 1,
      sym_decDigits,
    STATE(29), 1,
      sym_typeIde,
    STATE(36), 1,
      sym_typePrimary,
    STATE(38), 1,
      sym_typeNat,
    STATE(97), 1,
      sym_type,
  [148] = 11,
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
    STATE(12), 1,
      aux_sym_decDigits_repeat1,
    STATE(19), 1,
      sym_decDigits,
    STATE(29), 1,
      sym_typeIde,
    STATE(36), 1,
      sym_typePrimary,
    STATE(38), 1,
      sym_typeNat,
    STATE(93), 1,
      sym_type,
  [182] = 7,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      sym_moduleDef,
    STATE(26), 1,
      sym_interfaceDecl,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_endpackage,
    STATE(11), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_packageBody_repeat1,
  [208] = 11,
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
    STATE(12), 1,
      aux_sym_decDigits_repeat1,
    STATE(19), 1,
      sym_decDigits,
    STATE(29), 1,
      sym_typeIde,
    STATE(36), 1,
      sym_typePrimary,
    STATE(38), 1,
      sym_typeNat,
    STATE(87), 1,
      sym_type,
  [242] = 11,
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
    STATE(12), 1,
      aux_sym_decDigits_repeat1,
    STATE(19), 1,
      sym_decDigits,
    STATE(29), 1,
      sym_typeIde,
    STATE(36), 1,
      sym_typePrimary,
    STATE(38), 1,
      sym_typeNat,
    STATE(56), 1,
      sym_type,
  [276] = 8,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      sym_moduleDef,
    ACTIONS(29), 1,
      anon_sym_endpackage,
    STATE(26), 1,
      sym_interfaceDecl,
    STATE(117), 1,
      sym_packageBody,
    STATE(7), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_packageBody_repeat1,
  [304] = 7,
    ACTIONS(33), 1,
      anon_sym_export,
    ACTIONS(36), 1,
      anon_sym_import,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(42), 1,
      sym_moduleDef,
    STATE(26), 1,
      sym_interfaceDecl,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_endpackage,
    STATE(11), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_packageBody_repeat1,
  [330] = 3,
    ACTIONS(47), 1,
      aux_sym_decDigits_token1,
    STATE(13), 1,
      aux_sym_decDigits_repeat1,
    ACTIONS(45), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [345] = 3,
    ACTIONS(51), 1,
      aux_sym_decDigits_token1,
    STATE(13), 1,
      aux_sym_decDigits_repeat1,
    ACTIONS(49), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [360] = 5,
    ACTIONS(54), 1,
      anon_sym_interface,
    ACTIONS(56), 1,
      anon_sym_endinterface,
    ACTIONS(58), 1,
      anon_sym_method,
    STATE(18), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(52), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [378] = 5,
    ACTIONS(54), 1,
      anon_sym_interface,
    ACTIONS(58), 1,
      anon_sym_method,
    ACTIONS(60), 1,
      anon_sym_endinterface,
    STATE(14), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(52), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [396] = 2,
    ACTIONS(64), 1,
      anon_sym_COLON,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [408] = 2,
    ACTIONS(68), 1,
      anon_sym_COLON,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [420] = 5,
    ACTIONS(70), 1,
      anon_sym_interface,
    ACTIONS(73), 1,
      anon_sym_endinterface,
    ACTIONS(75), 1,
      anon_sym_method,
    STATE(18), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(52), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [438] = 1,
    ACTIONS(78), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [447] = 1,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [456] = 1,
    ACTIONS(80), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_identifier,
  [465] = 1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [474] = 1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [483] = 1,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [492] = 1,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [501] = 1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [510] = 1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [519] = 1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [528] = 2,
    ACTIONS(98), 1,
      anon_sym_POUND,
    ACTIONS(96), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [538] = 4,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    STATE(12), 1,
      aux_sym_decDigits_repeat1,
    STATE(19), 1,
      sym_decDigits,
    STATE(90), 1,
      sym_typeNat,
  [551] = 4,
    ACTIONS(100), 1,
      sym_Identifier,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(78), 1,
      sym_exportItem,
    STATE(92), 1,
      sym_packageIde,
  [564] = 3,
    ACTIONS(106), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    ACTIONS(108), 1,
      anon_sym_COLON_COLON,
    ACTIONS(104), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [575] = 4,
    ACTIONS(21), 1,
      aux_sym_decDigits_token1,
    STATE(12), 1,
      aux_sym_decDigits_repeat1,
    STATE(19), 1,
      sym_decDigits,
    STATE(91), 1,
      sym_typeNat,
  [588] = 1,
    ACTIONS(110), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [595] = 3,
    STATE(72), 1,
      sym_typeIde,
    STATE(116), 1,
      sym_typeDefType,
    ACTIONS(23), 2,
      sym_Identifier,
      sym_identifier,
  [606] = 2,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [615] = 1,
    ACTIONS(116), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [622] = 1,
    ACTIONS(96), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [629] = 4,
    ACTIONS(100), 1,
      sym_Identifier,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(61), 1,
      sym_exportItem,
    STATE(92), 1,
      sym_packageIde,
  [642] = 3,
    ACTIONS(118), 1,
      sym_Identifier,
    STATE(81), 1,
      sym_importItem,
    STATE(113), 1,
      sym_packageIde,
  [652] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_typeFormals_repeat1,
  [662] = 3,
    ACTIONS(118), 1,
      sym_Identifier,
    STATE(65), 1,
      sym_importItem,
    STATE(113), 1,
      sym_packageIde,
  [672] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_methodProtoFormals_repeat1,
  [682] = 1,
    ACTIONS(129), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [688] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_methodProtoFormals_repeat1,
  [698] = 3,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_exportDecl_repeat1,
  [708] = 1,
    ACTIONS(140), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [714] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_type_repeat1,
  [724] = 3,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_importDecl_repeat1,
  [734] = 1,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [740] = 3,
    ACTIONS(151), 1,
      anon_sym_numeric,
    ACTIONS(153), 1,
      anon_sym_type,
    STATE(57), 1,
      sym_typeFormal,
  [750] = 1,
    ACTIONS(155), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [756] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_type_repeat1,
  [766] = 1,
    ACTIONS(162), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [772] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_methodProtoFormals_repeat1,
  [782] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_type_repeat1,
  [792] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_typeFormals_repeat1,
  [802] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_type_repeat1,
  [812] = 1,
    ACTIONS(172), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [818] = 2,
    ACTIONS(106), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    ACTIONS(104), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [826] = 3,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_exportDecl_repeat1,
  [836] = 3,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_importDecl_repeat1,
  [846] = 2,
    STATE(22), 1,
      sym_typeIde,
    ACTIONS(182), 2,
      sym_Identifier,
      sym_identifier,
  [854] = 1,
    ACTIONS(184), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [860] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      aux_sym_importDecl_repeat1,
  [870] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      aux_sym_exportDecl_repeat1,
  [880] = 3,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_type_repeat1,
  [890] = 1,
    ACTIONS(192), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [896] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_typeFormals_repeat1,
  [906] = 2,
    STATE(24), 1,
      sym_typeIde,
    ACTIONS(182), 2,
      sym_Identifier,
      sym_identifier,
  [914] = 3,
    ACTIONS(151), 1,
      anon_sym_numeric,
    ACTIONS(153), 1,
      anon_sym_type,
    STATE(84), 1,
      sym_typeFormal,
  [924] = 3,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_POUND,
    STATE(109), 1,
      sym_typeFormals,
  [934] = 2,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
  [941] = 2,
    ACTIONS(118), 1,
      sym_Identifier,
    STATE(94), 1,
      sym_packageIde,
  [948] = 1,
    ACTIONS(207), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [953] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [960] = 1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [965] = 1,
    ACTIONS(135), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [970] = 1,
    ACTIONS(213), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [975] = 1,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [980] = 1,
    ACTIONS(146), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [985] = 1,
    ACTIONS(217), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [990] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [995] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1000] = 2,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      anon_sym_COLON,
  [1007] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1012] = 1,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1017] = 2,
    ACTIONS(118), 1,
      sym_Identifier,
    STATE(95), 1,
      sym_packageIde,
  [1024] = 2,
    ACTIONS(118), 1,
      sym_Identifier,
    STATE(108), 1,
      sym_packageIde,
  [1031] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [1035] = 1,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
  [1039] = 1,
    ACTIONS(229), 1,
      anon_sym_COLON_COLON,
  [1043] = 1,
    ACTIONS(231), 1,
      sym_identifier,
  [1047] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [1051] = 1,
    ACTIONS(235), 1,
      anon_sym_SEMI,
  [1055] = 1,
    ACTIONS(237), 1,
      sym_identifier,
  [1059] = 1,
    ACTIONS(239), 1,
      sym_identifier,
  [1063] = 1,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
  [1067] = 1,
    ACTIONS(243), 1,
      anon_sym_SEMI,
  [1071] = 1,
    ACTIONS(245), 1,
      sym_identifier,
  [1075] = 1,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
  [1079] = 1,
    ACTIONS(249), 1,
      sym_identifier,
  [1083] = 1,
    ACTIONS(251), 1,
      anon_sym_type,
  [1087] = 1,
    ACTIONS(253), 1,
      anon_sym_STAR,
  [1091] = 1,
    ACTIONS(255), 1,
      anon_sym_STAR,
  [1095] = 1,
    ACTIONS(257), 1,
      anon_sym_SEMI,
  [1099] = 1,
    ACTIONS(259), 1,
      anon_sym_SEMI,
  [1103] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [1107] = 1,
    ACTIONS(263), 1,
      anon_sym_SEMI,
  [1111] = 1,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
  [1115] = 1,
    ACTIONS(267), 1,
      anon_sym_SEMI,
  [1119] = 1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
  [1123] = 1,
    ACTIONS(271), 1,
      anon_sym_COLON_COLON,
  [1127] = 1,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
  [1131] = 1,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
  [1135] = 1,
    ACTIONS(277), 1,
      anon_sym_SEMI,
  [1139] = 1,
    ACTIONS(279), 1,
      anon_sym_endpackage,
  [1143] = 1,
    ACTIONS(281), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 242,
  [SMALL_STATE(10)] = 276,
  [SMALL_STATE(11)] = 304,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 345,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 378,
  [SMALL_STATE(16)] = 396,
  [SMALL_STATE(17)] = 408,
  [SMALL_STATE(18)] = 420,
  [SMALL_STATE(19)] = 438,
  [SMALL_STATE(20)] = 447,
  [SMALL_STATE(21)] = 456,
  [SMALL_STATE(22)] = 465,
  [SMALL_STATE(23)] = 474,
  [SMALL_STATE(24)] = 483,
  [SMALL_STATE(25)] = 492,
  [SMALL_STATE(26)] = 501,
  [SMALL_STATE(27)] = 510,
  [SMALL_STATE(28)] = 519,
  [SMALL_STATE(29)] = 528,
  [SMALL_STATE(30)] = 538,
  [SMALL_STATE(31)] = 551,
  [SMALL_STATE(32)] = 564,
  [SMALL_STATE(33)] = 575,
  [SMALL_STATE(34)] = 588,
  [SMALL_STATE(35)] = 595,
  [SMALL_STATE(36)] = 606,
  [SMALL_STATE(37)] = 615,
  [SMALL_STATE(38)] = 622,
  [SMALL_STATE(39)] = 629,
  [SMALL_STATE(40)] = 642,
  [SMALL_STATE(41)] = 652,
  [SMALL_STATE(42)] = 662,
  [SMALL_STATE(43)] = 672,
  [SMALL_STATE(44)] = 682,
  [SMALL_STATE(45)] = 688,
  [SMALL_STATE(46)] = 698,
  [SMALL_STATE(47)] = 708,
  [SMALL_STATE(48)] = 714,
  [SMALL_STATE(49)] = 724,
  [SMALL_STATE(50)] = 734,
  [SMALL_STATE(51)] = 740,
  [SMALL_STATE(52)] = 750,
  [SMALL_STATE(53)] = 756,
  [SMALL_STATE(54)] = 766,
  [SMALL_STATE(55)] = 772,
  [SMALL_STATE(56)] = 782,
  [SMALL_STATE(57)] = 792,
  [SMALL_STATE(58)] = 802,
  [SMALL_STATE(59)] = 812,
  [SMALL_STATE(60)] = 818,
  [SMALL_STATE(61)] = 826,
  [SMALL_STATE(62)] = 836,
  [SMALL_STATE(63)] = 846,
  [SMALL_STATE(64)] = 854,
  [SMALL_STATE(65)] = 860,
  [SMALL_STATE(66)] = 870,
  [SMALL_STATE(67)] = 880,
  [SMALL_STATE(68)] = 890,
  [SMALL_STATE(69)] = 896,
  [SMALL_STATE(70)] = 906,
  [SMALL_STATE(71)] = 914,
  [SMALL_STATE(72)] = 924,
  [SMALL_STATE(73)] = 934,
  [SMALL_STATE(74)] = 941,
  [SMALL_STATE(75)] = 948,
  [SMALL_STATE(76)] = 953,
  [SMALL_STATE(77)] = 960,
  [SMALL_STATE(78)] = 965,
  [SMALL_STATE(79)] = 970,
  [SMALL_STATE(80)] = 975,
  [SMALL_STATE(81)] = 980,
  [SMALL_STATE(82)] = 985,
  [SMALL_STATE(83)] = 990,
  [SMALL_STATE(84)] = 995,
  [SMALL_STATE(85)] = 1000,
  [SMALL_STATE(86)] = 1007,
  [SMALL_STATE(87)] = 1012,
  [SMALL_STATE(88)] = 1017,
  [SMALL_STATE(89)] = 1024,
  [SMALL_STATE(90)] = 1031,
  [SMALL_STATE(91)] = 1035,
  [SMALL_STATE(92)] = 1039,
  [SMALL_STATE(93)] = 1043,
  [SMALL_STATE(94)] = 1047,
  [SMALL_STATE(95)] = 1051,
  [SMALL_STATE(96)] = 1055,
  [SMALL_STATE(97)] = 1059,
  [SMALL_STATE(98)] = 1063,
  [SMALL_STATE(99)] = 1067,
  [SMALL_STATE(100)] = 1071,
  [SMALL_STATE(101)] = 1075,
  [SMALL_STATE(102)] = 1079,
  [SMALL_STATE(103)] = 1083,
  [SMALL_STATE(104)] = 1087,
  [SMALL_STATE(105)] = 1091,
  [SMALL_STATE(106)] = 1095,
  [SMALL_STATE(107)] = 1099,
  [SMALL_STATE(108)] = 1103,
  [SMALL_STATE(109)] = 1107,
  [SMALL_STATE(110)] = 1111,
  [SMALL_STATE(111)] = 1115,
  [SMALL_STATE(112)] = 1119,
  [SMALL_STATE(113)] = 1123,
  [SMALL_STATE(114)] = 1127,
  [SMALL_STATE(115)] = 1131,
  [SMALL_STATE(116)] = 1135,
  [SMALL_STATE(117)] = 1139,
  [SMALL_STATE(118)] = 1143,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageBody, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2), SHIFT_REPEAT(39),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2), SHIFT_REPEAT(42),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2), SHIFT_REPEAT(35),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2), SHIFT_REPEAT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decDigits, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decDigits_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decDigits_repeat1, 2), SHIFT_REPEAT(13),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeNat, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeIde, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 7),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageStmt, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageIde, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_methodProtoFormals_repeat1, 2), SHIFT_REPEAT(3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_methodProtoFormals_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormals, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2), SHIFT_REPEAT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2), SHIFT_REPEAT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceMemberDecl, 1),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(8),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormals, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subinterfaceDecl, 4),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeFormals_repeat1, 2), SHIFT_REPEAT(71),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeFormals_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDefType, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormal, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importItem, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormal, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormal, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormals, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormals, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 7),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDefType, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [273] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
