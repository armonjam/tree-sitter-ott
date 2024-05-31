#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 6
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
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
  sym_comment = 21,
  anon_sym_DOT_DOT = 22,
  anon_sym_DOT_DOT_DOT = 23,
  anon_sym_DOT_DOT_DOT_DOT = 24,
  sym_id = 25,
  sym_string = 26,
  sym_source_file = 27,
  sym__item = 28,
  sym_defnclass = 29,
  sym_defn = 30,
  sym_defn_rule = 31,
  sym_rule_separator = 32,
  sym_grammar_rule = 33,
  sym_production = 34,
  sym_element = 35,
  sym_metavardefn = 36,
  sym__id_desc_list1 = 37,
  sym_id_desc = 38,
  sym_comprehension_bound = 39,
  sym_homomorphism = 40,
  sym_dots = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym__item_repeat1 = 43,
  aux_sym_defnclass_repeat1 = 44,
  aux_sym_defnclass_repeat2 = 45,
  aux_sym_defn_repeat1 = 46,
  aux_sym_defn_repeat2 = 47,
  aux_sym_defn_repeat3 = 48,
  aux_sym_defn_rule_repeat1 = 49,
  aux_sym_grammar_rule_repeat1 = 50,
  aux_sym__id_desc_list1_repeat1 = 51,
  aux_sym_homomorphism_repeat1 = 52,
  anon_alias_sym_class_name = 53,
  anon_alias_sym_hom_name = 54,
  anon_alias_sym_hom_string = 55,
  anon_alias_sym_namespace_prefix = 56,
  anon_alias_sym_rule_name = 57,
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
  [aux_sym_homomorphism_repeat1] = "homomorphism_repeat1",
  [anon_alias_sym_class_name] = "class_name",
  [anon_alias_sym_hom_name] = "hom_name",
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
  [aux_sym_homomorphism_repeat1] = aux_sym_homomorphism_repeat1,
  [anon_alias_sym_class_name] = anon_alias_sym_class_name,
  [anon_alias_sym_hom_name] = anon_alias_sym_hom_name,
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
  [aux_sym_homomorphism_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_class_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_hom_name] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_hom_name,
  },
  [2] = {
    [0] = anon_alias_sym_hom_string,
  },
  [3] = {
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
  [12] = 8,
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
  [26] = 22,
  [27] = 18,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 30,
  [39] = 39,
  [40] = 40,
  [41] = 33,
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
  [57] = 53,
  [58] = 54,
  [59] = 56,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 62,
  [64] = 52,
  [65] = 55,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 66,
  [71] = 68,
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
  [88] = 84,
  [89] = 89,
  [90] = 82,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 85,
  [98] = 98,
  [99] = 83,
  [100] = 100,
  [101] = 100,
  [102] = 80,
  [103] = 89,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 105,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 110,
  [114] = 109,
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
  [143] = 54,
  [144] = 144,
  [145] = 145,
  [146] = 130,
  [147] = 125,
  [148] = 137,
  [149] = 118,
  [150] = 145,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 132,
  [158] = 123,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      ADVANCE_MAP(
        '%', 110,
        ',', 105,
        '-', 39,
        '.', 40,
        '/', 41,
        ':', 43,
        '<', 42,
        'I', 46,
        'b', 69,
        'd', 53,
        'g', 61,
        'i', 59,
        'm', 54,
        '{', 70,
        '|', 93,
        '}', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(8);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '-') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '%') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '%') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == ':') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '<') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '<') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(109);
      if (lookahead == '}') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(111);
      END_STATE();
    case 41:
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 66:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == '{') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == '}') ADVANCE(108);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      ADVANCE_MAP(
        '%', 110,
        ',', 105,
        ':', 44,
        'd', 123,
        'g', 131,
        'i', 129,
        'm', 124,
        '{', 70,
        '|', 93,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_grammar);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_grammar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '%') ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_rule_separator_token1);
      if (lookahead == '%') ADVANCE(110);
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
      ACCEPT_TOKEN(sym_rule_line);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_rule_line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '-') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_rule_line);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '%') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '}') ADVANCE(108);
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
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 73},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 73},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 73},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 73},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 72},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 32},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 73},
  [71] = {.lex_state = 73},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 73},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 73},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 73},
  [85] = {.lex_state = 34},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 31},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 31},
  [92] = {.lex_state = 31},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 31},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 34},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 34},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 31},
  [105] = {.lex_state = 31},
  [106] = {.lex_state = 31},
  [107] = {.lex_state = 31},
  [108] = {.lex_state = 31},
  [109] = {.lex_state = 31},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 34},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 73},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 87},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 29},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 30},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 29},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 30},
  [127] = {.lex_state = 36},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 30},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 36},
  [136] = {.lex_state = 36},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 73},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 73},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 31},
  [144] = {.lex_state = 36},
  [145] = {.lex_state = 36},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 73},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 36},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(156),
    [sym__item] = STATE(43),
    [sym_metavardefn] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(43),
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
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    ACTIONS(21), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_defn_rule_repeat1,
    STATE(122), 1,
      sym_rule_separator,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(15), 5,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [30] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(8), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(36), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(25), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [58] = 8,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_defn_rule_repeat1,
    STATE(122), 1,
      sym_rule_separator,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(33), 5,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [88] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(3), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(39), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(37), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [116] = 8,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_defn_rule_repeat1,
    STATE(122), 1,
      sym_rule_separator,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(41), 5,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [146] = 8,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_defn_rule_repeat1,
    STATE(122), 1,
      sym_rule_separator,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(41), 5,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(8), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(45), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [200] = 8,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_defn_rule_repeat1,
    STATE(122), 1,
      sym_rule_separator,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(52), 5,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [230] = 8,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_defn_rule_repeat1,
    STATE(122), 1,
      sym_rule_separator,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(52), 5,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [260] = 8,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(61), 1,
      sym_rule_line,
    STATE(76), 1,
      aux_sym_defn_rule_repeat1,
    STATE(122), 1,
      sym_rule_separator,
    STATE(11), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(56), 5,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_defn,
    ACTIONS(64), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [314] = 8,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_defn_rule_repeat1,
    STATE(122), 1,
      sym_rule_separator,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(69), 5,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [344] = 8,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(19), 1,
      sym_rule_line,
    ACTIONS(21), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_defn_rule_repeat1,
    STATE(122), 1,
      sym_rule_separator,
    STATE(10), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    ACTIONS(15), 5,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
  [374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_defn,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(51), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_defn,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(44), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(81), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_defn,
    ACTIONS(83), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(8), 2,
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
  [486] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_id,
    STATE(102), 1,
      sym_id_desc,
    STATE(155), 1,
      sym__id_desc_list1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(20), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(93), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [512] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(19), 2,
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
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(8), 2,
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
  [574] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_id,
    STATE(102), 1,
      sym_id_desc,
    STATE(155), 1,
      sym__id_desc_list1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(29), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(108), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(114), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(8), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_defns,
      anon_sym_PIPE,
    ACTIONS(81), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [680] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_id,
    STATE(102), 1,
      sym_id_desc,
    STATE(155), 1,
      sym__id_desc_list1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(20), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(118), 3,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
  [706] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LT_SLASH,
    ACTIONS(122), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(126), 1,
      sym_string,
    STATE(65), 1,
      sym_dots,
    STATE(33), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(124), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [731] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COLON_COLON,
    ACTIONS(130), 1,
      anon_sym_LT_SLASH,
    ACTIONS(134), 1,
      sym_string,
    STATE(55), 1,
      sym_dots,
    STATE(34), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(132), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [756] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LT_SLASH,
    ACTIONS(134), 1,
      sym_string,
    ACTIONS(136), 1,
      anon_sym_COLON_COLON,
    STATE(55), 1,
      sym_dots,
    STATE(34), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(132), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [781] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LT_SLASH,
    ACTIONS(126), 1,
      sym_string,
    ACTIONS(138), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(124), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [806] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_COLON_COLON,
    ACTIONS(142), 1,
      anon_sym_LT_SLASH,
    ACTIONS(148), 1,
      sym_string,
    STATE(55), 1,
      sym_dots,
    STATE(34), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(145), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [831] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(151), 1,
      anon_sym_LT_SLASH,
    ACTIONS(157), 1,
      sym_string,
    STATE(65), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(154), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(42), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(162), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [877] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LT_SLASH,
    ACTIONS(134), 1,
      sym_string,
    ACTIONS(164), 1,
      anon_sym_COLON_COLON,
    STATE(55), 1,
      sym_dots,
    STATE(31), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(132), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [902] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LT_SLASH,
    ACTIONS(126), 1,
      sym_string,
    ACTIONS(166), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_dots,
    STATE(41), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(124), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(42), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(25), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [948] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LT_SLASH,
    ACTIONS(134), 1,
      sym_string,
    ACTIONS(168), 1,
      anon_sym_COLON_COLON,
    STATE(55), 1,
      sym_dots,
    STATE(32), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(132), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [973] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LT_SLASH,
    ACTIONS(126), 1,
      sym_string,
    ACTIONS(170), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_dots,
    STATE(35), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(124), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_defns,
    STATE(42), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(174), 4,
      anon_sym_grammar,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
  [1019] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_defns,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(50), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_defn,
    STATE(47), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(49), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1077] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 7,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_DASH_DASH_DASH_DASH,
      sym_rule_line,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_defn,
    STATE(47), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1111] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 7,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_defn,
      anon_sym_DASH_DASH_DASH_DASH,
      sym_rule_line,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1145] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      anon_sym_grammar,
    ACTIONS(203), 1,
      anon_sym_defns,
    ACTIONS(206), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(50), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_defn,
    STATE(47), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
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
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(225), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(68), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(227), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH_GT,
    ACTIONS(233), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(117), 1,
      sym_dots,
    ACTIONS(231), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [1411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(225), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(71), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(227), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(8), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_by,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      anon_sym_by,
    STATE(78), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(237), 1,
      anon_sym_by,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(239), 1,
      anon_sym_by,
    STATE(72), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1497] = 5,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_rule_line,
    STATE(98), 1,
      aux_sym_defn_rule_repeat1,
    STATE(133), 1,
      sym_rule_separator,
  [1513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(243), 1,
      anon_sym_by,
    STATE(74), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(243), 1,
      anon_sym_by,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(247), 1,
      sym_string,
    STATE(79), 1,
      aux_sym_homomorphism_repeat1,
  [1554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym__id_desc_list1_repeat1,
  [1567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COLON_COLON,
    ACTIONS(256), 1,
      sym_id,
    STATE(95), 1,
      aux_sym_defn_repeat2,
  [1580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(84), 1,
      aux_sym__id_desc_list1_repeat1,
  [1593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(262), 1,
      sym_string,
    STATE(79), 1,
      aux_sym_homomorphism_repeat1,
  [1606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym__id_desc_list1_repeat1,
  [1619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_string,
    ACTIONS(269), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(83), 1,
      aux_sym_homomorphism_repeat1,
  [1632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COLON_COLON,
    ACTIONS(273), 1,
      sym_id,
    STATE(86), 1,
      aux_sym_defn_repeat2,
  [1645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COLON_COLON,
    ACTIONS(278), 1,
      sym_id,
    STATE(86), 1,
      aux_sym_defn_repeat2,
  [1658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COLON_COLON,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym__id_desc_list1_repeat1,
  [1671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_id,
    ACTIONS(285), 1,
      sym_string,
    STATE(125), 1,
      sym_comprehension_bound,
  [1684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym__id_desc_list1_repeat1,
  [1697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COLON_COLON,
    ACTIONS(291), 1,
      sym_id,
    STATE(104), 1,
      aux_sym_defn_repeat2,
  [1710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_id,
    STATE(80), 1,
      sym_id_desc,
    STATE(151), 1,
      sym__id_desc_list1,
  [1723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_COLON_COLON,
    ACTIONS(297), 1,
      sym_id,
    STATE(94), 1,
      aux_sym_defn_repeat2,
  [1736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_id,
    ACTIONS(299), 1,
      anon_sym_COLON_COLON,
    STATE(86), 1,
      aux_sym_defn_repeat2,
  [1749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_id,
    ACTIONS(295), 1,
      anon_sym_COLON_COLON,
    STATE(86), 1,
      aux_sym_defn_repeat2,
  [1762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COLON_COLON,
    ACTIONS(303), 1,
      sym_id,
    STATE(87), 1,
      aux_sym_defn_repeat2,
  [1775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_string,
    ACTIONS(305), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(99), 1,
      aux_sym_homomorphism_repeat1,
  [1788] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(309), 1,
      sym_rule_line,
    STATE(98), 1,
      aux_sym_defn_rule_repeat1,
  [1801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_string,
    ACTIONS(312), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(79), 1,
      aux_sym_homomorphism_repeat1,
  [1814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_id,
    ACTIONS(314), 1,
      sym_string,
    STATE(130), 1,
      sym_comprehension_bound,
  [1827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_id,
    ACTIONS(316), 1,
      sym_string,
    STATE(146), 1,
      sym_comprehension_bound,
  [1840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym__id_desc_list1_repeat1,
  [1853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_id,
    ACTIONS(318), 1,
      sym_string,
    STATE(147), 1,
      sym_comprehension_bound,
  [1866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_id,
    ACTIONS(301), 1,
      anon_sym_COLON_COLON,
    STATE(86), 1,
      aux_sym_defn_repeat2,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_id,
    STATE(137), 1,
      sym_comprehension_bound,
  [1889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_id,
    STATE(118), 1,
      sym_comprehension_bound,
  [1899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_id,
    STATE(149), 1,
      sym_comprehension_bound,
  [1909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_id,
    STATE(148), 1,
      sym_comprehension_bound,
  [1919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_id,
    STATE(110), 1,
      sym_id_desc,
  [1929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [1937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(326), 1,
      sym_string,
  [1947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_SLASH_GT,
    ACTIONS(330), 1,
      anon_sym_IN,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [1965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_id,
    STATE(113), 1,
      sym_id_desc,
  [1975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_string,
    STATE(67), 1,
      sym_defnclass,
  [1985] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_rule_separator_token1,
  [1992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_id,
  [1999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SLASH_GT,
  [2006] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LF,
  [2013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_string,
  [2020] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LF,
  [2027] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_rule_line,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SLASH_SLASH,
  [2041] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LF,
  [2048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SLASH_GT,
  [2055] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_rule_line,
  [2062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_string,
  [2069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_id,
  [2076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_string,
  [2083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SLASH_GT,
  [2090] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LF,
  [2097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_SLASH_SLASH,
  [2104] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_rule_line,
  [2111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_string,
  [2118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_string,
  [2125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_string,
  [2132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SLASH_GT,
  [2139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COLON_COLON_EQ,
  [2146] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_LF,
  [2153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COLON_COLON_EQ,
  [2160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_string,
  [2167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COLON_COLON,
  [2174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_id,
  [2181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_string,
  [2188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_string,
  [2195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_SLASH_GT,
  [2202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SLASH_GT,
  [2209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SLASH_GT,
  [2216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_SLASH_GT,
  [2223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_string,
  [2230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COLON_COLON_EQ,
  [2237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COLON_COLON,
  [2244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_string,
  [2251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SLASH_GT,
  [2258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COLON_COLON,
  [2265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
  [2272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_SLASH_SLASH,
  [2279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 260,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 314,
  [SMALL_STATE(14)] = 344,
  [SMALL_STATE(15)] = 374,
  [SMALL_STATE(16)] = 399,
  [SMALL_STATE(17)] = 424,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 464,
  [SMALL_STATE(20)] = 486,
  [SMALL_STATE(21)] = 512,
  [SMALL_STATE(22)] = 534,
  [SMALL_STATE(23)] = 552,
  [SMALL_STATE(24)] = 574,
  [SMALL_STATE(25)] = 600,
  [SMALL_STATE(26)] = 622,
  [SMALL_STATE(27)] = 640,
  [SMALL_STATE(28)] = 658,
  [SMALL_STATE(29)] = 680,
  [SMALL_STATE(30)] = 706,
  [SMALL_STATE(31)] = 731,
  [SMALL_STATE(32)] = 756,
  [SMALL_STATE(33)] = 781,
  [SMALL_STATE(34)] = 806,
  [SMALL_STATE(35)] = 831,
  [SMALL_STATE(36)] = 856,
  [SMALL_STATE(37)] = 877,
  [SMALL_STATE(38)] = 902,
  [SMALL_STATE(39)] = 927,
  [SMALL_STATE(40)] = 948,
  [SMALL_STATE(41)] = 973,
  [SMALL_STATE(42)] = 998,
  [SMALL_STATE(43)] = 1019,
  [SMALL_STATE(44)] = 1041,
  [SMALL_STATE(45)] = 1059,
  [SMALL_STATE(46)] = 1077,
  [SMALL_STATE(47)] = 1093,
  [SMALL_STATE(48)] = 1111,
  [SMALL_STATE(49)] = 1127,
  [SMALL_STATE(50)] = 1145,
  [SMALL_STATE(51)] = 1167,
  [SMALL_STATE(52)] = 1185,
  [SMALL_STATE(53)] = 1197,
  [SMALL_STATE(54)] = 1209,
  [SMALL_STATE(55)] = 1221,
  [SMALL_STATE(56)] = 1233,
  [SMALL_STATE(57)] = 1245,
  [SMALL_STATE(58)] = 1257,
  [SMALL_STATE(59)] = 1269,
  [SMALL_STATE(60)] = 1281,
  [SMALL_STATE(61)] = 1293,
  [SMALL_STATE(62)] = 1305,
  [SMALL_STATE(63)] = 1317,
  [SMALL_STATE(64)] = 1329,
  [SMALL_STATE(65)] = 1341,
  [SMALL_STATE(66)] = 1353,
  [SMALL_STATE(67)] = 1368,
  [SMALL_STATE(68)] = 1379,
  [SMALL_STATE(69)] = 1394,
  [SMALL_STATE(70)] = 1411,
  [SMALL_STATE(71)] = 1426,
  [SMALL_STATE(72)] = 1441,
  [SMALL_STATE(73)] = 1455,
  [SMALL_STATE(74)] = 1469,
  [SMALL_STATE(75)] = 1483,
  [SMALL_STATE(76)] = 1497,
  [SMALL_STATE(77)] = 1513,
  [SMALL_STATE(78)] = 1527,
  [SMALL_STATE(79)] = 1541,
  [SMALL_STATE(80)] = 1554,
  [SMALL_STATE(81)] = 1567,
  [SMALL_STATE(82)] = 1580,
  [SMALL_STATE(83)] = 1593,
  [SMALL_STATE(84)] = 1606,
  [SMALL_STATE(85)] = 1619,
  [SMALL_STATE(86)] = 1632,
  [SMALL_STATE(87)] = 1645,
  [SMALL_STATE(88)] = 1658,
  [SMALL_STATE(89)] = 1671,
  [SMALL_STATE(90)] = 1684,
  [SMALL_STATE(91)] = 1697,
  [SMALL_STATE(92)] = 1710,
  [SMALL_STATE(93)] = 1723,
  [SMALL_STATE(94)] = 1736,
  [SMALL_STATE(95)] = 1749,
  [SMALL_STATE(96)] = 1762,
  [SMALL_STATE(97)] = 1775,
  [SMALL_STATE(98)] = 1788,
  [SMALL_STATE(99)] = 1801,
  [SMALL_STATE(100)] = 1814,
  [SMALL_STATE(101)] = 1827,
  [SMALL_STATE(102)] = 1840,
  [SMALL_STATE(103)] = 1853,
  [SMALL_STATE(104)] = 1866,
  [SMALL_STATE(105)] = 1879,
  [SMALL_STATE(106)] = 1889,
  [SMALL_STATE(107)] = 1899,
  [SMALL_STATE(108)] = 1909,
  [SMALL_STATE(109)] = 1919,
  [SMALL_STATE(110)] = 1929,
  [SMALL_STATE(111)] = 1937,
  [SMALL_STATE(112)] = 1947,
  [SMALL_STATE(113)] = 1957,
  [SMALL_STATE(114)] = 1965,
  [SMALL_STATE(115)] = 1975,
  [SMALL_STATE(116)] = 1985,
  [SMALL_STATE(117)] = 1992,
  [SMALL_STATE(118)] = 1999,
  [SMALL_STATE(119)] = 2006,
  [SMALL_STATE(120)] = 2013,
  [SMALL_STATE(121)] = 2020,
  [SMALL_STATE(122)] = 2027,
  [SMALL_STATE(123)] = 2034,
  [SMALL_STATE(124)] = 2041,
  [SMALL_STATE(125)] = 2048,
  [SMALL_STATE(126)] = 2055,
  [SMALL_STATE(127)] = 2062,
  [SMALL_STATE(128)] = 2069,
  [SMALL_STATE(129)] = 2076,
  [SMALL_STATE(130)] = 2083,
  [SMALL_STATE(131)] = 2090,
  [SMALL_STATE(132)] = 2097,
  [SMALL_STATE(133)] = 2104,
  [SMALL_STATE(134)] = 2111,
  [SMALL_STATE(135)] = 2118,
  [SMALL_STATE(136)] = 2125,
  [SMALL_STATE(137)] = 2132,
  [SMALL_STATE(138)] = 2139,
  [SMALL_STATE(139)] = 2146,
  [SMALL_STATE(140)] = 2153,
  [SMALL_STATE(141)] = 2160,
  [SMALL_STATE(142)] = 2167,
  [SMALL_STATE(143)] = 2174,
  [SMALL_STATE(144)] = 2181,
  [SMALL_STATE(145)] = 2188,
  [SMALL_STATE(146)] = 2195,
  [SMALL_STATE(147)] = 2202,
  [SMALL_STATE(148)] = 2209,
  [SMALL_STATE(149)] = 2216,
  [SMALL_STATE(150)] = 2223,
  [SMALL_STATE(151)] = 2230,
  [SMALL_STATE(152)] = 2237,
  [SMALL_STATE(153)] = 2244,
  [SMALL_STATE(154)] = 2251,
  [SMALL_STATE(155)] = 2258,
  [SMALL_STATE(156)] = 2265,
  [SMALL_STATE(157)] = 2272,
  [SMALL_STATE(158)] = 2279,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 7, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 7, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(116),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(76),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 6, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 6, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 3, 0, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 3, 0, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(40),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(86),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 5, 0, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [414] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
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
