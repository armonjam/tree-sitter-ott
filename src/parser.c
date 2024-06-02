#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 196
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 5
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
  anon_sym_grammar = 1,
  anon_sym_defns = 2,
  anon_sym_COLON_COLON = 3,
  anon_sym_COLON_COLON_EQ = 4,
  anon_sym_defn = 5,
  anon_sym_by = 6,
  anon_sym_LF = 7,
  anon_sym_DASH_DASH_DASH_DASH = 8,
  aux_sym_dash_line_token1 = 9,
  anon_sym_PIPE = 10,
  anon_sym_LT_SLASH = 11,
  anon_sym_SLASH_SLASH = 12,
  anon_sym_SLASH_GT = 13,
  anon_sym_metavar = 14,
  anon_sym_indexvar = 15,
  anon_sym_COMMA = 16,
  anon_sym_IN = 17,
  anon_sym_LBRACE_LBRACE = 18,
  anon_sym_RBRACE_RBRACE = 19,
  anon_sym_tex = 20,
  sym_comment = 21,
  anon_sym_DOT_DOT = 22,
  anon_sym_DOT_DOT_DOT = 23,
  anon_sym_DOT_DOT_DOT_DOT = 24,
  anon_sym_SQUOTE = 25,
  sym_id = 26,
  sym_string = 27,
  sym_source_file = 28,
  sym__item = 29,
  sym_defnclass = 30,
  sym_defn = 31,
  sym_defn_rule = 32,
  sym_rule_separator = 33,
  sym_dash_line = 34,
  sym_rule_line = 35,
  sym_grammar_rule = 36,
  sym_production = 37,
  sym_element = 38,
  sym_metavardefn = 39,
  sym__id_desc_list1 = 40,
  sym_id_desc = 41,
  sym_comprehension_bound = 42,
  sym_homomorphism = 43,
  sym_hom_name = 44,
  sym_hom_body = 45,
  sym_dots = 46,
  sym_namespace_prefix = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym__item_repeat1 = 49,
  aux_sym_defnclass_repeat1 = 50,
  aux_sym_defnclass_repeat2 = 51,
  aux_sym_defn_repeat1 = 52,
  aux_sym_defn_repeat2 = 53,
  aux_sym_defn_repeat3 = 54,
  aux_sym_defn_rule_repeat1 = 55,
  aux_sym_rule_line_repeat1 = 56,
  aux_sym_grammar_rule_repeat1 = 57,
  aux_sym__id_desc_list1_repeat1 = 58,
  aux_sym_hom_body_repeat1 = 59,
  anon_alias_sym_element = 60,
  anon_alias_sym_hom_string = 61,
  anon_alias_sym_id = 62,
  anon_alias_sym_q_id = 63,
  anon_alias_sym_symbol = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grammar] = "grammar",
  [anon_sym_defns] = "defns",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_defn] = "defn",
  [anon_sym_by] = "by",
  [anon_sym_LF] = "\n",
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [aux_sym_dash_line_token1] = "dash_line_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_metavar] = "metavar",
  [anon_sym_indexvar] = "indexvar",
  [anon_sym_COMMA] = ",",
  [anon_sym_IN] = "IN",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_tex] = "tex",
  [sym_comment] = "comment",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT_DOT_DOT] = "....",
  [anon_sym_SQUOTE] = "'",
  [sym_id] = "id",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym_defnclass] = "defnclass",
  [sym_defn] = "defn",
  [sym_defn_rule] = "defn_rule",
  [sym_rule_separator] = "rule_separator",
  [sym_dash_line] = "dash_line",
  [sym_rule_line] = "rule_line",
  [sym_grammar_rule] = "grammar_rule",
  [sym_production] = "production",
  [sym_element] = "element",
  [sym_metavardefn] = "metavardefn",
  [sym__id_desc_list1] = "_id_desc_list1",
  [sym_id_desc] = "id_desc",
  [sym_comprehension_bound] = "comprehension_bound",
  [sym_homomorphism] = "homomorphism",
  [sym_hom_name] = "hom_name",
  [sym_hom_body] = "hom_body",
  [sym_dots] = "dots",
  [sym_namespace_prefix] = "namespace_prefix",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__item_repeat1] = "_item_repeat1",
  [aux_sym_defnclass_repeat1] = "defnclass_repeat1",
  [aux_sym_defnclass_repeat2] = "defnclass_repeat2",
  [aux_sym_defn_repeat1] = "defn_repeat1",
  [aux_sym_defn_repeat2] = "defn_repeat2",
  [aux_sym_defn_repeat3] = "defn_repeat3",
  [aux_sym_defn_rule_repeat1] = "defn_rule_repeat1",
  [aux_sym_rule_line_repeat1] = "rule_line_repeat1",
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym__id_desc_list1_repeat1] = "_id_desc_list1_repeat1",
  [aux_sym_hom_body_repeat1] = "hom_body_repeat1",
  [anon_alias_sym_element] = "element",
  [anon_alias_sym_hom_string] = "hom_string",
  [anon_alias_sym_id] = "id",
  [anon_alias_sym_q_id] = "q_id",
  [anon_alias_sym_symbol] = "symbol",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_grammar] = anon_sym_grammar,
  [anon_sym_defns] = anon_sym_defns,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_defn] = anon_sym_defn,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [aux_sym_dash_line_token1] = aux_sym_dash_line_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_metavar] = anon_sym_metavar,
  [anon_sym_indexvar] = anon_sym_indexvar,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_tex] = anon_sym_tex,
  [sym_comment] = sym_comment,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_id] = sym_id,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym_defnclass] = sym_defnclass,
  [sym_defn] = sym_defn,
  [sym_defn_rule] = sym_defn_rule,
  [sym_rule_separator] = sym_rule_separator,
  [sym_dash_line] = sym_dash_line,
  [sym_rule_line] = sym_rule_line,
  [sym_grammar_rule] = sym_grammar_rule,
  [sym_production] = sym_production,
  [sym_element] = sym_element,
  [sym_metavardefn] = sym_metavardefn,
  [sym__id_desc_list1] = sym__id_desc_list1,
  [sym_id_desc] = sym_id_desc,
  [sym_comprehension_bound] = sym_comprehension_bound,
  [sym_homomorphism] = sym_homomorphism,
  [sym_hom_name] = sym_hom_name,
  [sym_hom_body] = sym_hom_body,
  [sym_dots] = sym_dots,
  [sym_namespace_prefix] = sym_namespace_prefix,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__item_repeat1] = aux_sym__item_repeat1,
  [aux_sym_defnclass_repeat1] = aux_sym_defnclass_repeat1,
  [aux_sym_defnclass_repeat2] = aux_sym_defnclass_repeat2,
  [aux_sym_defn_repeat1] = aux_sym_defn_repeat1,
  [aux_sym_defn_repeat2] = aux_sym_defn_repeat2,
  [aux_sym_defn_repeat3] = aux_sym_defn_repeat3,
  [aux_sym_defn_rule_repeat1] = aux_sym_defn_rule_repeat1,
  [aux_sym_rule_line_repeat1] = aux_sym_rule_line_repeat1,
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym__id_desc_list1_repeat1] = aux_sym__id_desc_list1_repeat1,
  [aux_sym_hom_body_repeat1] = aux_sym_hom_body_repeat1,
  [anon_alias_sym_element] = anon_alias_sym_element,
  [anon_alias_sym_hom_string] = anon_alias_sym_hom_string,
  [anon_alias_sym_id] = anon_alias_sym_id,
  [anon_alias_sym_q_id] = anon_alias_sym_q_id,
  [anon_alias_sym_symbol] = anon_alias_sym_symbol,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_grammar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dash_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metavar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tex] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_defnclass] = {
    .visible = true,
    .named = true,
  },
  [sym_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_defn_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_dash_line] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_line] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_production] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_metavardefn] = {
    .visible = true,
    .named = true,
  },
  [sym__id_desc_list1] = {
    .visible = false,
    .named = true,
  },
  [sym_id_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_comprehension_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_homomorphism] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_name] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_body] = {
    .visible = true,
    .named = true,
  },
  [sym_dots] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_prefix] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defnclass_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defnclass_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defn_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__id_desc_list1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hom_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_element] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_hom_string] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_q_id] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_symbol] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_class_name = 2,
  field_close = 3,
  field_conclusion = 4,
  field_definition = 5,
  field_homomorphism = 6,
  field_line = 7,
  field_name = 8,
  field_namespace_prefix = 9,
  field_open = 10,
  field_premise = 11,
  field_rule_name = 12,
  field_separator = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_class_name] = "class_name",
  [field_close] = "close",
  [field_conclusion] = "conclusion",
  [field_definition] = "definition",
  [field_homomorphism] = "homomorphism",
  [field_line] = "line",
  [field_name] = "name",
  [field_namespace_prefix] = "namespace_prefix",
  [field_open] = "open",
  [field_premise] = "premise",
  [field_rule_name] = "rule_name",
  [field_separator] = "separator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 4},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 4},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_class_name, 0},
    {field_namespace_prefix, 2},
  [2] =
    {field_body, 2},
    {field_close, 3},
    {field_name, 1},
    {field_open, 0},
  [6] =
    {field_class_name, 0},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [9] =
    {field_class_name, 0},
    {field_definition, 4},
    {field_namespace_prefix, 2},
  [12] =
    {field_class_name, 0},
    {field_definition, 5},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [16] =
    {field_conclusion, 1},
    {field_separator, 0},
  [18] =
    {field_conclusion, 2},
    {field_premise, 0},
    {field_separator, 1},
  [21] =
    {field_line, 0},
    {field_rule_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_id,
  },
  [2] = {
    [0] = anon_alias_sym_hom_string,
  },
  [5] = {
    [1] = anon_alias_sym_q_id,
  },
  [8] = {
    [0] = anon_alias_sym_symbol,
  },
  [10] = {
    [0] = anon_alias_sym_element,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_element, 2,
    sym_element,
    anon_alias_sym_element,
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
  [15] = 14,
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
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 33,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 37,
  [48] = 48,
  [49] = 37,
  [50] = 35,
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
  [65] = 63,
  [66] = 62,
  [67] = 17,
  [68] = 64,
  [69] = 60,
  [70] = 62,
  [71] = 63,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 61,
  [76] = 60,
  [77] = 77,
  [78] = 73,
  [79] = 73,
  [80] = 61,
  [81] = 64,
  [82] = 72,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 84,
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
  [109] = 103,
  [110] = 104,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 99,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 98,
  [119] = 119,
  [120] = 120,
  [121] = 104,
  [122] = 112,
  [123] = 103,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 117,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 130,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 138,
  [139] = 138,
  [140] = 140,
  [141] = 138,
  [142] = 142,
  [143] = 140,
  [144] = 136,
  [145] = 140,
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
  [160] = 73,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 151,
  [169] = 163,
  [170] = 165,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 163,
  [175] = 165,
  [176] = 171,
  [177] = 172,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 172,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 171,
  [188] = 188,
  [189] = 189,
  [190] = 162,
  [191] = 184,
  [192] = 192,
  [193] = 193,
  [194] = 162,
  [195] = 184,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '%', 82,
        '\'', 89,
        ',', 76,
        '-', 13,
        '.', 14,
        '/', 15,
        ':', 17,
        '<', 16,
        'I', 20,
        'b', 45,
        'd', 27,
        'g', 36,
        'i', 34,
        'm', 28,
        't', 29,
        '{', 46,
        '|', 64,
        '}', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '<') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(89);
      if (lookahead == ':') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == '{') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '<') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '<') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '<') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '<') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '}') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(79);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '%', 82,
        ',', 76,
        ':', 18,
        'd', 96,
        'g', 104,
        'i', 102,
        'm', 97,
        '{', 46,
        '|', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '%', 81,
        '-', 117,
        '.', 118,
        '<', 119,
        'd', 128,
        'g', 136,
        'i', 135,
        'm', 129,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_grammar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_grammar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '%') ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_tex);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 48},
  [85] = {.lex_state = 48},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 48},
  [99] = {.lex_state = 48},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 48},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 48},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 48},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 48},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 48},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 62},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_defns] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_defn] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_metavar] = ACTIONS(1),
    [anon_sym_indexvar] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_tex] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(192),
    [sym__item] = STATE(58),
    [sym_metavardefn] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_grammar] = ACTIONS(7),
    [anon_sym_defns] = ACTIONS(9),
    [anon_sym_metavar] = ACTIONS(11),
    [anon_sym_indexvar] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(20), 1,
      anon_sym_LT_SLASH,
    ACTIONS(26), 1,
      sym_string,
    STATE(42), 1,
      sym_rule_separator,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(15), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [51] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(42), 1,
      sym_rule_separator,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(31), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [102] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(42), 1,
      sym_rule_separator,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(5), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(43), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [153] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(42), 1,
      sym_rule_separator,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(47), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [204] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(42), 1,
      sym_rule_separator,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(47), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [255] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(42), 1,
      sym_rule_separator,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(51), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [306] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(42), 1,
      sym_rule_separator,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(55), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [357] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(42), 1,
      sym_rule_separator,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(10), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(55), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [408] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(42), 1,
      sym_rule_separator,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(51), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [459] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(146), 1,
      sym_dash_line,
    STATE(21), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [496] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(13), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(45), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(59), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [524] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(46), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(67), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(71), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    ACTIONS(76), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(69), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(81), 9,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(85), 9,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(89), 9,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [660] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_defn,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(54), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [685] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_defn,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(59), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [710] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(101), 1,
      anon_sym_LT_SLASH,
    ACTIONS(107), 1,
      sym_string,
    STATE(43), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    STATE(21), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(104), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(112), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [763] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(189), 1,
      sym__id_desc_list1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(116), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [789] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(189), 1,
      sym__id_desc_list1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(26), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(123), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [815] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(22), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(129), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [837] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(189), 1,
      sym__id_desc_list1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(133), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_defn,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(112), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [921] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(141), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(145), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(145), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [987] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COLON_COLON,
    ACTIONS(149), 1,
      anon_sym_LT_SLASH,
    ACTIONS(155), 1,
      sym_string,
    STATE(65), 1,
      sym_dots,
    STATE(33), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(152), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1012] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COLON_COLON,
    ACTIONS(160), 1,
      anon_sym_LT_SLASH,
    ACTIONS(164), 1,
      sym_string,
    STATE(65), 1,
      sym_dots,
    STATE(38), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(162), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LT_SLASH,
    ACTIONS(168), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      sym_string,
    STATE(71), 1,
      sym_dots,
    STATE(47), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(170), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1062] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(174), 1,
      anon_sym_LT_SLASH,
    ACTIONS(180), 1,
      sym_string,
    STATE(71), 1,
      sym_dots,
    STATE(36), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(177), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1087] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LT_SLASH,
    ACTIONS(172), 1,
      sym_string,
    ACTIONS(183), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_dots,
    STATE(36), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(170), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1112] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LT_SLASH,
    ACTIONS(164), 1,
      sym_string,
    ACTIONS(185), 1,
      anon_sym_COLON_COLON,
    STATE(65), 1,
      sym_dots,
    STATE(33), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(162), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(39), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(189), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [1158] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LT_SLASH,
    ACTIONS(172), 1,
      sym_string,
    ACTIONS(194), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_dots,
    STATE(37), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(170), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1183] = 8,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(198), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1210] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(16), 1,
      sym_rule_line,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1237] = 8,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(52), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1264] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LT_SLASH,
    ACTIONS(164), 1,
      sym_string,
    ACTIONS(202), 1,
      anon_sym_COLON_COLON,
    STATE(65), 1,
      sym_dots,
    STATE(48), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(162), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(39), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(67), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [1310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(39), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(206), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [1331] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LT_SLASH,
    ACTIONS(172), 1,
      sym_string,
    ACTIONS(208), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_dots,
    STATE(36), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(170), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1356] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LT_SLASH,
    ACTIONS(164), 1,
      sym_string,
    ACTIONS(210), 1,
      anon_sym_COLON_COLON,
    STATE(65), 1,
      sym_dots,
    STATE(33), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(162), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LT_SLASH,
    ACTIONS(172), 1,
      sym_string,
    ACTIONS(212), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_dots,
    STATE(36), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(170), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1406] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LT_SLASH,
    ACTIONS(172), 1,
      sym_string,
    ACTIONS(214), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_dots,
    STATE(49), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(170), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1431] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_string,
    STATE(18), 1,
      sym_rule_line,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1458] = 8,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(218), 1,
      anon_sym_LT_SLASH,
    ACTIONS(224), 1,
      sym_string,
    STATE(52), 1,
      aux_sym_rule_line_repeat1,
    STATE(63), 1,
      sym_dots,
    STATE(77), 1,
      sym_element,
    ACTIONS(221), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1485] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 1,
      anon_sym_grammar,
    ACTIONS(232), 1,
      anon_sym_defns,
    ACTIONS(235), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(53), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_defn,
    STATE(55), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_defn,
    STATE(55), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(240), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(56), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(247), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1579] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_defns,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(53), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_defn,
    STATE(55), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(251), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1619] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(253), 6,
      anon_sym_LF,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1631] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(255), 6,
      anon_sym_LF,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1655] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(259), 6,
      anon_sym_LF,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(85), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1717] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_LF,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1741] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(257), 6,
      anon_sym_LF,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1765] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(263), 6,
      anon_sym_LF,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1825] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(267), 6,
      anon_sym_LF,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1849] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(265), 6,
      anon_sym_LF,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(269), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(88), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(271), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(269), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(84), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(271), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1979] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_SLASH_GT,
    ACTIONS(279), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(185), 1,
      sym_dots,
    ACTIONS(277), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [1996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(281), 1,
      anon_sym_by,
    STATE(91), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(283), 1,
      anon_sym_by,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(285), 1,
      anon_sym_by,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(287), 1,
      anon_sym_by,
    STATE(92), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(287), 1,
      anon_sym_by,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(283), 1,
      anon_sym_by,
    STATE(94), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COLON_COLON,
    ACTIONS(291), 1,
      sym_id,
    STATE(111), 1,
      aux_sym_defn_repeat2,
  [2093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COLON_COLON,
    ACTIONS(295), 1,
      sym_id,
    STATE(119), 1,
      aux_sym_defn_repeat2,
  [2106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym__id_desc_list1_repeat1,
  [2119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(98), 1,
      aux_sym__id_desc_list1_repeat1,
  [2132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(305), 1,
      sym_string,
    STATE(100), 1,
      aux_sym_hom_body_repeat1,
  [2145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      sym_id,
    STATE(95), 1,
      sym_namespace_prefix,
  [2158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_id,
    ACTIONS(316), 1,
      sym_string,
    STATE(175), 1,
      sym_comprehension_bound,
  [2180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_id,
    ACTIONS(318), 1,
      sym_string,
    STATE(174), 1,
      sym_comprehension_bound,
  [2193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COLON_COLON,
    ACTIONS(322), 1,
      sym_id,
    STATE(115), 1,
      aux_sym_defn_repeat2,
  [2206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COLON_COLON,
    ACTIONS(326), 1,
      sym_id,
    STATE(126), 1,
      aux_sym_defn_repeat2,
  [2219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      sym_id,
    STATE(153), 1,
      sym_namespace_prefix,
  [2232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      sym_id,
    STATE(93), 1,
      sym_namespace_prefix,
  [2245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_id,
    ACTIONS(328), 1,
      sym_string,
    STATE(170), 1,
      sym_comprehension_bound,
  [2258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_id,
    ACTIONS(330), 1,
      sym_string,
    STATE(169), 1,
      sym_comprehension_bound,
  [2271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COLON_COLON,
    ACTIONS(334), 1,
      sym_id,
    STATE(128), 1,
      aux_sym_defn_repeat2,
  [2284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_string,
    STATE(120), 1,
      aux_sym_hom_body_repeat1,
    STATE(168), 1,
      sym_hom_body,
  [2297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_id,
    STATE(99), 1,
      sym_id_desc,
    STATE(167), 1,
      sym__id_desc_list1,
  [2310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COLON_COLON,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym__id_desc_list1_repeat1,
  [2323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COLON_COLON,
    ACTIONS(334), 1,
      sym_id,
    STATE(128), 1,
      aux_sym_defn_repeat2,
  [2336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      sym_id,
    STATE(156), 1,
      sym_namespace_prefix,
  [2349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym__id_desc_list1_repeat1,
  [2362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COLON_COLON,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym__id_desc_list1_repeat1,
  [2375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_id,
    ACTIONS(347), 1,
      anon_sym_COLON_COLON,
    STATE(128), 1,
      aux_sym_defn_repeat2,
  [2388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_string,
    ACTIONS(349), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(100), 1,
      aux_sym_hom_body_repeat1,
  [2401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_id,
    ACTIONS(351), 1,
      sym_string,
    STATE(163), 1,
      sym_comprehension_bound,
  [2414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_string,
    STATE(120), 1,
      aux_sym_hom_body_repeat1,
    STATE(151), 1,
      sym_hom_body,
  [2427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_id,
    ACTIONS(353), 1,
      sym_string,
    STATE(165), 1,
      sym_comprehension_bound,
  [2440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      sym_id,
    STATE(90), 1,
      sym_namespace_prefix,
  [2453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COLON_COLON,
    ACTIONS(334), 1,
      sym_id,
    STATE(128), 1,
      aux_sym_defn_repeat2,
  [2475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      sym_id,
    STATE(128), 1,
      aux_sym_defn_repeat2,
  [2497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COLON_COLON,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym__id_desc_list1_repeat1,
  [2510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [2518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH_GT,
    ACTIONS(369), 1,
      anon_sym_IN,
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(373), 1,
      sym_string,
  [2538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    ACTIONS(377), 1,
      sym_id,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_tex,
    STATE(112), 1,
      sym_hom_name,
  [2566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_id,
    STATE(130), 1,
      sym_id_desc,
  [2576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_tex,
    STATE(122), 1,
      sym_hom_name,
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    STATE(171), 1,
      sym_comprehension_bound,
  [2596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    STATE(187), 1,
      sym_comprehension_bound,
  [2606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    STATE(172), 1,
      sym_comprehension_bound,
  [2616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    STATE(176), 1,
      sym_comprehension_bound,
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_string,
    STATE(87), 1,
      sym_defnclass,
  [2636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    STATE(183), 1,
      sym_comprehension_bound,
  [2646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_id,
    STATE(134), 1,
      sym_id_desc,
  [2656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    STATE(177), 1,
      sym_comprehension_bound,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_COLON_COLON,
  [2673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
  [2680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_string,
  [2687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_string,
  [2694] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LF,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RBRACE_RBRACE,
  [2708] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LF,
  [2715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COLON_COLON_EQ,
  [2722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_id,
  [2729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_string,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COLON_COLON_EQ,
  [2743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_string,
  [2750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_COLON_COLON,
  [2757] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LF,
  [2764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_id,
  [2771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_string,
  [2778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_SLASH_SLASH,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_SLASH_GT,
  [2792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON_COLON,
  [2799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_SLASH_GT,
  [2806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON_COLON_EQ,
  [2820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RBRACE_RBRACE,
  [2827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_SLASH_GT,
  [2834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SLASH_GT,
  [2841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SLASH_GT,
  [2848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SLASH_GT,
  [2855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_COLON_COLON,
  [2862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SLASH_GT,
  [2869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SLASH_GT,
  [2876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SLASH_GT,
  [2883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SLASH_GT,
  [2890] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(451), 1,
      aux_sym_dash_line_token1,
  [2897] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LF,
  [2904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_id,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SLASH_GT,
  [2918] = 2,
    ACTIONS(198), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LF,
  [2925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SLASH_GT,
  [2932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SLASH_SLASH,
  [2939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_id,
  [2946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COLON_COLON,
  [2953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SLASH_GT,
  [2960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_id,
  [2967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_COLON_COLON,
  [2974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_SLASH_SLASH,
  [2981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SLASH_SLASH,
  [2988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
  [2995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_COLON_COLON,
  [3002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_SLASH_SLASH,
  [3009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 408,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 496,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 552,
  [SMALL_STATE(15)] = 576,
  [SMALL_STATE(16)] = 600,
  [SMALL_STATE(17)] = 620,
  [SMALL_STATE(18)] = 640,
  [SMALL_STATE(19)] = 660,
  [SMALL_STATE(20)] = 685,
  [SMALL_STATE(21)] = 710,
  [SMALL_STATE(22)] = 741,
  [SMALL_STATE(23)] = 763,
  [SMALL_STATE(24)] = 789,
  [SMALL_STATE(25)] = 815,
  [SMALL_STATE(26)] = 837,
  [SMALL_STATE(27)] = 863,
  [SMALL_STATE(28)] = 881,
  [SMALL_STATE(29)] = 899,
  [SMALL_STATE(30)] = 921,
  [SMALL_STATE(31)] = 943,
  [SMALL_STATE(32)] = 965,
  [SMALL_STATE(33)] = 987,
  [SMALL_STATE(34)] = 1012,
  [SMALL_STATE(35)] = 1037,
  [SMALL_STATE(36)] = 1062,
  [SMALL_STATE(37)] = 1087,
  [SMALL_STATE(38)] = 1112,
  [SMALL_STATE(39)] = 1137,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1183,
  [SMALL_STATE(42)] = 1210,
  [SMALL_STATE(43)] = 1237,
  [SMALL_STATE(44)] = 1264,
  [SMALL_STATE(45)] = 1289,
  [SMALL_STATE(46)] = 1310,
  [SMALL_STATE(47)] = 1331,
  [SMALL_STATE(48)] = 1356,
  [SMALL_STATE(49)] = 1381,
  [SMALL_STATE(50)] = 1406,
  [SMALL_STATE(51)] = 1431,
  [SMALL_STATE(52)] = 1458,
  [SMALL_STATE(53)] = 1485,
  [SMALL_STATE(54)] = 1507,
  [SMALL_STATE(55)] = 1525,
  [SMALL_STATE(56)] = 1543,
  [SMALL_STATE(57)] = 1561,
  [SMALL_STATE(58)] = 1579,
  [SMALL_STATE(59)] = 1601,
  [SMALL_STATE(60)] = 1619,
  [SMALL_STATE(61)] = 1631,
  [SMALL_STATE(62)] = 1643,
  [SMALL_STATE(63)] = 1655,
  [SMALL_STATE(64)] = 1667,
  [SMALL_STATE(65)] = 1679,
  [SMALL_STATE(66)] = 1691,
  [SMALL_STATE(67)] = 1703,
  [SMALL_STATE(68)] = 1717,
  [SMALL_STATE(69)] = 1729,
  [SMALL_STATE(70)] = 1741,
  [SMALL_STATE(71)] = 1753,
  [SMALL_STATE(72)] = 1765,
  [SMALL_STATE(73)] = 1777,
  [SMALL_STATE(74)] = 1789,
  [SMALL_STATE(75)] = 1801,
  [SMALL_STATE(76)] = 1813,
  [SMALL_STATE(77)] = 1825,
  [SMALL_STATE(78)] = 1837,
  [SMALL_STATE(79)] = 1849,
  [SMALL_STATE(80)] = 1861,
  [SMALL_STATE(81)] = 1873,
  [SMALL_STATE(82)] = 1885,
  [SMALL_STATE(83)] = 1897,
  [SMALL_STATE(84)] = 1912,
  [SMALL_STATE(85)] = 1927,
  [SMALL_STATE(86)] = 1942,
  [SMALL_STATE(87)] = 1953,
  [SMALL_STATE(88)] = 1964,
  [SMALL_STATE(89)] = 1979,
  [SMALL_STATE(90)] = 1996,
  [SMALL_STATE(91)] = 2010,
  [SMALL_STATE(92)] = 2024,
  [SMALL_STATE(93)] = 2038,
  [SMALL_STATE(94)] = 2052,
  [SMALL_STATE(95)] = 2066,
  [SMALL_STATE(96)] = 2080,
  [SMALL_STATE(97)] = 2093,
  [SMALL_STATE(98)] = 2106,
  [SMALL_STATE(99)] = 2119,
  [SMALL_STATE(100)] = 2132,
  [SMALL_STATE(101)] = 2145,
  [SMALL_STATE(102)] = 2158,
  [SMALL_STATE(103)] = 2167,
  [SMALL_STATE(104)] = 2180,
  [SMALL_STATE(105)] = 2193,
  [SMALL_STATE(106)] = 2206,
  [SMALL_STATE(107)] = 2219,
  [SMALL_STATE(108)] = 2232,
  [SMALL_STATE(109)] = 2245,
  [SMALL_STATE(110)] = 2258,
  [SMALL_STATE(111)] = 2271,
  [SMALL_STATE(112)] = 2284,
  [SMALL_STATE(113)] = 2297,
  [SMALL_STATE(114)] = 2310,
  [SMALL_STATE(115)] = 2323,
  [SMALL_STATE(116)] = 2336,
  [SMALL_STATE(117)] = 2349,
  [SMALL_STATE(118)] = 2362,
  [SMALL_STATE(119)] = 2375,
  [SMALL_STATE(120)] = 2388,
  [SMALL_STATE(121)] = 2401,
  [SMALL_STATE(122)] = 2414,
  [SMALL_STATE(123)] = 2427,
  [SMALL_STATE(124)] = 2440,
  [SMALL_STATE(125)] = 2453,
  [SMALL_STATE(126)] = 2462,
  [SMALL_STATE(127)] = 2475,
  [SMALL_STATE(128)] = 2484,
  [SMALL_STATE(129)] = 2497,
  [SMALL_STATE(130)] = 2510,
  [SMALL_STATE(131)] = 2518,
  [SMALL_STATE(132)] = 2528,
  [SMALL_STATE(133)] = 2538,
  [SMALL_STATE(134)] = 2548,
  [SMALL_STATE(135)] = 2556,
  [SMALL_STATE(136)] = 2566,
  [SMALL_STATE(137)] = 2576,
  [SMALL_STATE(138)] = 2586,
  [SMALL_STATE(139)] = 2596,
  [SMALL_STATE(140)] = 2606,
  [SMALL_STATE(141)] = 2616,
  [SMALL_STATE(142)] = 2626,
  [SMALL_STATE(143)] = 2636,
  [SMALL_STATE(144)] = 2646,
  [SMALL_STATE(145)] = 2656,
  [SMALL_STATE(146)] = 2666,
  [SMALL_STATE(147)] = 2673,
  [SMALL_STATE(148)] = 2680,
  [SMALL_STATE(149)] = 2687,
  [SMALL_STATE(150)] = 2694,
  [SMALL_STATE(151)] = 2701,
  [SMALL_STATE(152)] = 2708,
  [SMALL_STATE(153)] = 2715,
  [SMALL_STATE(154)] = 2722,
  [SMALL_STATE(155)] = 2729,
  [SMALL_STATE(156)] = 2736,
  [SMALL_STATE(157)] = 2743,
  [SMALL_STATE(158)] = 2750,
  [SMALL_STATE(159)] = 2757,
  [SMALL_STATE(160)] = 2764,
  [SMALL_STATE(161)] = 2771,
  [SMALL_STATE(162)] = 2778,
  [SMALL_STATE(163)] = 2785,
  [SMALL_STATE(164)] = 2792,
  [SMALL_STATE(165)] = 2799,
  [SMALL_STATE(166)] = 2806,
  [SMALL_STATE(167)] = 2813,
  [SMALL_STATE(168)] = 2820,
  [SMALL_STATE(169)] = 2827,
  [SMALL_STATE(170)] = 2834,
  [SMALL_STATE(171)] = 2841,
  [SMALL_STATE(172)] = 2848,
  [SMALL_STATE(173)] = 2855,
  [SMALL_STATE(174)] = 2862,
  [SMALL_STATE(175)] = 2869,
  [SMALL_STATE(176)] = 2876,
  [SMALL_STATE(177)] = 2883,
  [SMALL_STATE(178)] = 2890,
  [SMALL_STATE(179)] = 2897,
  [SMALL_STATE(180)] = 2904,
  [SMALL_STATE(181)] = 2911,
  [SMALL_STATE(182)] = 2918,
  [SMALL_STATE(183)] = 2925,
  [SMALL_STATE(184)] = 2932,
  [SMALL_STATE(185)] = 2939,
  [SMALL_STATE(186)] = 2946,
  [SMALL_STATE(187)] = 2953,
  [SMALL_STATE(188)] = 2960,
  [SMALL_STATE(189)] = 2967,
  [SMALL_STATE(190)] = 2974,
  [SMALL_STATE(191)] = 2981,
  [SMALL_STATE(192)] = 2988,
  [SMALL_STATE(193)] = 2995,
  [SMALL_STATE(194)] = 3002,
  [SMALL_STATE(195)] = 3009,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(178),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(35),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(79),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(60),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 11),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 11),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 12),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 9),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 8),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 10),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 13),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 5),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_body, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [479] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ott(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
