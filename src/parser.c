#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  anon_sym_parameter = 25,
  sym_provisos = 26,
  anon_sym_LT_DASH = 27,
  anon_sym_clocked_by = 28,
  anon_sym_reset_by = 29,
  sym_rule = 30,
  sym_expression = 31,
  anon_sym_SQUOTE0 = 32,
  anon_sym_SQUOTE1 = 33,
  anon_sym_SQUOTEd = 34,
  anon_sym_SQUOTED = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  aux_sym_decDigits_token1 = 38,
  aux_sym_decDigitsUnderscore_token1 = 39,
  sym_Identifier = 40,
  sym_identifier = 41,
  sym_program = 42,
  sym_package = 43,
  sym_exportDecl = 44,
  sym_exportItem = 45,
  sym_importDecl = 46,
  sym_importItem = 47,
  sym_packageStmt = 48,
  sym_packageIde = 49,
  sym_type = 50,
  sym_typePrimary = 51,
  sym_typeIde = 52,
  sym_typeNat = 53,
  sym_interfaceDecl = 54,
  sym_typeDefType = 55,
  sym_typeFormals = 56,
  sym_typeFormal = 57,
  sym_interfaceMemberDecl = 58,
  sym_methodProto = 59,
  sym_methodProtoFormals = 60,
  sym_methodProtoFormal = 61,
  sym_subinterfaceDecl = 62,
  sym_moduleDef = 63,
  sym_moduleProto = 64,
  sym_moduleFormalParams = 65,
  sym_moduleFormalParam = 66,
  sym_moduleFormalArgs = 67,
  sym_moduleStmt = 68,
  sym_moduleInst = 69,
  sym_moduleApp = 70,
  sym_moduleActualParamArg = 71,
  sym_methodDef = 72,
  sym_decDigits = 73,
  aux_sym_program_repeat1 = 74,
  aux_sym_exportDecl_repeat1 = 75,
  aux_sym_importDecl_repeat1 = 76,
  aux_sym_type_repeat1 = 77,
  aux_sym_interfaceDecl_repeat1 = 78,
  aux_sym_typeFormals_repeat1 = 79,
  aux_sym_methodProtoFormals_repeat1 = 80,
  aux_sym_moduleDef_repeat1 = 81,
  aux_sym_moduleFormalParams_repeat1 = 82,
  aux_sym_moduleFormalArgs_repeat1 = 83,
  aux_sym_moduleApp_repeat1 = 84,
  aux_sym_decDigits_repeat1 = 85,
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
  [anon_sym_parameter] = "parameter",
  [sym_provisos] = "provisos",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_clocked_by] = "clocked_by",
  [anon_sym_reset_by] = "reset_by",
  [sym_rule] = "rule",
  [sym_expression] = "expression",
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
  [sym_moduleFormalParams] = "moduleFormalParams",
  [sym_moduleFormalParam] = "moduleFormalParam",
  [sym_moduleFormalArgs] = "moduleFormalArgs",
  [sym_moduleStmt] = "moduleStmt",
  [sym_moduleInst] = "moduleInst",
  [sym_moduleApp] = "moduleApp",
  [sym_moduleActualParamArg] = "moduleActualParamArg",
  [sym_methodDef] = "methodDef",
  [sym_decDigits] = "decDigits",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_exportDecl_repeat1] = "exportDecl_repeat1",
  [aux_sym_importDecl_repeat1] = "importDecl_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_interfaceDecl_repeat1] = "interfaceDecl_repeat1",
  [aux_sym_typeFormals_repeat1] = "typeFormals_repeat1",
  [aux_sym_methodProtoFormals_repeat1] = "methodProtoFormals_repeat1",
  [aux_sym_moduleDef_repeat1] = "moduleDef_repeat1",
  [aux_sym_moduleFormalParams_repeat1] = "moduleFormalParams_repeat1",
  [aux_sym_moduleFormalArgs_repeat1] = "moduleFormalArgs_repeat1",
  [aux_sym_moduleApp_repeat1] = "moduleApp_repeat1",
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
  [anon_sym_parameter] = anon_sym_parameter,
  [sym_provisos] = sym_provisos,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_clocked_by] = anon_sym_clocked_by,
  [anon_sym_reset_by] = anon_sym_reset_by,
  [sym_rule] = sym_rule,
  [sym_expression] = sym_expression,
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
  [sym_moduleFormalParams] = sym_moduleFormalParams,
  [sym_moduleFormalParam] = sym_moduleFormalParam,
  [sym_moduleFormalArgs] = sym_moduleFormalArgs,
  [sym_moduleStmt] = sym_moduleStmt,
  [sym_moduleInst] = sym_moduleInst,
  [sym_moduleApp] = sym_moduleApp,
  [sym_moduleActualParamArg] = sym_moduleActualParamArg,
  [sym_methodDef] = sym_methodDef,
  [sym_decDigits] = sym_decDigits,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_exportDecl_repeat1] = aux_sym_exportDecl_repeat1,
  [aux_sym_importDecl_repeat1] = aux_sym_importDecl_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_interfaceDecl_repeat1] = aux_sym_interfaceDecl_repeat1,
  [aux_sym_typeFormals_repeat1] = aux_sym_typeFormals_repeat1,
  [aux_sym_methodProtoFormals_repeat1] = aux_sym_methodProtoFormals_repeat1,
  [aux_sym_moduleDef_repeat1] = aux_sym_moduleDef_repeat1,
  [aux_sym_moduleFormalParams_repeat1] = aux_sym_moduleFormalParams_repeat1,
  [aux_sym_moduleFormalArgs_repeat1] = aux_sym_moduleFormalArgs_repeat1,
  [aux_sym_moduleApp_repeat1] = aux_sym_moduleApp_repeat1,
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
  [anon_sym_parameter] = {
    .visible = true,
    .named = false,
  },
  [sym_provisos] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clocked_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset_by] = {
    .visible = true,
    .named = false,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
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
  [sym_moduleFormalParams] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleFormalParam] = {
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
  [sym_moduleInst] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleApp] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleActualParamArg] = {
    .visible = true,
    .named = true,
  },
  [sym_methodDef] = {
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
  [aux_sym_moduleFormalParams_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_moduleFormalArgs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_moduleApp_repeat1] = {
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
  [53] = 39,
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
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(162);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == ':') ADVANCE(123);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == ']') ADVANCE(137);
      if (lookahead == '_') ADVANCE(165);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == ']') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(126);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == '1') ADVANCE(159);
      if (lookahead == 'D') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '3') ADVANCE(157);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(127);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 116:
      if (eof) ADVANCE(118);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(116)
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_endpackage);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LPAREN_DOT_DOT_RPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_bit);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_endinterface);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_numeric);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_method);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_endmodule);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_endmodule);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_parameter);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_parameter);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_provisos);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_clocked_by);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_reset_by);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_rule);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_rule);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_expression);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SQUOTE0);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SQUOTE1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SQUOTEd);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SQUOTED);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_decDigits_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_decDigitsUnderscore_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_Identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(186);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 116},
  [2] = {.lex_state = 117},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 117},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 116},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 116},
  [14] = {.lex_state = 116},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 116},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 117},
  [26] = {.lex_state = 117},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 117},
  [29] = {.lex_state = 117},
  [30] = {.lex_state = 117},
  [31] = {.lex_state = 117},
  [32] = {.lex_state = 117},
  [33] = {.lex_state = 117},
  [34] = {.lex_state = 117},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 117},
  [37] = {.lex_state = 116},
  [38] = {.lex_state = 116},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 116},
  [41] = {.lex_state = 116},
  [42] = {.lex_state = 116},
  [43] = {.lex_state = 116},
  [44] = {.lex_state = 116},
  [45] = {.lex_state = 116},
  [46] = {.lex_state = 116},
  [47] = {.lex_state = 116},
  [48] = {.lex_state = 116},
  [49] = {.lex_state = 116},
  [50] = {.lex_state = 116},
  [51] = {.lex_state = 116},
  [52] = {.lex_state = 116},
  [53] = {.lex_state = 116},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 116},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 116},
  [62] = {.lex_state = 117},
  [63] = {.lex_state = 117},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 117},
  [66] = {.lex_state = 116},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 116},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 116},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 117},
  [80] = {.lex_state = 116},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 116},
  [85] = {.lex_state = 116},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 116},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 116},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 116},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 117},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 117},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 116},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 116},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 0},
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
    [anon_sym_parameter] = ACTIONS(1),
    [sym_provisos] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_clocked_by] = ACTIONS(1),
    [anon_sym_reset_by] = ACTIONS(1),
    [sym_rule] = ACTIONS(1),
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
    [sym_program] = STATE(200),
    [sym_package] = STATE(191),
    [sym_exportDecl] = STATE(16),
    [sym_importDecl] = STATE(16),
    [sym_packageStmt] = STATE(16),
    [sym_interfaceDecl] = STATE(55),
    [sym_moduleDef] = STATE(55),
    [sym_moduleProto] = STATE(3),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(15), 1,
      anon_sym_bit,
    ACTIONS(18), 1,
      anon_sym_int,
    ACTIONS(21), 1,
      anon_sym_method,
    ACTIONS(24), 1,
      anon_sym_endmodule,
    ACTIONS(26), 1,
      sym_rule,
    ACTIONS(29), 1,
      aux_sym_decDigits_token1,
    ACTIONS(32), 1,
      sym_Identifier,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(155), 1,
      sym_type,
    STATE(2), 2,
      sym_moduleStmt,
      aux_sym_moduleDef_repeat1,
    STATE(30), 2,
      sym_moduleInst,
      sym_methodDef,
  [51] = 16,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(42), 1,
      anon_sym_method,
    ACTIONS(44), 1,
      anon_sym_endmodule,
    ACTIONS(46), 1,
      sym_rule,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(155), 1,
      sym_type,
    STATE(4), 2,
      sym_moduleStmt,
      aux_sym_moduleDef_repeat1,
    STATE(30), 2,
      sym_moduleInst,
      sym_methodDef,
  [102] = 16,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(42), 1,
      anon_sym_method,
    ACTIONS(46), 1,
      sym_rule,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_endmodule,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(155), 1,
      sym_type,
    STATE(2), 2,
      sym_moduleStmt,
      aux_sym_moduleDef_repeat1,
    STATE(30), 2,
      sym_moduleInst,
      sym_methodDef,
  [153] = 14,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(86), 1,
      sym_methodProtoFormal,
    STATE(146), 1,
      sym_type,
    STATE(166), 1,
      sym_methodProtoFormals,
  [196] = 8,
    ACTIONS(60), 1,
      anon_sym_export,
    ACTIONS(63), 1,
      anon_sym_import,
    ACTIONS(66), 1,
      anon_sym_interface,
    ACTIONS(69), 1,
      anon_sym_module,
    STATE(3), 1,
      sym_moduleProto,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_endpackage,
    STATE(55), 2,
      sym_interfaceDecl,
      sym_moduleDef,
    STATE(6), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_program_repeat1,
  [226] = 13,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_parameter,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(137), 1,
      sym_moduleFormalParam,
    STATE(202), 1,
      sym_type,
  [266] = 13,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(133), 1,
      sym_type,
    STATE(198), 1,
      sym_moduleFormalArgs,
  [306] = 13,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(133), 1,
      sym_type,
    STATE(172), 1,
      sym_moduleFormalArgs,
  [346] = 13,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(133), 1,
      sym_type,
    STATE(158), 1,
      sym_moduleFormalArgs,
  [386] = 13,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_parameter,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(107), 1,
      sym_moduleFormalParam,
    STATE(202), 1,
      sym_type,
  [426] = 13,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(133), 1,
      sym_type,
    STATE(180), 1,
      sym_moduleFormalArgs,
  [466] = 8,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(82), 1,
      anon_sym_endpackage,
    STATE(3), 1,
      sym_moduleProto,
    STATE(55), 2,
      sym_interfaceDecl,
      sym_moduleDef,
    STATE(6), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_program_repeat1,
  [495] = 8,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(84), 1,
      anon_sym_endpackage,
    STATE(3), 1,
      sym_moduleProto,
    STATE(55), 2,
      sym_interfaceDecl,
      sym_moduleDef,
    STATE(13), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_program_repeat1,
  [524] = 12,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(117), 1,
      sym_methodProtoFormal,
    STATE(146), 1,
      sym_type,
  [561] = 8,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_moduleProto,
    STATE(55), 2,
      sym_interfaceDecl,
      sym_moduleDef,
    STATE(6), 4,
      sym_exportDecl,
      sym_importDecl,
      sym_packageStmt,
      aux_sym_program_repeat1,
  [590] = 11,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(147), 1,
      sym_type,
  [624] = 11,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(160), 1,
      sym_type,
  [658] = 11,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(143), 1,
      sym_type,
  [692] = 11,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(105), 1,
      sym_type,
  [726] = 11,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(175), 1,
      sym_type,
  [760] = 11,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(91), 1,
      sym_type,
  [794] = 11,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(193), 1,
      sym_type,
  [828] = 11,
    ACTIONS(38), 1,
      anon_sym_bit,
    ACTIONS(40), 1,
      anon_sym_int,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    ACTIONS(50), 1,
      sym_Identifier,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(56), 1,
      sym_typeIde,
    STATE(58), 1,
      sym_typeNat,
    STATE(60), 1,
      sym_typePrimary,
    STATE(150), 1,
      sym_type,
  [862] = 2,
    ACTIONS(90), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(88), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [875] = 2,
    ACTIONS(94), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(92), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [888] = 3,
    ACTIONS(98), 1,
      aux_sym_decDigits_token1,
    STATE(27), 1,
      aux_sym_decDigits_repeat1,
    ACTIONS(96), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [903] = 2,
    ACTIONS(103), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(101), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [916] = 2,
    ACTIONS(107), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(105), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [929] = 2,
    ACTIONS(111), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(109), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [942] = 2,
    ACTIONS(115), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(113), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [955] = 2,
    ACTIONS(119), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(117), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [968] = 2,
    ACTIONS(123), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(121), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [981] = 2,
    ACTIONS(127), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(125), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [994] = 3,
    ACTIONS(131), 1,
      aux_sym_decDigits_token1,
    STATE(27), 1,
      aux_sym_decDigits_repeat1,
    ACTIONS(129), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [1009] = 2,
    ACTIONS(135), 2,
      aux_sym_decDigits_token1,
      sym_Identifier,
    ACTIONS(133), 6,
      anon_sym_bit,
      anon_sym_int,
      anon_sym_method,
      anon_sym_endmodule,
      sym_rule,
      sym_identifier,
  [1022] = 5,
    ACTIONS(137), 1,
      anon_sym_interface,
    ACTIONS(139), 1,
      anon_sym_endinterface,
    ACTIONS(141), 1,
      anon_sym_method,
    STATE(42), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(84), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [1040] = 2,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1052] = 1,
    ACTIONS(147), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_identifier,
  [1062] = 5,
    ACTIONS(137), 1,
      anon_sym_interface,
    ACTIONS(141), 1,
      anon_sym_method,
    ACTIONS(149), 1,
      anon_sym_endinterface,
    STATE(37), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(84), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [1080] = 2,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1092] = 5,
    ACTIONS(155), 1,
      anon_sym_interface,
    ACTIONS(158), 1,
      anon_sym_endinterface,
    ACTIONS(160), 1,
      anon_sym_method,
    STATE(42), 2,
      sym_interfaceMemberDecl,
      aux_sym_interfaceDecl_repeat1,
    STATE(84), 2,
      sym_methodProto,
      sym_subinterfaceDecl,
  [1110] = 2,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1122] = 2,
    ACTIONS(169), 1,
      anon_sym_COLON,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1134] = 1,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1143] = 1,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1152] = 1,
    ACTIONS(175), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1161] = 1,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1170] = 1,
    ACTIONS(179), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1179] = 1,
    ACTIONS(181), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1188] = 1,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1197] = 1,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1206] = 1,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1215] = 1,
    ACTIONS(187), 6,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [1224] = 1,
    ACTIONS(189), 6,
      ts_builtin_sym_end,
      anon_sym_endpackage,
      anon_sym_export,
      anon_sym_import,
      anon_sym_interface,
      anon_sym_module,
  [1233] = 2,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(191), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [1244] = 1,
    ACTIONS(195), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [1252] = 1,
    ACTIONS(191), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [1260] = 1,
    ACTIONS(197), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [1268] = 2,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [1278] = 4,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 1,
      sym_expression,
    STATE(87), 1,
      sym_moduleActualParamArg,
    ACTIONS(205), 2,
      anon_sym_clocked_by,
      anon_sym_reset_by,
  [1292] = 4,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(168), 1,
      sym_typeNat,
  [1305] = 3,
    ACTIONS(211), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    ACTIONS(213), 1,
      anon_sym_COLON_COLON,
    ACTIONS(209), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1316] = 3,
    STATE(93), 1,
      sym_typeIde,
    STATE(153), 1,
      sym_typeDefType,
    ACTIONS(50), 2,
      sym_Identifier,
      sym_identifier,
  [1327] = 4,
    ACTIONS(48), 1,
      aux_sym_decDigits_token1,
    STATE(35), 1,
      aux_sym_decDigits_repeat1,
    STATE(54), 1,
      sym_decDigits,
    STATE(157), 1,
      sym_typeNat,
  [1340] = 3,
    ACTIONS(207), 1,
      sym_expression,
    STATE(120), 1,
      sym_moduleActualParamArg,
    ACTIONS(205), 2,
      anon_sym_clocked_by,
      anon_sym_reset_by,
  [1351] = 1,
    ACTIONS(215), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [1358] = 4,
    ACTIONS(217), 1,
      sym_Identifier,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(119), 1,
      sym_exportItem,
    STATE(162), 1,
      sym_packageIde,
  [1371] = 1,
    ACTIONS(221), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [1378] = 4,
    ACTIONS(217), 1,
      sym_Identifier,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(88), 1,
      sym_exportItem,
    STATE(162), 1,
      sym_packageIde,
  [1391] = 1,
    ACTIONS(223), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1397] = 3,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_importDecl_repeat1,
  [1407] = 3,
    ACTIONS(229), 1,
      sym_Identifier,
    STATE(92), 1,
      sym_importItem,
    STATE(156), 1,
      sym_packageIde,
  [1417] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_methodProtoFormals_repeat1,
  [1427] = 1,
    ACTIONS(236), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1433] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_moduleApp_repeat1,
  [1443] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_methodProtoFormals_repeat1,
  [1453] = 3,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_exportDecl_repeat1,
  [1463] = 1,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [1469] = 1,
    ACTIONS(252), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1475] = 3,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_importDecl_repeat1,
  [1485] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_moduleApp_repeat1,
  [1495] = 3,
    ACTIONS(263), 1,
      anon_sym_numeric,
    ACTIONS(265), 1,
      anon_sym_type,
    STATE(97), 1,
      sym_typeFormal,
  [1505] = 1,
    ACTIONS(267), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1511] = 2,
    ACTIONS(211), 1,
      anon_sym_LPAREN_DOT_DOT_RPAREN,
    ACTIONS(209), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1519] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_methodProtoFormals_repeat1,
  [1529] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_moduleApp_repeat1,
  [1539] = 3,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_exportDecl_repeat1,
  [1549] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_moduleFormalParams_repeat1,
  [1559] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_moduleFormalArgs_repeat1,
  [1569] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_type_repeat1,
  [1579] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      aux_sym_importDecl_repeat1,
  [1589] = 3,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      anon_sym_POUND,
    STATE(190), 1,
      sym_typeFormals,
  [1599] = 1,
    ACTIONS(297), 3,
      anon_sym_interface,
      anon_sym_endinterface,
      anon_sym_method,
  [1605] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_typeFormals_repeat1,
  [1615] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_type_repeat1,
  [1625] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_typeFormals_repeat1,
  [1635] = 3,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_moduleFormalParams,
  [1645] = 2,
    STATE(50), 1,
      sym_typeIde,
    ACTIONS(314), 2,
      sym_Identifier,
      sym_identifier,
  [1653] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_type_repeat1,
  [1663] = 3,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_moduleFormalParams,
  [1673] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_moduleFormalParams_repeat1,
  [1683] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_moduleFormalArgs_repeat1,
  [1693] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_type_repeat1,
  [1703] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_type_repeat1,
  [1713] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_typeFormals_repeat1,
  [1723] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_moduleFormalParams_repeat1,
  [1733] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_moduleFormalArgs_repeat1,
  [1743] = 3,
    ACTIONS(229), 1,
      sym_Identifier,
    STATE(123), 1,
      sym_importItem,
    STATE(156), 1,
      sym_packageIde,
  [1753] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      aux_sym_exportDecl_repeat1,
  [1763] = 2,
    STATE(49), 1,
      sym_typeIde,
    ACTIONS(314), 2,
      sym_Identifier,
      sym_identifier,
  [1771] = 3,
    ACTIONS(263), 1,
      anon_sym_numeric,
    ACTIONS(265), 1,
      anon_sym_type,
    STATE(144), 1,
      sym_typeFormal,
  [1781] = 2,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      sym_provisos,
  [1788] = 1,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1793] = 2,
    ACTIONS(229), 1,
      sym_Identifier,
    STATE(183), 1,
      sym_packageIde,
  [1800] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      sym_identifier,
  [1807] = 1,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1812] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [1819] = 1,
    ACTIONS(247), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1824] = 1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1829] = 2,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    ACTIONS(359), 1,
      sym_provisos,
  [1836] = 1,
    ACTIONS(361), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1841] = 1,
    ACTIONS(254), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1846] = 1,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1851] = 2,
    ACTIONS(229), 1,
      sym_Identifier,
    STATE(176), 1,
      sym_packageIde,
  [1858] = 1,
    ACTIONS(365), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1863] = 1,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1868] = 1,
    ACTIONS(369), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1873] = 2,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(373), 1,
      sym_provisos,
  [1880] = 2,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      sym_provisos,
  [1887] = 2,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
  [1894] = 2,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    ACTIONS(385), 1,
      sym_provisos,
  [1901] = 2,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 1,
      sym_identifier,
  [1908] = 1,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1913] = 2,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(194), 1,
      sym_moduleApp,
  [1920] = 1,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1925] = 1,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1930] = 1,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1935] = 2,
    ACTIONS(229), 1,
      sym_Identifier,
    STATE(187), 1,
      sym_packageIde,
  [1942] = 2,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    ACTIONS(401), 1,
      sym_provisos,
  [1949] = 1,
    ACTIONS(403), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1954] = 2,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 1,
      anon_sym_COLON,
  [1961] = 1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1966] = 1,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1971] = 1,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1976] = 1,
    ACTIONS(411), 1,
      sym_identifier,
  [1980] = 1,
    ACTIONS(413), 1,
      sym_identifier,
  [1984] = 1,
    ACTIONS(415), 1,
      anon_sym_STAR,
  [1988] = 1,
    ACTIONS(371), 1,
      anon_sym_SEMI,
  [1992] = 1,
    ACTIONS(417), 1,
      sym_identifier,
  [1996] = 1,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [2000] = 1,
    ACTIONS(421), 1,
      sym_identifier,
  [2004] = 1,
    ACTIONS(423), 1,
      anon_sym_SEMI,
  [2008] = 1,
    ACTIONS(425), 1,
      anon_sym_type,
  [2012] = 1,
    ACTIONS(427), 1,
      sym_identifier,
  [2016] = 1,
    ACTIONS(429), 1,
      anon_sym_COLON_COLON,
  [2020] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
  [2024] = 1,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
  [2028] = 1,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
  [2032] = 1,
    ACTIONS(433), 1,
      sym_identifier,
  [2036] = 1,
    ACTIONS(435), 1,
      sym_identifier,
  [2040] = 1,
    ACTIONS(437), 1,
      anon_sym_COLON_COLON,
  [2044] = 1,
    ACTIONS(439), 1,
      sym_identifier,
  [2048] = 1,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
  [2052] = 1,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
  [2056] = 1,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
  [2060] = 1,
    ACTIONS(399), 1,
      anon_sym_SEMI,
  [2064] = 1,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [2068] = 1,
    ACTIONS(449), 1,
      anon_sym_SEMI,
  [2072] = 1,
    ACTIONS(451), 1,
      sym_expression,
  [2076] = 1,
    ACTIONS(343), 1,
      anon_sym_SEMI,
  [2080] = 1,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
  [2084] = 1,
    ACTIONS(453), 1,
      anon_sym_SEMI,
  [2088] = 1,
    ACTIONS(455), 1,
      anon_sym_LBRACK,
  [2092] = 1,
    ACTIONS(457), 1,
      sym_identifier,
  [2096] = 1,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
  [2100] = 1,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
  [2104] = 1,
    ACTIONS(375), 1,
      anon_sym_SEMI,
  [2108] = 1,
    ACTIONS(463), 1,
      anon_sym_STAR,
  [2112] = 1,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
  [2116] = 1,
    ACTIONS(467), 1,
      anon_sym_SEMI,
  [2120] = 1,
    ACTIONS(469), 1,
      anon_sym_SEMI,
  [2124] = 1,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [2128] = 1,
    ACTIONS(473), 1,
      anon_sym_SEMI,
  [2132] = 1,
    ACTIONS(475), 1,
      sym_identifier,
  [2136] = 1,
    ACTIONS(477), 1,
      sym_identifier,
  [2140] = 1,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
  [2144] = 1,
    ACTIONS(481), 1,
      anon_sym_SEMI,
  [2148] = 1,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
  [2152] = 1,
    ACTIONS(485), 1,
      anon_sym_SEMI,
  [2156] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [2160] = 1,
    ACTIONS(357), 1,
      anon_sym_SEMI,
  [2164] = 1,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
  [2168] = 1,
    ACTIONS(489), 1,
      anon_sym_SEMI,
  [2172] = 1,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [2176] = 1,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
  [2180] = 1,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
  [2184] = 1,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
  [2188] = 1,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
  [2192] = 1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
  [2196] = 1,
    ACTIONS(503), 1,
      anon_sym_SEMI,
  [2200] = 1,
    ACTIONS(505), 1,
      sym_identifier,
  [2204] = 1,
    ACTIONS(507), 1,
      anon_sym_LT_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 306,
  [SMALL_STATE(10)] = 346,
  [SMALL_STATE(11)] = 386,
  [SMALL_STATE(12)] = 426,
  [SMALL_STATE(13)] = 466,
  [SMALL_STATE(14)] = 495,
  [SMALL_STATE(15)] = 524,
  [SMALL_STATE(16)] = 561,
  [SMALL_STATE(17)] = 590,
  [SMALL_STATE(18)] = 624,
  [SMALL_STATE(19)] = 658,
  [SMALL_STATE(20)] = 692,
  [SMALL_STATE(21)] = 726,
  [SMALL_STATE(22)] = 760,
  [SMALL_STATE(23)] = 794,
  [SMALL_STATE(24)] = 828,
  [SMALL_STATE(25)] = 862,
  [SMALL_STATE(26)] = 875,
  [SMALL_STATE(27)] = 888,
  [SMALL_STATE(28)] = 903,
  [SMALL_STATE(29)] = 916,
  [SMALL_STATE(30)] = 929,
  [SMALL_STATE(31)] = 942,
  [SMALL_STATE(32)] = 955,
  [SMALL_STATE(33)] = 968,
  [SMALL_STATE(34)] = 981,
  [SMALL_STATE(35)] = 994,
  [SMALL_STATE(36)] = 1009,
  [SMALL_STATE(37)] = 1022,
  [SMALL_STATE(38)] = 1040,
  [SMALL_STATE(39)] = 1052,
  [SMALL_STATE(40)] = 1062,
  [SMALL_STATE(41)] = 1080,
  [SMALL_STATE(42)] = 1092,
  [SMALL_STATE(43)] = 1110,
  [SMALL_STATE(44)] = 1122,
  [SMALL_STATE(45)] = 1134,
  [SMALL_STATE(46)] = 1143,
  [SMALL_STATE(47)] = 1152,
  [SMALL_STATE(48)] = 1161,
  [SMALL_STATE(49)] = 1170,
  [SMALL_STATE(50)] = 1179,
  [SMALL_STATE(51)] = 1188,
  [SMALL_STATE(52)] = 1197,
  [SMALL_STATE(53)] = 1206,
  [SMALL_STATE(54)] = 1215,
  [SMALL_STATE(55)] = 1224,
  [SMALL_STATE(56)] = 1233,
  [SMALL_STATE(57)] = 1244,
  [SMALL_STATE(58)] = 1252,
  [SMALL_STATE(59)] = 1260,
  [SMALL_STATE(60)] = 1268,
  [SMALL_STATE(61)] = 1278,
  [SMALL_STATE(62)] = 1292,
  [SMALL_STATE(63)] = 1305,
  [SMALL_STATE(64)] = 1316,
  [SMALL_STATE(65)] = 1327,
  [SMALL_STATE(66)] = 1340,
  [SMALL_STATE(67)] = 1351,
  [SMALL_STATE(68)] = 1358,
  [SMALL_STATE(69)] = 1371,
  [SMALL_STATE(70)] = 1378,
  [SMALL_STATE(71)] = 1391,
  [SMALL_STATE(72)] = 1397,
  [SMALL_STATE(73)] = 1407,
  [SMALL_STATE(74)] = 1417,
  [SMALL_STATE(75)] = 1427,
  [SMALL_STATE(76)] = 1433,
  [SMALL_STATE(77)] = 1443,
  [SMALL_STATE(78)] = 1453,
  [SMALL_STATE(79)] = 1463,
  [SMALL_STATE(80)] = 1469,
  [SMALL_STATE(81)] = 1475,
  [SMALL_STATE(82)] = 1485,
  [SMALL_STATE(83)] = 1495,
  [SMALL_STATE(84)] = 1505,
  [SMALL_STATE(85)] = 1511,
  [SMALL_STATE(86)] = 1519,
  [SMALL_STATE(87)] = 1529,
  [SMALL_STATE(88)] = 1539,
  [SMALL_STATE(89)] = 1549,
  [SMALL_STATE(90)] = 1559,
  [SMALL_STATE(91)] = 1569,
  [SMALL_STATE(92)] = 1579,
  [SMALL_STATE(93)] = 1589,
  [SMALL_STATE(94)] = 1599,
  [SMALL_STATE(95)] = 1605,
  [SMALL_STATE(96)] = 1615,
  [SMALL_STATE(97)] = 1625,
  [SMALL_STATE(98)] = 1635,
  [SMALL_STATE(99)] = 1645,
  [SMALL_STATE(100)] = 1653,
  [SMALL_STATE(101)] = 1663,
  [SMALL_STATE(102)] = 1673,
  [SMALL_STATE(103)] = 1683,
  [SMALL_STATE(104)] = 1693,
  [SMALL_STATE(105)] = 1703,
  [SMALL_STATE(106)] = 1713,
  [SMALL_STATE(107)] = 1723,
  [SMALL_STATE(108)] = 1733,
  [SMALL_STATE(109)] = 1743,
  [SMALL_STATE(110)] = 1753,
  [SMALL_STATE(111)] = 1763,
  [SMALL_STATE(112)] = 1771,
  [SMALL_STATE(113)] = 1781,
  [SMALL_STATE(114)] = 1788,
  [SMALL_STATE(115)] = 1793,
  [SMALL_STATE(116)] = 1800,
  [SMALL_STATE(117)] = 1807,
  [SMALL_STATE(118)] = 1812,
  [SMALL_STATE(119)] = 1819,
  [SMALL_STATE(120)] = 1824,
  [SMALL_STATE(121)] = 1829,
  [SMALL_STATE(122)] = 1836,
  [SMALL_STATE(123)] = 1841,
  [SMALL_STATE(124)] = 1846,
  [SMALL_STATE(125)] = 1851,
  [SMALL_STATE(126)] = 1858,
  [SMALL_STATE(127)] = 1863,
  [SMALL_STATE(128)] = 1868,
  [SMALL_STATE(129)] = 1873,
  [SMALL_STATE(130)] = 1880,
  [SMALL_STATE(131)] = 1887,
  [SMALL_STATE(132)] = 1894,
  [SMALL_STATE(133)] = 1901,
  [SMALL_STATE(134)] = 1908,
  [SMALL_STATE(135)] = 1913,
  [SMALL_STATE(136)] = 1920,
  [SMALL_STATE(137)] = 1925,
  [SMALL_STATE(138)] = 1930,
  [SMALL_STATE(139)] = 1935,
  [SMALL_STATE(140)] = 1942,
  [SMALL_STATE(141)] = 1949,
  [SMALL_STATE(142)] = 1954,
  [SMALL_STATE(143)] = 1961,
  [SMALL_STATE(144)] = 1966,
  [SMALL_STATE(145)] = 1971,
  [SMALL_STATE(146)] = 1976,
  [SMALL_STATE(147)] = 1980,
  [SMALL_STATE(148)] = 1984,
  [SMALL_STATE(149)] = 1988,
  [SMALL_STATE(150)] = 1992,
  [SMALL_STATE(151)] = 1996,
  [SMALL_STATE(152)] = 2000,
  [SMALL_STATE(153)] = 2004,
  [SMALL_STATE(154)] = 2008,
  [SMALL_STATE(155)] = 2012,
  [SMALL_STATE(156)] = 2016,
  [SMALL_STATE(157)] = 2020,
  [SMALL_STATE(158)] = 2024,
  [SMALL_STATE(159)] = 2028,
  [SMALL_STATE(160)] = 2032,
  [SMALL_STATE(161)] = 2036,
  [SMALL_STATE(162)] = 2040,
  [SMALL_STATE(163)] = 2044,
  [SMALL_STATE(164)] = 2048,
  [SMALL_STATE(165)] = 2052,
  [SMALL_STATE(166)] = 2056,
  [SMALL_STATE(167)] = 2060,
  [SMALL_STATE(168)] = 2064,
  [SMALL_STATE(169)] = 2068,
  [SMALL_STATE(170)] = 2072,
  [SMALL_STATE(171)] = 2076,
  [SMALL_STATE(172)] = 2080,
  [SMALL_STATE(173)] = 2084,
  [SMALL_STATE(174)] = 2088,
  [SMALL_STATE(175)] = 2092,
  [SMALL_STATE(176)] = 2096,
  [SMALL_STATE(177)] = 2100,
  [SMALL_STATE(178)] = 2104,
  [SMALL_STATE(179)] = 2108,
  [SMALL_STATE(180)] = 2112,
  [SMALL_STATE(181)] = 2116,
  [SMALL_STATE(182)] = 2120,
  [SMALL_STATE(183)] = 2124,
  [SMALL_STATE(184)] = 2128,
  [SMALL_STATE(185)] = 2132,
  [SMALL_STATE(186)] = 2136,
  [SMALL_STATE(187)] = 2140,
  [SMALL_STATE(188)] = 2144,
  [SMALL_STATE(189)] = 2148,
  [SMALL_STATE(190)] = 2152,
  [SMALL_STATE(191)] = 2156,
  [SMALL_STATE(192)] = 2160,
  [SMALL_STATE(193)] = 2164,
  [SMALL_STATE(194)] = 2168,
  [SMALL_STATE(195)] = 2172,
  [SMALL_STATE(196)] = 2176,
  [SMALL_STATE(197)] = 2180,
  [SMALL_STATE(198)] = 2184,
  [SMALL_STATE(199)] = 2188,
  [SMALL_STATE(200)] = 2192,
  [SMALL_STATE(201)] = 2196,
  [SMALL_STATE(202)] = 2200,
  [SMALL_STATE(203)] = 2204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moduleDef_repeat1, 2), SHIFT_REPEAT(174),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moduleDef_repeat1, 2), SHIFT_REPEAT(58),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moduleDef_repeat1, 2), SHIFT_REPEAT(28),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_moduleDef_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moduleDef_repeat1, 2), SHIFT_REPEAT(30),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_moduleDef_repeat1, 2), SHIFT_REPEAT(35),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_moduleDef_repeat1, 2), SHIFT_REPEAT(39),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_moduleDef_repeat1, 2), SHIFT_REPEAT(39),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(116),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_moduleProto, 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 7),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_moduleProto, 6),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decDigits_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decDigits_repeat1, 2), SHIFT_REPEAT(27),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_methodDef, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodDef, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_moduleProto, 10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 10),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_moduleStmt, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleStmt, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_moduleProto, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_moduleProto, 9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 9),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_moduleProto, 8),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 8),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_moduleInst, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleInst, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decDigits, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_moduleProto, 11),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleProto, 11),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeIde, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(21),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interfaceDecl_repeat1, 2), SHIFT_REPEAT(24),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleDef, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleDef, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportDecl, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importDecl, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 7),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceDecl, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleDef, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleDef, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeNat, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageStmt, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typePrimary, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packageIde, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subinterfaceDecl, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_methodProtoFormals_repeat1, 2), SHIFT_REPEAT(15),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_methodProtoFormals_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 7),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_moduleApp_repeat1, 2), SHIFT_REPEAT(66),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moduleApp_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormals, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exportDecl_repeat1, 2), SHIFT_REPEAT(68),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importDecl_repeat1, 2), SHIFT_REPEAT(109),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interfaceMemberDecl, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormals, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_moduleFormalParams_repeat1, 2), SHIFT_REPEAT(7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moduleFormalParams_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_moduleFormalArgs_repeat1, 2), SHIFT_REPEAT(18),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moduleFormalArgs_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDefType, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProto, 4),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeFormals_repeat1, 2), SHIFT_REPEAT(112),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeFormals_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(19),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleFormalArgs, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleFormalArgs, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_moduleFormalArgs_repeat1, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methodProtoFormal, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importItem, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormal, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleActualParamArg, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleFormalArgs, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleActualParamArg, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleFormalParam, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleFormalParam, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exportItem, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormal, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormals, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleFormalParams, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleFormalParams, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleApp, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 7),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFormals, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleApp, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDefType, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleApp, 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [501] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
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
