#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 5
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_grammar = 1,
  anon_sym_defns = 2,
  anon_sym_COLON_COLON = 3,
  anon_sym_COLON_COLON_EQ = 4,
  anon_sym_defn = 5,
  anon_sym_by = 6,
  anon_sym_LF = 7,
  anon_sym_DASH_DASH_DASH_DASH = 8,
  aux_sym_rule_separator_token1 = 9,
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
  sym_grammar_rule = 34,
  sym_production = 35,
  sym_element = 36,
  sym_metavardefn = 37,
  sym__id_desc_list1 = 38,
  sym_id_desc = 39,
  sym_comprehension_bound = 40,
  sym_homomorphism = 41,
  sym_hom_name = 42,
  sym_hom_body = 43,
  sym_dots = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym__item_repeat1 = 46,
  aux_sym_defnclass_repeat1 = 47,
  aux_sym_defnclass_repeat2 = 48,
  aux_sym_defn_repeat1 = 49,
  aux_sym_defn_repeat2 = 50,
  aux_sym_defn_repeat3 = 51,
  aux_sym_defn_rule_repeat1 = 52,
  aux_sym_grammar_rule_repeat1 = 53,
  aux_sym__id_desc_list1_repeat1 = 54,
  aux_sym_hom_body_repeat1 = 55,
  anon_alias_sym_class_name = 56,
  anon_alias_sym_hom_string = 57,
  anon_alias_sym_namespace_prefix = 58,
  anon_alias_sym_rule_name = 59,
  anon_alias_sym_symbol = 60,
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
  [aux_sym_rule_separator_token1] = "rule_separator_token1",
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
  [anon_alias_sym_class_name] = "class_name",
  [anon_alias_sym_hom_string] = "hom_string",
  [anon_alias_sym_namespace_prefix] = "namespace_prefix",
  [anon_alias_sym_rule_name] = "rule_name",
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
  [aux_sym_rule_separator_token1] = aux_sym_rule_separator_token1,
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
  [anon_alias_sym_class_name] = anon_alias_sym_class_name,
  [anon_alias_sym_hom_string] = anon_alias_sym_hom_string,
  [anon_alias_sym_namespace_prefix] = anon_alias_sym_namespace_prefix,
  [anon_alias_sym_rule_name] = anon_alias_sym_rule_name,
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
  [aux_sym_rule_separator_token1] = {
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
  [anon_alias_sym_class_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_hom_string] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_namespace_prefix] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_rule_name] = {
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
  field_close = 2,
  field_name = 3,
  field_open = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_close] = "close",
  [field_name] = "name",
  [field_open] = "open",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_close, 3},
    {field_name, 1},
    {field_open, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_hom_string,
  },
  [2] = {
    [0] = anon_alias_sym_class_name,
    [2] = anon_alias_sym_namespace_prefix,
  },
  [4] = {
    [0] = anon_alias_sym_symbol,
  },
  [5] = {
    [3] = anon_alias_sym_rule_name,
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
  [14] = 4,
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
  [25] = 22,
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
  [36] = 31,
  [37] = 32,
  [38] = 35,
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
  [56] = 54,
  [57] = 55,
  [58] = 58,
  [59] = 52,
  [60] = 51,
  [61] = 50,
  [62] = 53,
  [63] = 58,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 64,
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
  [88] = 86,
  [89] = 82,
  [90] = 90,
  [91] = 83,
  [92] = 92,
  [93] = 93,
  [94] = 81,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 93,
  [100] = 87,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 102,
  [108] = 104,
  [109] = 109,
  [110] = 110,
  [111] = 105,
  [112] = 106,
  [113] = 110,
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
  [149] = 55,
  [150] = 144,
  [151] = 135,
  [152] = 152,
  [153] = 153,
  [154] = 141,
  [155] = 153,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 152,
  [161] = 161,
  [162] = 162,
  [163] = 133,
  [164] = 162,
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
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '<') ADVANCE(141);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(107);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '<') ADVANCE(141);
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
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
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
      ACCEPT_TOKEN(aux_sym_rule_separator_token1);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_rule_separator_token1);
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
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(94);
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
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 73},
  [11] = {.lex_state = 74},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 74},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 73},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 73},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 74},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 74},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 32},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 35},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 73},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 73},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 73},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 73},
  [103] = {.lex_state = 33},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 29},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 34},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 29},
  [117] = {.lex_state = 27},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 29},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 34},
  [126] = {.lex_state = 34},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 87},
  [131] = {.lex_state = 30},
  [132] = {.lex_state = 34},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 27},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 34},
  [139] = {.lex_state = 27},
  [140] = {.lex_state = 73},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 29},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 73},
  [147] = {.lex_state = 34},
  [148] = {.lex_state = 34},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 34},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 73},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
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
    [sym_source_file] = STATE(137),
    [sym__item] = STATE(42),
    [sym_metavardefn] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_grammar] = ACTIONS(7),
    [anon_sym_defns] = ACTIONS(9),
    [anon_sym_metavar] = ACTIONS(11),
    [anon_sym_indexvar] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(70), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(13), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(15), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [30] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(4), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(30), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(23), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [58] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(4), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(31), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [82] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(70), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(38), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [112] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(70), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(5), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(42), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [142] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(70), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(42), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [172] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(70), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(46), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [202] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(70), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(46), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [232] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(3), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(28), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(50), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [260] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(59), 1,
      sym_rule_line,
    STATE(70), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(54), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [290] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(70), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(64), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [320] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    STATE(70), 1,
      aux_sym_defn_rule_repeat1,
    STATE(128), 1,
      sym_rule_separator,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(64), 4,
      anon_sym_grammar,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_defn,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
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
  [399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(45), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [424] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_id,
    STATE(83), 1,
      sym_id_desc,
    STATE(127), 1,
      sym__id_desc_list1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(17), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(79), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(4), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(86), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(90), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(4), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(90), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(24), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(86), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_defn,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [556] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(98), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(4), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(102), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [618] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_id,
    STATE(83), 1,
      sym_id_desc,
    STATE(127), 1,
      sym__id_desc_list1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(27), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(106), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_id,
    STATE(83), 1,
      sym_id_desc,
    STATE(127), 1,
      sym__id_desc_list1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(17), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(112), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(39), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(23), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [691] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COLON_COLON,
    ACTIONS(116), 1,
      anon_sym_LT_SLASH,
    ACTIONS(120), 1,
      sym_string,
    STATE(51), 1,
      sym_dots,
    STATE(34), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(39), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(124), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [737] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LT_SLASH,
    ACTIONS(128), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(132), 1,
      sym_string,
    STATE(60), 1,
      sym_dots,
    STATE(38), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(130), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [762] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LT_SLASH,
    ACTIONS(132), 1,
      sym_string,
    ACTIONS(134), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_dots,
    STATE(31), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(130), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [787] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LT_SLASH,
    ACTIONS(120), 1,
      sym_string,
    ACTIONS(136), 1,
      anon_sym_COLON_COLON,
    STATE(51), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [812] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LT_SLASH,
    ACTIONS(120), 1,
      sym_string,
    ACTIONS(138), 1,
      anon_sym_COLON_COLON,
    STATE(51), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [837] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_COLON_COLON,
    ACTIONS(142), 1,
      anon_sym_LT_SLASH,
    ACTIONS(148), 1,
      sym_string,
    STATE(51), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(145), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [862] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LT_SLASH,
    ACTIONS(132), 1,
      sym_string,
    ACTIONS(151), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_dots,
    STATE(38), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(130), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [887] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LT_SLASH,
    ACTIONS(132), 1,
      sym_string,
    ACTIONS(153), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_dots,
    STATE(36), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(130), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [912] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_LT_SLASH,
    ACTIONS(161), 1,
      sym_string,
    STATE(60), 1,
      sym_dots,
    STATE(38), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(158), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [937] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(39), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(166), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [958] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LT_SLASH,
    ACTIONS(120), 1,
      sym_string,
    ACTIONS(171), 1,
      anon_sym_COLON_COLON,
    STATE(51), 1,
      sym_dots,
    STATE(33), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [983] = 3,
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
  [999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_defns,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(49), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_defn,
    STATE(43), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    STATE(43), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_defn,
    STATE(43), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(47), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(192), 5,
      anon_sym_grammar,
      anon_sym_defn,
      sym_rule_line,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1127] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      anon_sym_grammar,
    ACTIONS(199), 1,
      anon_sym_defns,
    ACTIONS(202), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(49), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(219), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(67), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(4), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH_GT,
    ACTIONS(227), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(143), 1,
      sym_dots,
    ACTIONS(225), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [1390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(219), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(66), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1405] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(229), 1,
      sym_rule_line,
    STATE(96), 1,
      aux_sym_defn_rule_repeat1,
    STATE(121), 1,
      sym_rule_separator,
  [1421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(231), 1,
      anon_sym_by,
    STATE(73), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(231), 1,
      anon_sym_by,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(233), 1,
      anon_sym_by,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_by,
    STATE(72), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_by,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(237), 1,
      anon_sym_by,
    STATE(75), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COLON_COLON,
    ACTIONS(241), 1,
      sym_id,
    STATE(84), 1,
      aux_sym_defn_repeat2,
  [1518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(245), 1,
      sym_string,
    STATE(78), 1,
      aux_sym_hom_body_repeat1,
  [1531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_id,
    ACTIONS(248), 1,
      anon_sym_COLON_COLON,
    STATE(84), 1,
      aux_sym_defn_repeat2,
  [1544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COLON_COLON,
    ACTIONS(250), 1,
      sym_id,
    STATE(79), 1,
      aux_sym_defn_repeat2,
  [1557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COLON_COLON,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__id_desc_list1_repeat1,
  [1570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_string,
    STATE(95), 1,
      aux_sym_hom_body_repeat1,
    STATE(144), 1,
      sym_hom_body,
  [1583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_COLON_COLON,
    STATE(81), 1,
      aux_sym__id_desc_list1_repeat1,
  [1596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_COLON_COLON,
    ACTIONS(262), 1,
      sym_id,
    STATE(84), 1,
      aux_sym_defn_repeat2,
  [1609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COLON_COLON,
    ACTIONS(267), 1,
      sym_id,
    STATE(101), 1,
      aux_sym_defn_repeat2,
  [1622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_id,
    ACTIONS(271), 1,
      sym_string,
    STATE(135), 1,
      sym_comprehension_bound,
  [1635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_id,
    ACTIONS(273), 1,
      sym_string,
    STATE(152), 1,
      sym_comprehension_bound,
  [1648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_id,
    ACTIONS(275), 1,
      sym_string,
    STATE(151), 1,
      sym_comprehension_bound,
  [1661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_string,
    STATE(95), 1,
      aux_sym_hom_body_repeat1,
    STATE(150), 1,
      sym_hom_body,
  [1674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_id,
    ACTIONS(265), 1,
      anon_sym_COLON_COLON,
    STATE(84), 1,
      aux_sym_defn_repeat2,
  [1687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__id_desc_list1_repeat1,
  [1700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COLON_COLON,
    ACTIONS(281), 1,
      sym_id,
    STATE(77), 1,
      aux_sym_defn_repeat2,
  [1713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COLON_COLON,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__id_desc_list1_repeat1,
  [1726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym__id_desc_list1_repeat1,
  [1739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_string,
    ACTIONS(288), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(78), 1,
      aux_sym_hom_body_repeat1,
  [1752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(292), 1,
      sym_rule_line,
    STATE(96), 1,
      aux_sym_defn_rule_repeat1,
  [1765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_COLON_COLON,
    ACTIONS(297), 1,
      sym_id,
    STATE(90), 1,
      aux_sym_defn_repeat2,
  [1778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_id,
    STATE(91), 1,
      sym_id_desc,
    STATE(140), 1,
      sym__id_desc_list1,
  [1791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym__id_desc_list1_repeat1,
  [1804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_id,
    ACTIONS(304), 1,
      sym_string,
    STATE(160), 1,
      sym_comprehension_bound,
  [1817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_id,
    ACTIONS(306), 1,
      anon_sym_COLON_COLON,
    STATE(84), 1,
      aux_sym_defn_repeat2,
  [1830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(310), 1,
      sym_string,
  [1848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_id,
    STATE(102), 1,
      sym_id_desc,
  [1858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_id,
    STATE(141), 1,
      sym_comprehension_bound,
  [1868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_tex,
    STATE(82), 1,
      sym_hom_name,
  [1878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_id,
    STATE(107), 1,
      sym_id_desc,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SLASH_GT,
    ACTIONS(320), 1,
      anon_sym_IN,
  [1906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_id,
    STATE(153), 1,
      sym_comprehension_bound,
  [1916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_id,
    STATE(154), 1,
      sym_comprehension_bound,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_tex,
    STATE(89), 1,
      sym_hom_name,
  [1936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_id,
    STATE(155), 1,
      sym_comprehension_bound,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_string,
    STATE(65), 1,
      sym_defnclass,
  [1956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_COLON_COLON,
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_id,
  [1970] = 2,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 1,
      sym_comment,
  [1977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COLON_COLON,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_string,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_id,
  [1998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_rule_line,
  [2005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COLON_COLON,
  [2012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_id,
  [2019] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LF,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_string,
  [2033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_string,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COLON_COLON,
  [2047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_rule_line,
  [2054] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LF,
  [2061] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_rule_separator_token1,
  [2068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_rule_line,
  [2075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_string,
  [2082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SLASH_SLASH,
  [2089] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LF,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_SLASH_GT,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_SLASH_GT,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [2117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_string,
  [2124] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_LF,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COLON_COLON_EQ,
  [2138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_SLASH_GT,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_string,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_id,
  [2159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACE_RBRACE,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COLON_COLON,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COLON_COLON_EQ,
  [2180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_string,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_string,
  [2194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_id,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RBRACE_RBRACE,
  [2208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SLASH_GT,
  [2215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_SLASH_GT,
  [2222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_SLASH_GT,
  [2229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SLASH_GT,
  [2236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_SLASH_GT,
  [2243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_id,
  [2250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_COLON_COLON,
  [2257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_string,
  [2264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_string,
  [2271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_SLASH_GT,
  [2278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_COLON_COLON_EQ,
  [2285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SLASH_SLASH,
  [2292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SLASH_SLASH,
  [2299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 142,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 260,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 320,
  [SMALL_STATE(14)] = 350,
  [SMALL_STATE(15)] = 374,
  [SMALL_STATE(16)] = 399,
  [SMALL_STATE(17)] = 424,
  [SMALL_STATE(18)] = 450,
  [SMALL_STATE(19)] = 472,
  [SMALL_STATE(20)] = 494,
  [SMALL_STATE(21)] = 516,
  [SMALL_STATE(22)] = 538,
  [SMALL_STATE(23)] = 556,
  [SMALL_STATE(24)] = 578,
  [SMALL_STATE(25)] = 600,
  [SMALL_STATE(26)] = 618,
  [SMALL_STATE(27)] = 644,
  [SMALL_STATE(28)] = 670,
  [SMALL_STATE(29)] = 691,
  [SMALL_STATE(30)] = 716,
  [SMALL_STATE(31)] = 737,
  [SMALL_STATE(32)] = 762,
  [SMALL_STATE(33)] = 787,
  [SMALL_STATE(34)] = 812,
  [SMALL_STATE(35)] = 837,
  [SMALL_STATE(36)] = 862,
  [SMALL_STATE(37)] = 887,
  [SMALL_STATE(38)] = 912,
  [SMALL_STATE(39)] = 937,
  [SMALL_STATE(40)] = 958,
  [SMALL_STATE(41)] = 983,
  [SMALL_STATE(42)] = 999,
  [SMALL_STATE(43)] = 1021,
  [SMALL_STATE(44)] = 1039,
  [SMALL_STATE(45)] = 1057,
  [SMALL_STATE(46)] = 1075,
  [SMALL_STATE(47)] = 1093,
  [SMALL_STATE(48)] = 1111,
  [SMALL_STATE(49)] = 1127,
  [SMALL_STATE(50)] = 1149,
  [SMALL_STATE(51)] = 1161,
  [SMALL_STATE(52)] = 1173,
  [SMALL_STATE(53)] = 1185,
  [SMALL_STATE(54)] = 1197,
  [SMALL_STATE(55)] = 1209,
  [SMALL_STATE(56)] = 1221,
  [SMALL_STATE(57)] = 1233,
  [SMALL_STATE(58)] = 1245,
  [SMALL_STATE(59)] = 1257,
  [SMALL_STATE(60)] = 1269,
  [SMALL_STATE(61)] = 1281,
  [SMALL_STATE(62)] = 1293,
  [SMALL_STATE(63)] = 1305,
  [SMALL_STATE(64)] = 1317,
  [SMALL_STATE(65)] = 1332,
  [SMALL_STATE(66)] = 1343,
  [SMALL_STATE(67)] = 1358,
  [SMALL_STATE(68)] = 1373,
  [SMALL_STATE(69)] = 1390,
  [SMALL_STATE(70)] = 1405,
  [SMALL_STATE(71)] = 1421,
  [SMALL_STATE(72)] = 1435,
  [SMALL_STATE(73)] = 1449,
  [SMALL_STATE(74)] = 1463,
  [SMALL_STATE(75)] = 1477,
  [SMALL_STATE(76)] = 1491,
  [SMALL_STATE(77)] = 1505,
  [SMALL_STATE(78)] = 1518,
  [SMALL_STATE(79)] = 1531,
  [SMALL_STATE(80)] = 1544,
  [SMALL_STATE(81)] = 1557,
  [SMALL_STATE(82)] = 1570,
  [SMALL_STATE(83)] = 1583,
  [SMALL_STATE(84)] = 1596,
  [SMALL_STATE(85)] = 1609,
  [SMALL_STATE(86)] = 1622,
  [SMALL_STATE(87)] = 1635,
  [SMALL_STATE(88)] = 1648,
  [SMALL_STATE(89)] = 1661,
  [SMALL_STATE(90)] = 1674,
  [SMALL_STATE(91)] = 1687,
  [SMALL_STATE(92)] = 1700,
  [SMALL_STATE(93)] = 1713,
  [SMALL_STATE(94)] = 1726,
  [SMALL_STATE(95)] = 1739,
  [SMALL_STATE(96)] = 1752,
  [SMALL_STATE(97)] = 1765,
  [SMALL_STATE(98)] = 1778,
  [SMALL_STATE(99)] = 1791,
  [SMALL_STATE(100)] = 1804,
  [SMALL_STATE(101)] = 1817,
  [SMALL_STATE(102)] = 1830,
  [SMALL_STATE(103)] = 1838,
  [SMALL_STATE(104)] = 1848,
  [SMALL_STATE(105)] = 1858,
  [SMALL_STATE(106)] = 1868,
  [SMALL_STATE(107)] = 1878,
  [SMALL_STATE(108)] = 1886,
  [SMALL_STATE(109)] = 1896,
  [SMALL_STATE(110)] = 1906,
  [SMALL_STATE(111)] = 1916,
  [SMALL_STATE(112)] = 1926,
  [SMALL_STATE(113)] = 1936,
  [SMALL_STATE(114)] = 1946,
  [SMALL_STATE(115)] = 1956,
  [SMALL_STATE(116)] = 1963,
  [SMALL_STATE(117)] = 1970,
  [SMALL_STATE(118)] = 1977,
  [SMALL_STATE(119)] = 1984,
  [SMALL_STATE(120)] = 1991,
  [SMALL_STATE(121)] = 1998,
  [SMALL_STATE(122)] = 2005,
  [SMALL_STATE(123)] = 2012,
  [SMALL_STATE(124)] = 2019,
  [SMALL_STATE(125)] = 2026,
  [SMALL_STATE(126)] = 2033,
  [SMALL_STATE(127)] = 2040,
  [SMALL_STATE(128)] = 2047,
  [SMALL_STATE(129)] = 2054,
  [SMALL_STATE(130)] = 2061,
  [SMALL_STATE(131)] = 2068,
  [SMALL_STATE(132)] = 2075,
  [SMALL_STATE(133)] = 2082,
  [SMALL_STATE(134)] = 2089,
  [SMALL_STATE(135)] = 2096,
  [SMALL_STATE(136)] = 2103,
  [SMALL_STATE(137)] = 2110,
  [SMALL_STATE(138)] = 2117,
  [SMALL_STATE(139)] = 2124,
  [SMALL_STATE(140)] = 2131,
  [SMALL_STATE(141)] = 2138,
  [SMALL_STATE(142)] = 2145,
  [SMALL_STATE(143)] = 2152,
  [SMALL_STATE(144)] = 2159,
  [SMALL_STATE(145)] = 2166,
  [SMALL_STATE(146)] = 2173,
  [SMALL_STATE(147)] = 2180,
  [SMALL_STATE(148)] = 2187,
  [SMALL_STATE(149)] = 2194,
  [SMALL_STATE(150)] = 2201,
  [SMALL_STATE(151)] = 2208,
  [SMALL_STATE(152)] = 2215,
  [SMALL_STATE(153)] = 2222,
  [SMALL_STATE(154)] = 2229,
  [SMALL_STATE(155)] = 2236,
  [SMALL_STATE(156)] = 2243,
  [SMALL_STATE(157)] = 2250,
  [SMALL_STATE(158)] = 2257,
  [SMALL_STATE(159)] = 2264,
  [SMALL_STATE(160)] = 2271,
  [SMALL_STATE(161)] = 2278,
  [SMALL_STATE(162)] = 2285,
  [SMALL_STATE(163)] = 2292,
  [SMALL_STATE(164)] = 2299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(130),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(70),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(29),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_body, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 5, 0, 5),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
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
