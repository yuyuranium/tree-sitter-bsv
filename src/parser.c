#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_interface = 17,
  anon_sym_endinterface = 18,
  anon_sym_method = 19,
  sym_moduleDef = 20,
  anon_sym_SQUOTE0 = 21,
  anon_sym_SQUOTE1 = 22,
  anon_sym_SQUOTEd = 23,
  anon_sym_SQUOTED = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  aux_sym_decDigits_token1 = 27,
  aux_sym_decDigitsUnderscore_token1 = 28,
  sym_Identifier = 29,
  sym_identifier = 30,
  sym_program = 31,
  sym_package = 32,
  sym_packageBody = 33,
  sym_exportDecl = 34,
  sym_exportItem = 35,
  sym_importDecl = 36,
  sym_importItem = 37,
  sym_packageStmt = 38,
  sym_packageIde = 39,
  sym_type = 40,
  sym_typePrimary = 41,
  sym_typeIde = 42,
  sym_typeNat = 43,
  sym_interfaceDecl = 44,
  sym_typeDefType = 45,
  sym_interfaceMemberDecl = 46,
  sym_methodProto = 47,
  sym_decDigits = 48,
  aux_sym_packageBody_repeat1 = 49,
  aux_sym_exportDecl_repeat1 = 50,
  aux_sym_importDecl_repeat1 = 51,
  aux_sym_type_repeat1 = 52,
  aux_sym_interfaceDecl_repeat1 = 53,
  aux_sym_decDigits_repeat1 = 54,
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
  [anon_sym_interface] = "interface",
  [anon_sym_endinterface] = "endinterface",
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
  [sym_interfaceMemberDecl] = "interfaceMemberDecl",
  [sym_methodProto] = "methodProto",
  [sym_decDigits] = "decDigits",
  [aux_sym_packageBody_repeat1] = "packageBody_repeat1",
  [aux_sym_exportDecl_repeat1] = "exportDecl_repeat1",
  [aux_sym_importDecl_repeat1] = "importDecl_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_interfaceDecl_repeat1] = "interfaceDecl_repeat1",
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
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_endinterface] = anon_sym_endinterface,
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
  [sym_interfaceMemberDecl] = sym_interfaceMemberDecl,
  [sym_methodProto] = sym_methodProto,
  [sym_decDigits] = sym_decDigits,
  [aux_sym_packageBody_repeat1] = aux_sym_packageBody_repeat1,
  [aux_sym_exportDecl_repeat1] = aux_sym_exportDecl_repeat1,
  [aux_sym_importDecl_repeat1] = aux_sym_importDecl_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_interfaceDecl_repeat1] = aux_sym_interfaceDecl_repeat1,
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
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endinterface] = {
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
  [sym_interfaceMemberDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_methodProto] = {
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
  [22] = 20,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(7);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(9);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == ']') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '(') ADVANCE(2);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_endpackage);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_endinterface);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_moduleDef);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SQUOTE0);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SQUOTE1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTEd);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SQUOTED);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_decDigits_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_decDigitsUnderscore_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 59},
  [6] = {.lex_state = 59},
  [7] = {.lex_state = 59},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 58},
  [32] = {.lex_state = 58},
  [33] = {.lex_state = 58},
  [34] = {.lex_state = 58},
  [35] = {.lex_state = 59},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 59},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 58},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 58},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 58},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 58},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 58},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 58},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 58},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 58},
  [81] = {.lex_state = 58},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 59},
  [90] = {.lex_state = 59},
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
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_endinterface] = ACTIONS(1),
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
    [sym_program] = STATE(74),
    [sym_package] = STATE(83),
    [sym_packageBody] = STATE(83),
    [sym_exportDecl] = STATE(3),
    [sym_importDecl] = STATE(3),
    [sym_packageStmt] = STATE(3),
    [sym_interfaceDecl] = STATE(19),
    [aux_sym_packageBody_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [sym_moduleDef] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(17), 1,
      anon_sym_export,
    ACTIONS(20), 1,
      anon_sym_import,
    ACTIONS(23), 1,
      anon_sym_interface,
    ACTIONS(26), 1,
      sym_moduleDef,
    STATE(19), 1,
      sym_interfaceDecl,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_endpackage,
    STATE(2), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_packageBody_repeat1,
  [26] = 7,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      sym_moduleDef,
    STATE(19), 1,
      sym_interfaceDecl,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_endpackage,
    STATE(2), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_packageBody_repeat1,
  [52] = 8,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      sym_moduleDef,
    ACTIONS(31), 1,
      anon_sym_endpackage,
    STATE(19), 1,
      sym_interfaceDecl,
    STATE(84), 1,
      sym_packageBody,
    STATE(3), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_packageBody_repeat1,
  [80] = 9,
    ACTIONS(33), 1,
      anon_sym_bit,
    ACTIONS(35), 1,
      aux_sym_decDigits_token1,
    ACTIONS(37), 1,
      sym_Identifier,
    STATE(10), 1,
      aux_sym_decDigits_repeat1,
    STATE(21), 1,
      sym_decDigits,
    STATE(23), 1,
      sym_typeIde,
    STATE(32), 1,
      sym_typeNat,
    STATE(34), 1,
      sym_typePrimary,
    STATE(56), 1,
      sym_type,
  [108] = 9,
    ACTIONS(33), 1,
      anon_sym_bit,
    ACTIONS(35), 1,
      aux_sym_decDigits_token1,
    ACTIONS(37), 1,
      sym_Identifier,
    STATE(10), 1,
      aux_sym_decDigits_repeat1,
    STATE(21), 1,
      sym_decDigits,
    STATE(23), 1,
      sym_typeIde,
    STATE(32), 1,
      sym_typeNat,
    STATE(34), 1,
      sym_typePrimary,
    STATE(49), 1,
      sym_type,
  [136] = 9,
    ACTIONS(33), 1,
      anon_sym_bit,
    ACTIONS(35), 1,
      aux_sym_decDigits_token1,
    ACTIONS(37), 1,
      sym_Identifier,
    STATE(10), 1,
      aux_sym_decDigits_repeat1,
    STATE(21), 1,
      sym_decDigits,
    STATE(23), 1,
      sym_typeIde,
    STATE(32), 1,
      sym_typeNat,
    STATE(34), 1,
      sym_typePrimary,
    STATE(43), 1,
      sym_type,
  [164] = 9,
    ACTIONS(33), 1,
      anon_sym_bit,
    ACTIONS(35), 1,
      aux_sym_decDigits_token1,
    ACTIONS(37), 1,
      sym_Identifier,
    STATE(10), 1,
      aux_sym_decDigits_repeat1,
    STATE(21), 1,
      sym_decDigits,
    STATE(23), 1,
      sym_typeIde,
    STATE(32), 1,
      sym_typeNat,
    STATE(34), 1,
      sym_typePrimary,
    STATE(80), 1,
      sym_type,
  [192] = 3,
    ACTIONS(41), 1,
      aux_sym_decDigits_token1,
    STATE(9), 1,
      aux_sym_decDigits_repeat1,
    ACTIONS(39), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [207] = 3,
    ACTIONS(46), 1,
      aux_sym_decDigits_token1,
    STATE(9), 1,
      aux_sym_decDigits_repeat1,
    ACTIONS(44), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [222] = 2,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [234] = 2,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [246] = 1,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [255] = 1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [264] = 1,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [273] = 1,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [282] = 1,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [291] = 1,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [300] = 1,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [309] = 1,
    ACTIONS(70), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      sym_identifier,
  [318] = 1,
    ACTIONS(72), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [327] = 1,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      sym_moduleDef,
  [336] = 2,
    ACTIONS(76), 1,
      anon_sym_POUND,
    ACTIONS(74), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [346] = 4,
    ACTIONS(78), 1,
      anon_sym_endinterface,
    ACTIONS(80), 1,
      anon_sym_method,
    STATE(54), 1,
      sym_methodProto,
    STATE(25), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
  [360] = 4,
    ACTIONS(80), 1,
      anon_sym_method,
    ACTIONS(82), 1,
      anon_sym_endinterface,
    STATE(54), 1,
      sym_methodProto,
    STATE(26), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
  [374] = 4,
    ACTIONS(84), 1,
      anon_sym_endinterface,
    ACTIONS(86), 1,
      anon_sym_method,
    STATE(54), 1,
      sym_methodProto,
    STATE(26), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
  [388] = 4,
    ACTIONS(89), 1,
      sym_Identifier,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(64), 1,
      sym_exportItem,
    STATE(90), 1,
      sym_packageIde,
  [401] = 3,
    ACTIONS(95), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(93), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [412] = 4,
    ACTIONS(89), 1,
      sym_Identifier,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(39), 1,
      sym_exportItem,
    STATE(90), 1,
      sym_packageIde,
  [425] = 4,
    ACTIONS(35), 1,
      aux_sym_decDigits_token1,
    STATE(10), 1,
      aux_sym_decDigits_repeat1,
    STATE(21), 1,
      sym_decDigits,
    STATE(70), 1,
      sym_typeNat,
  [438] = 1,
    ACTIONS(99), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [445] = 1,
    ACTIONS(74), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [452] = 1,
    ACTIONS(101), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [459] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [468] = 4,
    ACTIONS(35), 1,
      aux_sym_decDigits_token1,
    STATE(10), 1,
      aux_sym_decDigits_repeat1,
    STATE(21), 1,
      sym_decDigits,
    STATE(82), 1,
      sym_typeNat,
  [481] = 3,
    ACTIONS(107), 1,
      anon_sym_SEMI,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_exportDecl_repeat1,
  [491] = 3,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_importDecl_repeat1,
  [501] = 3,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_exportDecl_repeat1,
  [511] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      aux_sym_exportDecl_repeat1,
  [521] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym_importDecl_repeat1,
  [531] = 3,
    ACTIONS(124), 1,
      anon_sym_SEMI,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_importDecl_repeat1,
  [541] = 3,
    ACTIONS(129), 1,
      sym_Identifier,
    STATE(40), 1,
      sym_importItem,
    STATE(89), 1,
      sym_packageIde,
  [551] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_type_repeat1,
  [561] = 2,
    ACTIONS(95), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    ACTIONS(93), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [569] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_type_repeat1,
  [579] = 3,
    ACTIONS(37), 1,
      sym_Identifier,
    STATE(87), 1,
      sym_typeDefType,
    STATE(88), 1,
      sym_typeIde,
  [589] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_type_repeat1,
  [599] = 1,
    ACTIONS(142), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [605] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_type_repeat1,
  [615] = 1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [621] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_type_repeat1,
  [631] = 1,
    ACTIONS(148), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [637] = 3,
    ACTIONS(129), 1,
      sym_Identifier,
    STATE(68), 1,
      sym_importItem,
    STATE(89), 1,
      sym_packageIde,
  [647] = 1,
    ACTIONS(150), 2,
      anon_sym_endinterface,
      anon_sym_method,
  [652] = 1,
    ACTIONS(152), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [657] = 1,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [662] = 2,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      anon_sym_COLON,
  [669] = 2,
    ACTIONS(129), 1,
      sym_Identifier,
    STATE(77), 1,
      sym_packageIde,
  [676] = 2,
    ACTIONS(158), 1,
      sym_Identifier,
    STATE(18), 1,
      sym_typeIde,
  [683] = 1,
    ACTIONS(160), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [688] = 2,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_COLON,
  [695] = 2,
    ACTIONS(129), 1,
      sym_Identifier,
    STATE(72), 1,
      sym_packageIde,
  [702] = 1,
    ACTIONS(166), 2,
      anon_sym_endinterface,
      anon_sym_method,
  [707] = 1,
    ACTIONS(115), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [712] = 2,
    ACTIONS(129), 1,
      sym_Identifier,
    STATE(79), 1,
      sym_packageIde,
  [719] = 2,
    ACTIONS(158), 1,
      sym_Identifier,
    STATE(15), 1,
      sym_typeIde,
  [726] = 1,
    ACTIONS(168), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [731] = 1,
    ACTIONS(124), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [736] = 1,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
  [740] = 1,
    ACTIONS(172), 1,
      anon_sym_COLON,
  [744] = 1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [748] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
  [752] = 1,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
  [756] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [760] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [764] = 1,
    ACTIONS(184), 1,
      anon_sym_SEMI,
  [768] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [772] = 1,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
  [776] = 1,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [780] = 1,
    ACTIONS(192), 1,
      sym_identifier,
  [784] = 1,
    ACTIONS(194), 1,
      anon_sym_COLON,
  [788] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
  [792] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [796] = 1,
    ACTIONS(198), 1,
      anon_sym_endpackage,
  [800] = 1,
    ACTIONS(200), 1,
      anon_sym_STAR,
  [804] = 1,
    ACTIONS(202), 1,
      anon_sym_STAR,
  [808] = 1,
    ACTIONS(204), 1,
      anon_sym_SEMI,
  [812] = 1,
    ACTIONS(206), 1,
      anon_sym_SEMI,
  [816] = 1,
    ACTIONS(208), 1,
      anon_sym_COLON_COLON,
  [820] = 1,
    ACTIONS(210), 1,
      anon_sym_COLON_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 222,
  [SMALL_STATE(12)] = 234,
  [SMALL_STATE(13)] = 246,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 282,
  [SMALL_STATE(18)] = 291,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 309,
  [SMALL_STATE(21)] = 318,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 336,
  [SMALL_STATE(24)] = 346,
  [SMALL_STATE(25)] = 360,
  [SMALL_STATE(26)] = 374,
  [SMALL_STATE(27)] = 388,
  [SMALL_STATE(28)] = 401,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 425,
  [SMALL_STATE(31)] = 438,
  [SMALL_STATE(32)] = 445,
  [SMALL_STATE(33)] = 452,
  [SMALL_STATE(34)] = 459,
  [SMALL_STATE(35)] = 468,
  [SMALL_STATE(36)] = 481,
  [SMALL_STATE(37)] = 491,
  [SMALL_STATE(38)] = 501,
  [SMALL_STATE(39)] = 511,
  [SMALL_STATE(40)] = 521,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 541,
  [SMALL_STATE(43)] = 551,
  [SMALL_STATE(44)] = 561,
  [SMALL_STATE(45)] = 569,
  [SMALL_STATE(46)] = 579,
  [SMALL_STATE(47)] = 589,
  [SMALL_STATE(48)] = 599,
  [SMALL_STATE(49)] = 605,
  [SMALL_STATE(50)] = 615,
  [SMALL_STATE(51)] = 621,
  [SMALL_STATE(52)] = 631,
  [SMALL_STATE(53)] = 637,
  [SMALL_STATE(54)] = 647,
  [SMALL_STATE(55)] = 652,
  [SMALL_STATE(56)] = 657,
  [SMALL_STATE(57)] = 662,
  [SMALL_STATE(58)] = 669,
  [SMALL_STATE(59)] = 676,
  [SMALL_STATE(60)] = 683,
  [SMALL_STATE(61)] = 688,
  [SMALL_STATE(62)] = 695,
  [SMALL_STATE(63)] = 702,
  [SMALL_STATE(64)] = 707,
  [SMALL_STATE(65)] = 712,
  [SMALL_STATE(66)] = 719,
  [SMALL_STATE(67)] = 726,
  [SMALL_STATE(68)] = 731,
  [SMALL_STATE(69)] = 736,
  [SMALL_STATE(70)] = 740,
  [SMALL_STATE(71)] = 744,
  [SMALL_STATE(72)] = 748,
  [SMALL_STATE(73)] = 752,
  [SMALL_STATE(74)] = 756,
  [SMALL_STATE(75)] = 760,
  [SMALL_STATE(76)] = 764,
  [SMALL_STATE(77)] = 768,
  [SMALL_STATE(78)] = 772,
  [SMALL_STATE(79)] = 776,
  [SMALL_STATE(80)] = 780,
  [SMALL_STATE(81)] = 784,
  [SMALL_STATE(82)] = 788,
  [SMALL_STATE(83)] = 792,
  [SMALL_STATE(84)] = 796,
  [SMALL_STATE(85)] = 800,
  [SMALL_STATE(86)] = 804,
  [SMALL_STATE(87)] = 808,
  [SMALL_STATE(88)] = 812,
  [SMALL_STATE(89)] = 816,
  [SMALL_STATE(90)] = 820,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2), SHIFT_REPEAT(29),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2), SHIFT_REPEAT(42),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2), SHIFT_REPEAT(46),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_packageBody_repeat1, 2), SHIFT_REPEAT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageBody, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decDigits_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decDigits_repeat1, 2), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decDigits, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 8),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageStmt, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeIde, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeNat, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageIde, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2), SHIFT_REPEAT(27),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2), SHIFT_REPEAT(53),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceMemberDecl, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 6),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importItem, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 6),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDefType, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
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
