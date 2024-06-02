#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 4
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 13

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
  sym_rule_line = 10,
  anon_sym_PIPE = 11,
  anon_sym_LT_SLASH = 12,
  anon_sym_SLASH_SLASH = 13,
  anon_sym_SLASH_GT = 14,
  anon_sym_metavar = 15,
  anon_sym_indexvar = 16,
  anon_sym_COMMA = 17,
  anon_sym_IN = 18,
  anon_sym_LBRACE_LBRACE = 19,
  anon_sym_RBRACE_RBRACE = 20,
  anon_sym_tex = 21,
  sym_comment = 22,
  anon_sym_DOT_DOT = 23,
  anon_sym_DOT_DOT_DOT = 24,
  anon_sym_DOT_DOT_DOT_DOT = 25,
  anon_sym_SQUOTE = 26,
  sym_id = 27,
  sym_string = 28,
  sym_source_file = 29,
  sym__item = 30,
  sym_defnclass = 31,
  sym_defn = 32,
  sym_defn_rule = 33,
  sym_rule_separator = 34,
  sym_dash_line = 35,
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
  aux_sym_grammar_rule_repeat1 = 56,
  aux_sym__id_desc_list1_repeat1 = 57,
  aux_sym_hom_body_repeat1 = 58,
  anon_alias_sym_hom_string = 59,
  anon_alias_sym_id = 60,
  anon_alias_sym_q_id = 61,
  anon_alias_sym_symbol = 62,
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
  [sym_rule_line] = "rule_line",
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
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym__id_desc_list1_repeat1] = "_id_desc_list1_repeat1",
  [aux_sym_hom_body_repeat1] = "hom_body_repeat1",
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
  [sym_rule_line] = sym_rule_line,
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
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym__id_desc_list1_repeat1] = aux_sym__id_desc_list1_repeat1,
  [aux_sym_hom_body_repeat1] = aux_sym_hom_body_repeat1,
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
  [sym_rule_line] = {
    .visible = true,
    .named = true,
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
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 2},
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
  [14] = 11,
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
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 32,
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
  [52] = 50,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 55,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 58,
  [62] = 60,
  [63] = 59,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 67,
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
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 84,
  [96] = 78,
  [97] = 97,
  [98] = 98,
  [99] = 77,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 101,
  [106] = 93,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 110,
  [115] = 112,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 116,
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
  [155] = 50,
  [156] = 125,
  [157] = 138,
  [158] = 127,
  [159] = 148,
  [160] = 150,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 139,
  [170] = 124,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      ADVANCE_MAP(
        '%', 109,
        '\'', 116,
        ',', 103,
        '-', 39,
        '.', 40,
        '/', 41,
        ':', 43,
        '<', 42,
        'I', 46,
        'b', 71,
        'd', 53,
        'g', 62,
        'i', 60,
        'm', 54,
        't', 55,
        '{', 72,
        '|', 91,
        '}', 73,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(7);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '%') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == ':') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '-') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == '{') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '<') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '<') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '}') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(110);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 68:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == '{') ADVANCE(105);
      END_STATE();
    case 73:
      if (lookahead == '}') ADVANCE(106);
      END_STATE();
    case 74:
      if (eof) ADVANCE(76);
      ADVANCE_MAP(
        '%', 109,
        ',', 103,
        ':', 44,
        'd', 123,
        'g', 131,
        'i', 129,
        'm', 124,
        '{', 72,
        '|', 91,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_grammar);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_grammar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '%') ADVANCE(109);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_rule_line);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_tex);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 75},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 75},
  [8] = {.lex_state = 75},
  [9] = {.lex_state = 75},
  [10] = {.lex_state = 75},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 74},
  [14] = {.lex_state = 74},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 74},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 74},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 74},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 74},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 74},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 75},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 75},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 32},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 28},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 30},
  [86] = {.lex_state = 28},
  [87] = {.lex_state = 28},
  [88] = {.lex_state = 28},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 74},
  [94] = {.lex_state = 28},
  [95] = {.lex_state = 36},
  [96] = {.lex_state = 74},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 35},
  [100] = {.lex_state = 28},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 74},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 28},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 28},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 74},
  [121] = {.lex_state = 28},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 36},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 28},
  [132] = {.lex_state = 27},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 28},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 31},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 27},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 28},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 36},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 74},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 74},
  [152] = {.lex_state = 36},
  [153] = {.lex_state = 36},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 31},
  [162] = {.lex_state = 74},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 88},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
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
    [sym_source_file] = STATE(168),
    [sym__item] = STATE(46),
    [sym_metavardefn] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_grammar] = ACTIONS(7),
    [anon_sym_defns] = ACTIONS(9),
    [anon_sym_metavar] = ACTIONS(11),
    [anon_sym_indexvar] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(66), 1,
      aux_sym_defn_rule_repeat1,
    STATE(154), 1,
      sym_dash_line,
    STATE(161), 1,
      sym_rule_separator,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(15), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [33] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(66), 1,
      aux_sym_defn_rule_repeat1,
    STATE(154), 1,
      sym_dash_line,
    STATE(161), 1,
      sym_rule_separator,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(23), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [66] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(32), 1,
      sym_rule_line,
    STATE(66), 1,
      aux_sym_defn_rule_repeat1,
    STATE(154), 1,
      sym_dash_line,
    STATE(161), 1,
      sym_rule_separator,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(27), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [99] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(66), 1,
      aux_sym_defn_rule_repeat1,
    STATE(154), 1,
      sym_dash_line,
    STATE(161), 1,
      sym_rule_separator,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(37), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [132] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(66), 1,
      aux_sym_defn_rule_repeat1,
    STATE(154), 1,
      sym_dash_line,
    STATE(161), 1,
      sym_rule_separator,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(37), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [165] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(66), 1,
      aux_sym_defn_rule_repeat1,
    STATE(154), 1,
      sym_dash_line,
    STATE(161), 1,
      sym_rule_separator,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(41), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [198] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(66), 1,
      aux_sym_defn_rule_repeat1,
    STATE(154), 1,
      sym_dash_line,
    STATE(161), 1,
      sym_rule_separator,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(10), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(23), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [231] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(66), 1,
      aux_sym_defn_rule_repeat1,
    STATE(154), 1,
      sym_dash_line,
    STATE(161), 1,
      sym_rule_separator,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(45), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [264] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(66), 1,
      aux_sym_defn_rule_repeat1,
    STATE(154), 1,
      sym_dash_line,
    STATE(161), 1,
      sym_rule_separator,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(15), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_defn,
    ACTIONS(51), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [321] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(13), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(39), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(56), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [349] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(28), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(64), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(49), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(44), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(49), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(79), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [473] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_id,
    STATE(78), 1,
      sym_id_desc,
    STATE(167), 1,
      sym__id_desc_list1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(83), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(89), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [521] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(22), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(79), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [543] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_id,
    STATE(78), 1,
      sym_id_desc,
    STATE(167), 1,
      sym__id_desc_list1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(21), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(93), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(100), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [591] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_id,
    STATE(78), 1,
      sym_id_desc,
    STATE(167), 1,
      sym__id_desc_list1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(21), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(104), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(100), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(108), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(34), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(116), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LT_SLASH,
    ACTIONS(120), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      sym_string,
    STATE(56), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(122), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [743] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COLON_COLON,
    ACTIONS(128), 1,
      anon_sym_LT_SLASH,
    ACTIONS(134), 1,
      sym_string,
    STATE(54), 1,
      sym_dots,
    STATE(30), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(131), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LT_SLASH,
    ACTIONS(124), 1,
      sym_string,
    ACTIONS(137), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(122), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [793] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LT_SLASH,
    ACTIONS(124), 1,
      sym_string,
    ACTIONS(139), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 1,
      sym_dots,
    STATE(31), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(122), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [818] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COLON_COLON,
    ACTIONS(143), 1,
      anon_sym_LT_SLASH,
    ACTIONS(147), 1,
      sym_string,
    STATE(54), 1,
      sym_dots,
    STATE(30), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(145), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [843] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(34), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(151), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [864] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      anon_sym_LT_SLASH,
    ACTIONS(162), 1,
      sym_string,
    STATE(56), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(159), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [889] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LT_SLASH,
    ACTIONS(147), 1,
      sym_string,
    ACTIONS(165), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_dots,
    STATE(30), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(145), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [914] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LT_SLASH,
    ACTIONS(124), 1,
      sym_string,
    ACTIONS(167), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 1,
      sym_dots,
    STATE(29), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(122), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [939] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LT_SLASH,
    ACTIONS(147), 1,
      sym_string,
    ACTIONS(169), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_dots,
    STATE(33), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(145), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [964] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(34), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(64), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [985] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LT_SLASH,
    ACTIONS(147), 1,
      sym_string,
    ACTIONS(171), 1,
      anon_sym_COLON_COLON,
    STATE(54), 1,
      sym_dots,
    STATE(36), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(145), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(175), 5,
      anon_sym_grammar,
      anon_sym_defn,
      sym_rule_line,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1026] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      anon_sym_grammar,
    ACTIONS(182), 1,
      anon_sym_defns,
    ACTIONS(185), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(42), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_defn,
    STATE(43), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    STATE(43), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(197), 5,
      anon_sym_grammar,
      anon_sym_defn,
      sym_rule_line,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_defns,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(42), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(48), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    STATE(43), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1344] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_SLASH_GT,
    ACTIONS(225), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(165), 1,
      sym_dots,
    ACTIONS(223), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [1361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(227), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1376] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(229), 1,
      sym_rule_line,
    STATE(108), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    STATE(154), 1,
      sym_dash_line,
  [1395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(231), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(65), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(227), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(231), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(68), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(233), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_by,
    STATE(71), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(237), 1,
      anon_sym_by,
    STATE(73), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(237), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(239), 1,
      anon_sym_by,
    STATE(75), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_id,
    ACTIONS(243), 1,
      sym_string,
    STATE(127), 1,
      sym_comprehension_bound,
  [1548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COLON_COLON,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym__id_desc_list1_repeat1,
  [1561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      sym_id,
    STATE(151), 1,
      sym_namespace_prefix,
  [1574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(255), 1,
      sym_id,
    STATE(100), 1,
      aux_sym_defn_repeat2,
  [1587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_id,
    ACTIONS(257), 1,
      anon_sym_COLON_COLON,
    STATE(100), 1,
      aux_sym_defn_repeat2,
  [1600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COLON_COLON,
    ACTIONS(261), 1,
      sym_id,
    STATE(103), 1,
      aux_sym_defn_repeat2,
  [1613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COLON_COLON,
    ACTIONS(265), 1,
      sym_id,
    STATE(81), 1,
      aux_sym_defn_repeat2,
  [1626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_string,
    STATE(104), 1,
      aux_sym_hom_body_repeat1,
    STATE(156), 1,
      sym_hom_body,
  [1639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [1648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      sym_id,
    STATE(76), 1,
      sym_namespace_prefix,
  [1661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COLON_COLON,
    ACTIONS(271), 1,
      sym_id,
    STATE(94), 1,
      aux_sym_defn_repeat2,
  [1674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      sym_id,
    STATE(149), 1,
      sym_namespace_prefix,
  [1687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(275), 1,
      sym_string,
    STATE(89), 1,
      aux_sym_hom_body_repeat1,
  [1700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_id,
    ACTIONS(278), 1,
      sym_string,
    STATE(157), 1,
      sym_comprehension_bound,
  [1713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_id,
    ACTIONS(280), 1,
      sym_string,
    STATE(138), 1,
      sym_comprehension_bound,
  [1726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      sym_id,
    STATE(74), 1,
      sym_namespace_prefix,
  [1739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__id_desc_list1_repeat1,
  [1752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_id,
    ACTIONS(287), 1,
      anon_sym_COLON_COLON,
    STATE(100), 1,
      aux_sym_defn_repeat2,
  [1765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_string,
    STATE(104), 1,
      aux_sym_hom_body_repeat1,
    STATE(125), 1,
      sym_hom_body,
  [1778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym__id_desc_list1_repeat1,
  [1791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      sym_id,
    STATE(72), 1,
      sym_namespace_prefix,
  [1804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [1813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_id,
    ACTIONS(293), 1,
      sym_string,
    STATE(158), 1,
      sym_comprehension_bound,
  [1826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_COLON_COLON,
    ACTIONS(297), 1,
      sym_id,
    STATE(100), 1,
      aux_sym_defn_repeat2,
  [1839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_COLON_COLON,
    STATE(106), 1,
      aux_sym__id_desc_list1_repeat1,
  [1852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_COLON_COLON,
    ACTIONS(304), 1,
      sym_id,
    STATE(80), 1,
      aux_sym_defn_repeat2,
  [1865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_id,
    ACTIONS(302), 1,
      anon_sym_COLON_COLON,
    STATE(100), 1,
      aux_sym_defn_repeat2,
  [1878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_string,
    ACTIONS(306), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(89), 1,
      aux_sym_hom_body_repeat1,
  [1891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(93), 1,
      aux_sym__id_desc_list1_repeat1,
  [1904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COLON_COLON,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym__id_desc_list1_repeat1,
  [1917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [1926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(315), 1,
      sym_rule_line,
    STATE(108), 1,
      aux_sym_defn_rule_repeat1,
  [1939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_id,
    STATE(96), 1,
      sym_id_desc,
    STATE(162), 1,
      sym__id_desc_list1,
  [1952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_id,
    STATE(148), 1,
      sym_comprehension_bound,
  [1962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_id,
    STATE(150), 1,
      sym_comprehension_bound,
  [1972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_tex,
    STATE(84), 1,
      sym_hom_name,
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_id,
    STATE(160), 1,
      sym_comprehension_bound,
  [1992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_id,
    STATE(159), 1,
      sym_comprehension_bound,
  [2002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_tex,
    STATE(95), 1,
      sym_hom_name,
  [2012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_id,
    STATE(118), 1,
      sym_id_desc,
  [2022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
    ACTIONS(328), 1,
      sym_id,
  [2032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(332), 1,
      sym_string,
  [2050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_id,
    STATE(120), 1,
      sym_id_desc,
  [2068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH_GT,
    ACTIONS(336), 1,
      anon_sym_IN,
  [2078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_string,
    STATE(70), 1,
      sym_defnclass,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SLASH_SLASH,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RBRACE_RBRACE,
  [2102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_string,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SLASH_GT,
  [2116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_rule_line,
  [2123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COLON_COLON,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SLASH_GT,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_id,
  [2144] = 2,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(358), 1,
      sym_comment,
  [2151] = 2,
    ACTIONS(358), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LF,
  [2158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_id,
  [2165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_id,
  [2172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_rule_line,
  [2179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COLON_COLON,
  [2186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SLASH_GT,
  [2193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SLASH_SLASH,
  [2200] = 2,
    ACTIONS(358), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LF,
  [2207] = 2,
    ACTIONS(358), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LF,
  [2214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_string,
  [2221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_id,
  [2228] = 2,
    ACTIONS(358), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LF,
  [2235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_string,
  [2242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
  [2249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COLON_COLON,
  [2256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_SLASH_GT,
  [2263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COLON_COLON_EQ,
  [2270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_SLASH_GT,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COLON_COLON_EQ,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_string,
  [2291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_string,
  [2298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COLON_COLON,
  [2305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_id,
  [2312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RBRACE_RBRACE,
  [2319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_SLASH_GT,
  [2326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SLASH_GT,
  [2333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SLASH_GT,
  [2340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_SLASH_GT,
  [2347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_rule_line,
  [2354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_COLON_COLON_EQ,
  [2361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COLON_COLON,
  [2368] = 2,
    ACTIONS(358), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_dash_line_token1,
  [2375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_id,
  [2382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_COLON_COLON,
  [2389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_COLON_COLON,
  [2396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
  [2403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SLASH_SLASH,
  [2410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 321,
  [SMALL_STATE(13)] = 349,
  [SMALL_STATE(14)] = 377,
  [SMALL_STATE(15)] = 401,
  [SMALL_STATE(16)] = 426,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 473,
  [SMALL_STATE(19)] = 499,
  [SMALL_STATE(20)] = 521,
  [SMALL_STATE(21)] = 543,
  [SMALL_STATE(22)] = 569,
  [SMALL_STATE(23)] = 591,
  [SMALL_STATE(24)] = 617,
  [SMALL_STATE(25)] = 639,
  [SMALL_STATE(26)] = 661,
  [SMALL_STATE(27)] = 679,
  [SMALL_STATE(28)] = 697,
  [SMALL_STATE(29)] = 718,
  [SMALL_STATE(30)] = 743,
  [SMALL_STATE(31)] = 768,
  [SMALL_STATE(32)] = 793,
  [SMALL_STATE(33)] = 818,
  [SMALL_STATE(34)] = 843,
  [SMALL_STATE(35)] = 864,
  [SMALL_STATE(36)] = 889,
  [SMALL_STATE(37)] = 914,
  [SMALL_STATE(38)] = 939,
  [SMALL_STATE(39)] = 964,
  [SMALL_STATE(40)] = 985,
  [SMALL_STATE(41)] = 1010,
  [SMALL_STATE(42)] = 1026,
  [SMALL_STATE(43)] = 1048,
  [SMALL_STATE(44)] = 1066,
  [SMALL_STATE(45)] = 1084,
  [SMALL_STATE(46)] = 1100,
  [SMALL_STATE(47)] = 1122,
  [SMALL_STATE(48)] = 1140,
  [SMALL_STATE(49)] = 1158,
  [SMALL_STATE(50)] = 1176,
  [SMALL_STATE(51)] = 1188,
  [SMALL_STATE(52)] = 1200,
  [SMALL_STATE(53)] = 1212,
  [SMALL_STATE(54)] = 1224,
  [SMALL_STATE(55)] = 1236,
  [SMALL_STATE(56)] = 1248,
  [SMALL_STATE(57)] = 1260,
  [SMALL_STATE(58)] = 1272,
  [SMALL_STATE(59)] = 1284,
  [SMALL_STATE(60)] = 1296,
  [SMALL_STATE(61)] = 1308,
  [SMALL_STATE(62)] = 1320,
  [SMALL_STATE(63)] = 1332,
  [SMALL_STATE(64)] = 1344,
  [SMALL_STATE(65)] = 1361,
  [SMALL_STATE(66)] = 1376,
  [SMALL_STATE(67)] = 1395,
  [SMALL_STATE(68)] = 1410,
  [SMALL_STATE(69)] = 1425,
  [SMALL_STATE(70)] = 1440,
  [SMALL_STATE(71)] = 1451,
  [SMALL_STATE(72)] = 1465,
  [SMALL_STATE(73)] = 1479,
  [SMALL_STATE(74)] = 1493,
  [SMALL_STATE(75)] = 1507,
  [SMALL_STATE(76)] = 1521,
  [SMALL_STATE(77)] = 1535,
  [SMALL_STATE(78)] = 1548,
  [SMALL_STATE(79)] = 1561,
  [SMALL_STATE(80)] = 1574,
  [SMALL_STATE(81)] = 1587,
  [SMALL_STATE(82)] = 1600,
  [SMALL_STATE(83)] = 1613,
  [SMALL_STATE(84)] = 1626,
  [SMALL_STATE(85)] = 1639,
  [SMALL_STATE(86)] = 1648,
  [SMALL_STATE(87)] = 1661,
  [SMALL_STATE(88)] = 1674,
  [SMALL_STATE(89)] = 1687,
  [SMALL_STATE(90)] = 1700,
  [SMALL_STATE(91)] = 1713,
  [SMALL_STATE(92)] = 1726,
  [SMALL_STATE(93)] = 1739,
  [SMALL_STATE(94)] = 1752,
  [SMALL_STATE(95)] = 1765,
  [SMALL_STATE(96)] = 1778,
  [SMALL_STATE(97)] = 1791,
  [SMALL_STATE(98)] = 1804,
  [SMALL_STATE(99)] = 1813,
  [SMALL_STATE(100)] = 1826,
  [SMALL_STATE(101)] = 1839,
  [SMALL_STATE(102)] = 1852,
  [SMALL_STATE(103)] = 1865,
  [SMALL_STATE(104)] = 1878,
  [SMALL_STATE(105)] = 1891,
  [SMALL_STATE(106)] = 1904,
  [SMALL_STATE(107)] = 1917,
  [SMALL_STATE(108)] = 1926,
  [SMALL_STATE(109)] = 1939,
  [SMALL_STATE(110)] = 1952,
  [SMALL_STATE(111)] = 1962,
  [SMALL_STATE(112)] = 1972,
  [SMALL_STATE(113)] = 1982,
  [SMALL_STATE(114)] = 1992,
  [SMALL_STATE(115)] = 2002,
  [SMALL_STATE(116)] = 2012,
  [SMALL_STATE(117)] = 2022,
  [SMALL_STATE(118)] = 2032,
  [SMALL_STATE(119)] = 2040,
  [SMALL_STATE(120)] = 2050,
  [SMALL_STATE(121)] = 2058,
  [SMALL_STATE(122)] = 2068,
  [SMALL_STATE(123)] = 2078,
  [SMALL_STATE(124)] = 2088,
  [SMALL_STATE(125)] = 2095,
  [SMALL_STATE(126)] = 2102,
  [SMALL_STATE(127)] = 2109,
  [SMALL_STATE(128)] = 2116,
  [SMALL_STATE(129)] = 2123,
  [SMALL_STATE(130)] = 2130,
  [SMALL_STATE(131)] = 2137,
  [SMALL_STATE(132)] = 2144,
  [SMALL_STATE(133)] = 2151,
  [SMALL_STATE(134)] = 2158,
  [SMALL_STATE(135)] = 2165,
  [SMALL_STATE(136)] = 2172,
  [SMALL_STATE(137)] = 2179,
  [SMALL_STATE(138)] = 2186,
  [SMALL_STATE(139)] = 2193,
  [SMALL_STATE(140)] = 2200,
  [SMALL_STATE(141)] = 2207,
  [SMALL_STATE(142)] = 2214,
  [SMALL_STATE(143)] = 2221,
  [SMALL_STATE(144)] = 2228,
  [SMALL_STATE(145)] = 2235,
  [SMALL_STATE(146)] = 2242,
  [SMALL_STATE(147)] = 2249,
  [SMALL_STATE(148)] = 2256,
  [SMALL_STATE(149)] = 2263,
  [SMALL_STATE(150)] = 2270,
  [SMALL_STATE(151)] = 2277,
  [SMALL_STATE(152)] = 2284,
  [SMALL_STATE(153)] = 2291,
  [SMALL_STATE(154)] = 2298,
  [SMALL_STATE(155)] = 2305,
  [SMALL_STATE(156)] = 2312,
  [SMALL_STATE(157)] = 2319,
  [SMALL_STATE(158)] = 2326,
  [SMALL_STATE(159)] = 2333,
  [SMALL_STATE(160)] = 2340,
  [SMALL_STATE(161)] = 2347,
  [SMALL_STATE(162)] = 2354,
  [SMALL_STATE(163)] = 2361,
  [SMALL_STATE(164)] = 2368,
  [SMALL_STATE(165)] = 2375,
  [SMALL_STATE(166)] = 2382,
  [SMALL_STATE(167)] = 2389,
  [SMALL_STATE(168)] = 2396,
  [SMALL_STATE(169)] = 2403,
  [SMALL_STATE(170)] = 2410,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(164),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(66),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 6),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 11),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 11),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(38),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 9),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 10),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 10),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 7),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 8),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(100),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_body, 1, 0, 0),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 12),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [430] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
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
