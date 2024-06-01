#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 166
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 2
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 11

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
  sym_id = 26,
  sym_string = 27,
  sym_source_file = 28,
  sym__item = 29,
  sym_defnclass = 30,
  sym_defn = 31,
  sym_defn_rule = 32,
  sym_rule_separator = 33,
  sym_dash_line = 34,
  sym_grammar_rule = 35,
  sym_production = 36,
  sym_element = 37,
  sym_metavardefn = 38,
  sym__id_desc_list1 = 39,
  sym_id_desc = 40,
  sym_comprehension_bound = 41,
  sym_homomorphism = 42,
  sym_hom_name = 43,
  sym_hom_body = 44,
  sym_dots = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym__item_repeat1 = 47,
  aux_sym_defnclass_repeat1 = 48,
  aux_sym_defnclass_repeat2 = 49,
  aux_sym_defn_repeat1 = 50,
  aux_sym_defn_repeat2 = 51,
  aux_sym_defn_repeat3 = 52,
  aux_sym_defn_rule_repeat1 = 53,
  aux_sym_grammar_rule_repeat1 = 54,
  aux_sym__id_desc_list1_repeat1 = 55,
  aux_sym_hom_body_repeat1 = 56,
  anon_alias_sym_hom_string = 57,
  anon_alias_sym_symbol = 58,
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
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 4},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 4},
  [8] = {.index = 16, .length = 2},
  [9] = {.index = 18, .length = 3},
  [10] = {.index = 21, .length = 2},
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
    [0] = anon_alias_sym_hom_string,
  },
  [6] = {
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
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 38,
  [39] = 36,
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
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 50,
  [57] = 51,
  [58] = 58,
  [59] = 55,
  [60] = 58,
  [61] = 54,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 66,
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
  [87] = 85,
  [88] = 82,
  [89] = 83,
  [90] = 86,
  [91] = 91,
  [92] = 92,
  [93] = 80,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 81,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 102,
  [106] = 106,
  [107] = 104,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 103,
  [112] = 109,
  [113] = 106,
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
  [150] = 55,
  [151] = 127,
  [152] = 134,
  [153] = 153,
  [154] = 135,
  [155] = 155,
  [156] = 156,
  [157] = 153,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 155,
  [164] = 161,
  [165] = 158,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      ADVANCE_MAP(
        '%', 108,
        ',', 102,
        '-', 38,
        '.', 39,
        '/', 40,
        ':', 42,
        '<', 41,
        'I', 45,
        'b', 70,
        'd', 52,
        'g', 61,
        'i', 59,
        'm', 53,
        't', 54,
        '{', 71,
        '|', 90,
        '}', 72,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(7);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '%') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '-') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == ':') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(107);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '<') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(107);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '<') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(107);
      if (lookahead == '}') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(109);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 67:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 68:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == '{') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == '}') ADVANCE(105);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      ADVANCE_MAP(
        '%', 108,
        ',', 102,
        ':', 43,
        'd', 121,
        'g', 129,
        'i', 127,
        'm', 122,
        '{', 71,
        '|', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_grammar);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_grammar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '%') ADVANCE(108);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_rule_line);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_tex);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '}') ADVANCE(105);
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
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 74},
  [4] = {.lex_state = 74},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 73},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 73},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 73},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 73},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 74},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 74},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 73},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 73},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 73},
  [87] = {.lex_state = 73},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 73},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 34},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 34},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 73},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 30},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 35},
  [123] = {.lex_state = 29},
  [124] = {.lex_state = 30},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 35},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 73},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 30},
  [133] = {.lex_state = 73},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 27},
  [140] = {.lex_state = 87},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 73},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 35},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 29},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 35},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(162),
    [sym__item] = STATE(45),
    [sym_metavardefn] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
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
    STATE(69), 1,
      aux_sym_defn_rule_repeat1,
    STATE(117), 1,
      sym_rule_separator,
    STATE(118), 1,
      sym_dash_line,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(6), 2,
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
    STATE(69), 1,
      aux_sym_defn_rule_repeat1,
    STATE(117), 1,
      sym_rule_separator,
    STATE(118), 1,
      sym_dash_line,
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
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(69), 1,
      aux_sym_defn_rule_repeat1,
    STATE(117), 1,
      sym_rule_separator,
    STATE(118), 1,
      sym_dash_line,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(6), 2,
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
    STATE(69), 1,
      aux_sym_defn_rule_repeat1,
    STATE(117), 1,
      sym_rule_separator,
    STATE(118), 1,
      sym_dash_line,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(10), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(27), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [132] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(36), 1,
      sym_rule_line,
    STATE(69), 1,
      aux_sym_defn_rule_repeat1,
    STATE(117), 1,
      sym_rule_separator,
    STATE(118), 1,
      sym_dash_line,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(31), 4,
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
    STATE(69), 1,
      aux_sym_defn_rule_repeat1,
    STATE(117), 1,
      sym_rule_separator,
    STATE(118), 1,
      sym_dash_line,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(2), 2,
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
    STATE(69), 1,
      aux_sym_defn_rule_repeat1,
    STATE(117), 1,
      sym_rule_separator,
    STATE(118), 1,
      sym_dash_line,
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
  [231] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(69), 1,
      aux_sym_defn_rule_repeat1,
    STATE(117), 1,
      sym_rule_separator,
    STATE(118), 1,
      sym_dash_line,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(8), 2,
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
    STATE(69), 1,
      aux_sym_defn_rule_repeat1,
    STATE(117), 1,
      sym_rule_separator,
    STATE(118), 1,
      sym_dash_line,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(45), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [297] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(29), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(49), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(57), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [349] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(40), 2,
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
    ACTIONS(57), 1,
      anon_sym_defn,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(47), 2,
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
    STATE(41), 2,
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
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
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
  [473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(83), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [495] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(87), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [517] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(91), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_defn,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [557] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_id,
    STATE(83), 1,
      sym_id_desc,
    STATE(149), 1,
      sym__id_desc_list1,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(25), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(99), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [583] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(91), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_id,
    STATE(83), 1,
      sym_id_desc,
    STATE(149), 1,
      sym__id_desc_list1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(25), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(105), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(87), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [671] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_id,
    STATE(83), 1,
      sym_id_desc,
    STATE(149), 1,
      sym__id_desc_list1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(22), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(112), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [697] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LT_SLASH,
    ACTIONS(116), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 1,
      sym_string,
    STATE(63), 1,
      sym_dots,
    STATE(39), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(33), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(124), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [743] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COLON_COLON,
    ACTIONS(128), 1,
      anon_sym_LT_SLASH,
    ACTIONS(132), 1,
      sym_string,
    STATE(62), 1,
      sym_dots,
    STATE(34), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(130), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LT_SLASH,
    ACTIONS(132), 1,
      sym_string,
    ACTIONS(134), 1,
      anon_sym_COLON_COLON,
    STATE(62), 1,
      sym_dots,
    STATE(37), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(130), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [793] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LT_SLASH,
    ACTIONS(120), 1,
      sym_string,
    ACTIONS(136), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_dots,
    STATE(36), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(33), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(140), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [839] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LT_SLASH,
    ACTIONS(132), 1,
      sym_string,
    ACTIONS(145), 1,
      anon_sym_COLON_COLON,
    STATE(62), 1,
      sym_dots,
    STATE(37), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(130), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [864] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LT_SLASH,
    ACTIONS(150), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      sym_string,
    STATE(63), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(152), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [889] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LT_SLASH,
    ACTIONS(120), 1,
      sym_string,
    ACTIONS(158), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [914] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COLON_COLON,
    ACTIONS(160), 1,
      anon_sym_LT_SLASH,
    ACTIONS(166), 1,
      sym_string,
    STATE(62), 1,
      sym_dots,
    STATE(37), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(163), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [939] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LT_SLASH,
    ACTIONS(132), 1,
      sym_string,
    ACTIONS(169), 1,
      anon_sym_COLON_COLON,
    STATE(62), 1,
      sym_dots,
    STATE(31), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(130), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [964] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LT_SLASH,
    ACTIONS(120), 1,
      sym_string,
    ACTIONS(171), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [989] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(33), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(49), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [1010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    STATE(46), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(49), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1046] = 6,
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
    STATE(43), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(190), 5,
      anon_sym_grammar,
      anon_sym_defn,
      sym_rule_line,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1084] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_defns,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(43), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_defn,
    STATE(46), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    STATE(46), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(203), 5,
      anon_sym_grammar,
      anon_sym_defn,
      sym_rule_line,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
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
    ACTIONS(211), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
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
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(66), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(70), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SLASH_GT,
    ACTIONS(229), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(120), 1,
      sym_dots,
    ACTIONS(227), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [1417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(231), 1,
      sym_rule_line,
    STATE(77), 1,
      aux_sym_defn_rule_repeat1,
    STATE(118), 1,
      sym_dash_line,
    STATE(124), 1,
      sym_rule_separator,
  [1436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(233), 1,
      anon_sym_by,
    STATE(73), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(233), 1,
      anon_sym_by,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_by,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(237), 1,
      anon_sym_by,
    STATE(72), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_by,
    STATE(76), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(239), 1,
      anon_sym_by,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(243), 1,
      sym_rule_line,
    STATE(77), 1,
      aux_sym_defn_rule_repeat1,
  [1548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_COLON_COLON,
    ACTIONS(248), 1,
      sym_id,
    STATE(78), 1,
      aux_sym_defn_repeat2,
  [1561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_id,
    STATE(89), 1,
      sym_id_desc,
    STATE(146), 1,
      sym__id_desc_list1,
  [1574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_id,
    ACTIONS(255), 1,
      sym_string,
    STATE(153), 1,
      sym_comprehension_bound,
  [1587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_id,
    ACTIONS(257), 1,
      sym_string,
    STATE(152), 1,
      sym_comprehension_bound,
  [1600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_string,
    STATE(91), 1,
      aux_sym_hom_body_repeat1,
    STATE(151), 1,
      sym_hom_body,
  [1613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COLON_COLON,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym__id_desc_list1_repeat1,
  [1626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COLON_COLON,
    ACTIONS(267), 1,
      sym_id,
    STATE(78), 1,
      aux_sym_defn_repeat2,
  [1639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_COLON_COLON,
    STATE(90), 1,
      aux_sym__id_desc_list1_repeat1,
  [1652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym__id_desc_list1_repeat1,
  [1665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym__id_desc_list1_repeat1,
  [1678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_string,
    STATE(91), 1,
      aux_sym_hom_body_repeat1,
    STATE(127), 1,
      sym_hom_body,
  [1691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym__id_desc_list1_repeat1,
  [1704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COLON_COLON,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym__id_desc_list1_repeat1,
  [1717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_string,
    ACTIONS(281), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(94), 1,
      aux_sym_hom_body_repeat1,
  [1730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_id,
    ACTIONS(283), 1,
      anon_sym_COLON_COLON,
    STATE(78), 1,
      aux_sym_defn_repeat2,
  [1743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_id,
    ACTIONS(285), 1,
      sym_string,
    STATE(157), 1,
      sym_comprehension_bound,
  [1756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(289), 1,
      sym_string,
    STATE(94), 1,
      aux_sym_hom_body_repeat1,
  [1769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COLON_COLON,
    ACTIONS(294), 1,
      sym_id,
    STATE(98), 1,
      aux_sym_defn_repeat2,
  [1782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_COLON_COLON,
    ACTIONS(298), 1,
      sym_id,
    STATE(92), 1,
      aux_sym_defn_repeat2,
  [1795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_id,
    ACTIONS(300), 1,
      sym_string,
    STATE(134), 1,
      sym_comprehension_bound,
  [1808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_id,
    ACTIONS(296), 1,
      anon_sym_COLON_COLON,
    STATE(78), 1,
      aux_sym_defn_repeat2,
  [1821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_COLON_COLON,
    ACTIONS(304), 1,
      sym_id,
    STATE(84), 1,
      aux_sym_defn_repeat2,
  [1834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COLON_COLON,
    ACTIONS(308), 1,
      sym_id,
    STATE(101), 1,
      aux_sym_defn_repeat2,
  [1847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_id,
    ACTIONS(302), 1,
      anon_sym_COLON_COLON,
    STATE(78), 1,
      aux_sym_defn_repeat2,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_tex,
    STATE(88), 1,
      sym_hom_name,
  [1870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [1878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_id,
    STATE(135), 1,
      sym_comprehension_bound,
  [1888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_tex,
    STATE(82), 1,
      sym_hom_name,
  [1898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_id,
    STATE(155), 1,
      sym_comprehension_bound,
  [1908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_id,
    STATE(154), 1,
      sym_comprehension_bound,
  [1918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SLASH_GT,
    ACTIONS(316), 1,
      anon_sym_IN,
  [1928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_id,
    STATE(103), 1,
      sym_id_desc,
  [1938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_string,
    STATE(67), 1,
      sym_defnclass,
  [1948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [1956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_id,
    STATE(111), 1,
      sym_id_desc,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_id,
    STATE(163), 1,
      sym_comprehension_bound,
  [1976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(324), 1,
      sym_string,
  [1986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_string,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_string,
  [2000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_rule_line,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COLON_COLON,
  [2014] = 2,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 1,
      sym_comment,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_id,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COLON_COLON,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_string,
  [2042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_id,
  [2049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_rule_line,
  [2056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COLON_COLON,
  [2063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_string,
  [2070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACE_RBRACE,
  [2077] = 2,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LF,
  [2084] = 2,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LF,
  [2091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COLON_COLON_EQ,
  [2098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COLON_COLON,
  [2105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_rule_line,
  [2112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON_COLON_EQ,
  [2119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_SLASH_GT,
  [2126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_SLASH_GT,
  [2133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_id,
  [2140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_id,
  [2147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_string,
  [2154] = 2,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_LF,
  [2161] = 2,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_dash_line_token1,
  [2168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_string,
  [2175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_id,
  [2182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SLASH_GT,
  [2189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_string,
  [2196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COLON_COLON,
  [2203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COLON_COLON_EQ,
  [2210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COLON_COLON,
  [2217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_string,
  [2224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COLON_COLON,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_id,
  [2238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RBRACE_RBRACE,
  [2245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SLASH_GT,
  [2252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SLASH_GT,
  [2259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_SLASH_GT,
  [2266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_SLASH_GT,
  [2273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_string,
  [2280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SLASH_GT,
  [2287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_SLASH_SLASH,
  [2294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_string,
  [2301] = 2,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LF,
  [2308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SLASH_SLASH,
  [2315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
  [2322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_SLASH_GT,
  [2329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
  [2336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
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
  [SMALL_STATE(12)] = 325,
  [SMALL_STATE(13)] = 349,
  [SMALL_STATE(14)] = 377,
  [SMALL_STATE(15)] = 401,
  [SMALL_STATE(16)] = 426,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 473,
  [SMALL_STATE(19)] = 495,
  [SMALL_STATE(20)] = 517,
  [SMALL_STATE(21)] = 539,
  [SMALL_STATE(22)] = 557,
  [SMALL_STATE(23)] = 583,
  [SMALL_STATE(24)] = 605,
  [SMALL_STATE(25)] = 623,
  [SMALL_STATE(26)] = 649,
  [SMALL_STATE(27)] = 671,
  [SMALL_STATE(28)] = 697,
  [SMALL_STATE(29)] = 722,
  [SMALL_STATE(30)] = 743,
  [SMALL_STATE(31)] = 768,
  [SMALL_STATE(32)] = 793,
  [SMALL_STATE(33)] = 818,
  [SMALL_STATE(34)] = 839,
  [SMALL_STATE(35)] = 864,
  [SMALL_STATE(36)] = 889,
  [SMALL_STATE(37)] = 914,
  [SMALL_STATE(38)] = 939,
  [SMALL_STATE(39)] = 964,
  [SMALL_STATE(40)] = 989,
  [SMALL_STATE(41)] = 1010,
  [SMALL_STATE(42)] = 1028,
  [SMALL_STATE(43)] = 1046,
  [SMALL_STATE(44)] = 1068,
  [SMALL_STATE(45)] = 1084,
  [SMALL_STATE(46)] = 1106,
  [SMALL_STATE(47)] = 1124,
  [SMALL_STATE(48)] = 1142,
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
  [SMALL_STATE(65)] = 1359,
  [SMALL_STATE(66)] = 1374,
  [SMALL_STATE(67)] = 1389,
  [SMALL_STATE(68)] = 1400,
  [SMALL_STATE(69)] = 1417,
  [SMALL_STATE(70)] = 1436,
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
  [SMALL_STATE(86)] = 1652,
  [SMALL_STATE(87)] = 1665,
  [SMALL_STATE(88)] = 1678,
  [SMALL_STATE(89)] = 1691,
  [SMALL_STATE(90)] = 1704,
  [SMALL_STATE(91)] = 1717,
  [SMALL_STATE(92)] = 1730,
  [SMALL_STATE(93)] = 1743,
  [SMALL_STATE(94)] = 1756,
  [SMALL_STATE(95)] = 1769,
  [SMALL_STATE(96)] = 1782,
  [SMALL_STATE(97)] = 1795,
  [SMALL_STATE(98)] = 1808,
  [SMALL_STATE(99)] = 1821,
  [SMALL_STATE(100)] = 1834,
  [SMALL_STATE(101)] = 1847,
  [SMALL_STATE(102)] = 1860,
  [SMALL_STATE(103)] = 1870,
  [SMALL_STATE(104)] = 1878,
  [SMALL_STATE(105)] = 1888,
  [SMALL_STATE(106)] = 1898,
  [SMALL_STATE(107)] = 1908,
  [SMALL_STATE(108)] = 1918,
  [SMALL_STATE(109)] = 1928,
  [SMALL_STATE(110)] = 1938,
  [SMALL_STATE(111)] = 1948,
  [SMALL_STATE(112)] = 1956,
  [SMALL_STATE(113)] = 1966,
  [SMALL_STATE(114)] = 1976,
  [SMALL_STATE(115)] = 1986,
  [SMALL_STATE(116)] = 1993,
  [SMALL_STATE(117)] = 2000,
  [SMALL_STATE(118)] = 2007,
  [SMALL_STATE(119)] = 2014,
  [SMALL_STATE(120)] = 2021,
  [SMALL_STATE(121)] = 2028,
  [SMALL_STATE(122)] = 2035,
  [SMALL_STATE(123)] = 2042,
  [SMALL_STATE(124)] = 2049,
  [SMALL_STATE(125)] = 2056,
  [SMALL_STATE(126)] = 2063,
  [SMALL_STATE(127)] = 2070,
  [SMALL_STATE(128)] = 2077,
  [SMALL_STATE(129)] = 2084,
  [SMALL_STATE(130)] = 2091,
  [SMALL_STATE(131)] = 2098,
  [SMALL_STATE(132)] = 2105,
  [SMALL_STATE(133)] = 2112,
  [SMALL_STATE(134)] = 2119,
  [SMALL_STATE(135)] = 2126,
  [SMALL_STATE(136)] = 2133,
  [SMALL_STATE(137)] = 2140,
  [SMALL_STATE(138)] = 2147,
  [SMALL_STATE(139)] = 2154,
  [SMALL_STATE(140)] = 2161,
  [SMALL_STATE(141)] = 2168,
  [SMALL_STATE(142)] = 2175,
  [SMALL_STATE(143)] = 2182,
  [SMALL_STATE(144)] = 2189,
  [SMALL_STATE(145)] = 2196,
  [SMALL_STATE(146)] = 2203,
  [SMALL_STATE(147)] = 2210,
  [SMALL_STATE(148)] = 2217,
  [SMALL_STATE(149)] = 2224,
  [SMALL_STATE(150)] = 2231,
  [SMALL_STATE(151)] = 2238,
  [SMALL_STATE(152)] = 2245,
  [SMALL_STATE(153)] = 2252,
  [SMALL_STATE(154)] = 2259,
  [SMALL_STATE(155)] = 2266,
  [SMALL_STATE(156)] = 2273,
  [SMALL_STATE(157)] = 2280,
  [SMALL_STATE(158)] = 2287,
  [SMALL_STATE(159)] = 2294,
  [SMALL_STATE(160)] = 2301,
  [SMALL_STATE(161)] = 2308,
  [SMALL_STATE(162)] = 2315,
  [SMALL_STATE(163)] = 2322,
  [SMALL_STATE(164)] = 2329,
  [SMALL_STATE(165)] = 2336,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(140),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(69),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 8),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(30),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 9),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 9),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 6),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_body, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 10),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [422] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
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
