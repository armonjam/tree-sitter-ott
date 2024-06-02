#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 201
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 5
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 22

enum ts_symbol_identifiers {
  anon_sym_grammar = 1,
  anon_sym_embed = 2,
  anon_sym_defns = 3,
  anon_sym_COLON_COLON = 4,
  anon_sym_COLON_COLON_EQ = 5,
  anon_sym_defn = 6,
  anon_sym_by = 7,
  anon_sym_LF = 8,
  anon_sym_DASH_DASH_DASH_DASH = 9,
  aux_sym_dash_line_token1 = 10,
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
  anon_sym_tex_DASHpreamble = 22,
  sym_comment = 23,
  anon_sym_DOT_DOT = 24,
  anon_sym_DOT_DOT_DOT = 25,
  anon_sym_DOT_DOT_DOT_DOT = 26,
  anon_sym_SQUOTE = 27,
  sym_id = 28,
  sym_string = 29,
  sym_source_file = 30,
  sym__item = 31,
  sym_defnclass = 32,
  sym_defn = 33,
  sym_defn_rule = 34,
  sym_rule_separator = 35,
  sym_dash_line = 36,
  sym_rule_line = 37,
  sym_grammar_rule = 38,
  sym_production = 39,
  sym_element = 40,
  sym_metavardefn = 41,
  sym__id_desc_list1 = 42,
  sym_id_desc = 43,
  sym_comprehension_bound = 44,
  sym_embed = 45,
  sym_homomorphism = 46,
  sym_hom_name = 47,
  sym_hom_body = 48,
  sym_dots = 49,
  sym_namespace_prefix = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym__item_repeat1 = 52,
  aux_sym_defnclass_repeat1 = 53,
  aux_sym_defnclass_repeat2 = 54,
  aux_sym_defn_repeat1 = 55,
  aux_sym_defn_repeat2 = 56,
  aux_sym_defn_repeat3 = 57,
  aux_sym_defn_rule_repeat1 = 58,
  aux_sym_rule_line_repeat1 = 59,
  aux_sym_grammar_rule_repeat1 = 60,
  aux_sym__id_desc_list1_repeat1 = 61,
  aux_sym_hom_body_repeat1 = 62,
  anon_alias_sym_element = 63,
  anon_alias_sym_hom_string = 64,
  anon_alias_sym_id = 65,
  anon_alias_sym_q_id = 66,
  anon_alias_sym_symbol = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grammar] = "grammar",
  [anon_sym_embed] = "embed",
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
  [anon_sym_tex_DASHpreamble] = "tex-preamble",
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
  [sym_embed] = "embed",
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
  [anon_sym_embed] = anon_sym_embed,
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
  [anon_sym_tex_DASHpreamble] = anon_sym_tex_DASHpreamble,
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
  [sym_embed] = sym_embed,
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
  [anon_sym_embed] = {
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
  [anon_sym_tex_DASHpreamble] = {
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
  [sym_embed] = {
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
  field_element = 6,
  field_homomorphism = 7,
  field_line = 8,
  field_modifier = 9,
  field_name = 10,
  field_namespace_prefix = 11,
  field_open = 12,
  field_premise = 13,
  field_production_name = 14,
  field_rule_name = 15,
  field_separator = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_class_name] = "class_name",
  [field_close] = "close",
  [field_conclusion] = "conclusion",
  [field_definition] = "definition",
  [field_element] = "element",
  [field_homomorphism] = "homomorphism",
  [field_line] = "line",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_namespace_prefix] = "namespace_prefix",
  [field_open] = "open",
  [field_premise] = "premise",
  [field_production_name] = "production_name",
  [field_rule_name] = "rule_name",
  [field_separator] = "separator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 4},
  [4] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 4},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 3},
  [17] = {.index = 32, .length = 4},
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_close, 3},
    {field_name, 1},
    {field_open, 0},
  [4] =
    {field_class_name, 0},
    {field_namespace_prefix, 2},
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
    {field_production_name, 3},
  [17] =
    {field_homomorphism, 4},
    {field_production_name, 3},
  [19] =
    {field_modifier, 2},
    {field_production_name, 4},
  [21] =
    {field_element, 1},
    {field_production_name, 4},
  [23] =
    {field_homomorphism, 5},
    {field_modifier, 2},
    {field_production_name, 4},
  [26] =
    {field_element, 1},
    {field_homomorphism, 5},
    {field_production_name, 4},
  [29] =
    {field_element, 1},
    {field_modifier, 3},
    {field_production_name, 5},
  [32] =
    {field_element, 1},
    {field_homomorphism, 6},
    {field_modifier, 3},
    {field_production_name, 5},
  [36] =
    {field_conclusion, 1},
    {field_separator, 0},
  [38] =
    {field_conclusion, 2},
    {field_premise, 0},
    {field_separator, 1},
  [41] =
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
  [18] = {
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
  [15] = 15,
  [16] = 14,
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
  [31] = 30,
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
  [43] = 40,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 40,
  [52] = 52,
  [53] = 41,
  [54] = 48,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 42,
  [59] = 42,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 63,
  [72] = 18,
  [73] = 65,
  [74] = 68,
  [75] = 69,
  [76] = 70,
  [77] = 64,
  [78] = 64,
  [79] = 79,
  [80] = 63,
  [81] = 70,
  [82] = 69,
  [83] = 68,
  [84] = 66,
  [85] = 66,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 87,
  [91] = 91,
  [92] = 88,
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
  [108] = 100,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 107,
  [116] = 112,
  [117] = 117,
  [118] = 118,
  [119] = 100,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 110,
  [126] = 103,
  [127] = 101,
  [128] = 122,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 107,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 141,
  [145] = 143,
  [146] = 139,
  [147] = 143,
  [148] = 137,
  [149] = 141,
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
  [165] = 65,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 161,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 169,
  [178] = 178,
  [179] = 174,
  [180] = 175,
  [181] = 176,
  [182] = 169,
  [183] = 176,
  [184] = 184,
  [185] = 185,
  [186] = 175,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 174,
  [193] = 193,
  [194] = 194,
  [195] = 193,
  [196] = 187,
  [197] = 197,
  [198] = 198,
  [199] = 193,
  [200] = 187,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '%', 93,
        '\'', 100,
        ',', 86,
        '-', 13,
        '.', 14,
        '/', 15,
        ':', 17,
        '<', 16,
        'I', 20,
        'b', 57,
        'd', 31,
        'e', 40,
        'g', 47,
        'i', 44,
        'm', 32,
        't', 33,
        '{', 58,
        '|', 74,
        '}', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '<') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(100);
      if (lookahead == ':') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == '{') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '<') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '<') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '<') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '<') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '}') ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == '}') ADVANCE(89);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '%', 93,
        ',', 86,
        ':', 18,
        'd', 109,
        'e', 114,
        'g', 120,
        'i', 117,
        'm', 110,
        '{', 58,
        '|', 74,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '%', 92,
        '-', 132,
        '.', 133,
        '<', 134,
        'd', 145,
        'e', 150,
        'g', 156,
        'i', 154,
        'm', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_tex);
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_tex_DASHpreamble);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(164);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 60},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 60},
  [27] = {.lex_state = 60},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 60},
  [32] = {.lex_state = 60},
  [33] = {.lex_state = 60},
  [34] = {.lex_state = 60},
  [35] = {.lex_state = 60},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 60},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 60},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 60},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 60},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 60},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 60},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 60},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 60},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 73},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 60},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
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
    [anon_sym_tex_DASHpreamble] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(194),
    [sym__item] = STATE(44),
    [sym_metavardefn] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_grammar] = ACTIONS(7),
    [anon_sym_embed] = ACTIONS(9),
    [anon_sym_defns] = ACTIONS(11),
    [anon_sym_metavar] = ACTIONS(13),
    [anon_sym_indexvar] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(17), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [52] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(29), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [104] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(33), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [156] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(33), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [208] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(42), 1,
      anon_sym_LT_SLASH,
    ACTIONS(48), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(37), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(45), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [260] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(53), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [312] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(53), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [364] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(57), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [416] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat3,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(17), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(61), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [489] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(47), 1,
      sym_rule_separator,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(162), 1,
      sym_dash_line,
    STATE(24), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [526] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(35), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(67), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(73), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [580] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(36), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(80), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_defn,
    ACTIONS(82), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(87), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(91), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_defn,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(61), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_defn,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(19), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(52), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [728] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_id,
    STATE(116), 1,
      sym_id_desc,
    STATE(178), 1,
      sym__id_desc_list1,
    ACTIONS(103), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(21), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [755] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(110), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [778] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(114), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [801] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(118), 1,
      anon_sym_LT_SLASH,
    ACTIONS(124), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    STATE(24), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(121), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [832] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_id,
    STATE(116), 1,
      sym_id_desc,
    STATE(178), 1,
      sym__id_desc_list1,
    ACTIONS(129), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(32), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(135), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(33), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(139), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(143), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(147), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_defn,
    ACTIONS(149), 10,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [989] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_id,
    STATE(116), 1,
      sym_id_desc,
    STATE(178), 1,
      sym__id_desc_list1,
    ACTIONS(155), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(21), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(159), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(22), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(163), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    STATE(37), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(80), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    STATE(37), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(167), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_PIPE,
    STATE(37), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(174), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1128] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COLON_COLON,
    ACTIONS(178), 1,
      anon_sym_LT_SLASH,
    ACTIONS(182), 1,
      sym_string,
    STATE(69), 1,
      sym_dots,
    STATE(60), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(180), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1172] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LT_SLASH,
    ACTIONS(188), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(192), 1,
      sym_string,
    STATE(75), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(190), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1197] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_rule_line_repeat1,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1224] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LT_SLASH,
    ACTIONS(192), 1,
      sym_string,
    ACTIONS(198), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_dots,
    STATE(48), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(190), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LT_SLASH,
    ACTIONS(192), 1,
      sym_string,
    ACTIONS(200), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_dots,
    STATE(42), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(190), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1274] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(55), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1299] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LT_SLASH,
    ACTIONS(182), 1,
      sym_string,
    ACTIONS(204), 1,
      anon_sym_COLON_COLON,
    STATE(69), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(180), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(57), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1343] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(17), 1,
      sym_rule_line,
    STATE(53), 1,
      aux_sym_rule_line_repeat1,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1370] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LT_SLASH,
    ACTIONS(211), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(216), 1,
      sym_string,
    STATE(75), 1,
      sym_dots,
    STATE(48), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(213), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1395] = 8,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_LF,
    ACTIONS(221), 1,
      anon_sym_LT_SLASH,
    ACTIONS(227), 1,
      sym_string,
    STATE(49), 1,
      aux_sym_rule_line_repeat1,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    ACTIONS(224), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1422] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(11), 1,
      sym_rule_line,
    STATE(53), 1,
      aux_sym_rule_line_repeat1,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1449] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LT_SLASH,
    ACTIONS(192), 1,
      sym_string,
    ACTIONS(230), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_dots,
    STATE(59), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(190), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_defn,
    STATE(62), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1493] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LF,
    STATE(49), 1,
      aux_sym_rule_line_repeat1,
    STATE(79), 1,
      sym_element,
    STATE(82), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1520] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_COLON_COLON,
    ACTIONS(236), 1,
      anon_sym_LT_SLASH,
    ACTIONS(242), 1,
      sym_string,
    STATE(69), 1,
      sym_dots,
    STATE(54), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(239), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1545] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      anon_sym_grammar,
    ACTIONS(250), 1,
      anon_sym_embed,
    ACTIONS(253), 1,
      anon_sym_defns,
    ACTIONS(256), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(55), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1570] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LT_SLASH,
    ACTIONS(182), 1,
      sym_string,
    ACTIONS(259), 1,
      anon_sym_COLON_COLON,
    STATE(69), 1,
      sym_dots,
    STATE(54), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(180), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1614] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LT_SLASH,
    ACTIONS(192), 1,
      sym_string,
    ACTIONS(263), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_dots,
    STATE(48), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(190), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1639] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LT_SLASH,
    ACTIONS(192), 1,
      sym_string,
    ACTIONS(265), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_dots,
    STATE(48), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(190), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1664] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LT_SLASH,
    ACTIONS(182), 1,
      sym_string,
    ACTIONS(267), 1,
      anon_sym_COLON_COLON,
    STATE(69), 1,
      sym_dots,
    STATE(54), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(180), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_defn,
    STATE(62), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_defn,
    STATE(62), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(271), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1751] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1765] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1815] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1829] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(276), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(91), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1917] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(278), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1931] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1969] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(290), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1983] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(288), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(308), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(88), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(310), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(308), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(92), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SLASH_GT,
    ACTIONS(318), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(170), 1,
      sym_dots,
    ACTIONS(316), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(310), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 1,
      anon_sym_by,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(322), 1,
      anon_sym_by,
    STATE(93), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(322), 1,
      anon_sym_by,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 1,
      anon_sym_by,
    STATE(98), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(324), 1,
      anon_sym_by,
    STATE(95), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(326), 1,
      anon_sym_by,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(86), 1,
      sym_embed,
    STATE(39), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_id,
    ACTIONS(330), 1,
      sym_string,
    STATE(180), 1,
      sym_comprehension_bound,
  [2232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_string,
    STATE(121), 1,
      aux_sym_hom_body_repeat1,
    STATE(161), 1,
      sym_hom_body,
  [2245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(336), 1,
      sym_string,
    STATE(102), 1,
      aux_sym_hom_body_repeat1,
  [2258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__id_desc_list1_repeat1,
  [2271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym_id,
    STATE(94), 1,
      sym_namespace_prefix,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym_id,
    STATE(97), 1,
      sym_namespace_prefix,
  [2306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_id,
    ACTIONS(350), 1,
      sym_string,
    STATE(174), 1,
      sym_comprehension_bound,
  [2319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_id,
    ACTIONS(352), 1,
      sym_string,
    STATE(175), 1,
      sym_comprehension_bound,
  [2332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__id_desc_list1_repeat1,
  [2354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COLON_COLON,
    ACTIONS(362), 1,
      sym_id,
    STATE(120), 1,
      aux_sym_defn_repeat2,
  [2367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(110), 1,
      aux_sym__id_desc_list1_repeat1,
  [2380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym_id,
    STATE(96), 1,
      sym_namespace_prefix,
  [2393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COLON_COLON,
    ACTIONS(368), 1,
      sym_id,
    STATE(124), 1,
      aux_sym_defn_repeat2,
  [2406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_id,
    ACTIONS(370), 1,
      sym_string,
    STATE(179), 1,
      sym_comprehension_bound,
  [2419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COLON_COLON,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__id_desc_list1_repeat1,
  [2432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_id,
    ACTIONS(374), 1,
      anon_sym_COLON_COLON,
    STATE(124), 1,
      aux_sym_defn_repeat2,
  [2445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COLON_COLON,
    ACTIONS(378), 1,
      sym_id,
    STATE(130), 1,
      aux_sym_defn_repeat2,
  [2458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_id,
    ACTIONS(380), 1,
      sym_string,
    STATE(186), 1,
      sym_comprehension_bound,
  [2471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_id,
    ACTIONS(382), 1,
      anon_sym_COLON_COLON,
    STATE(124), 1,
      aux_sym_defn_repeat2,
  [2484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_string,
    ACTIONS(384), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(102), 1,
      aux_sym_hom_body_repeat1,
  [2497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_tex,
    ACTIONS(388), 1,
      anon_sym_tex_DASHpreamble,
    STATE(127), 1,
      sym_hom_name,
  [2510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym_id,
    STATE(158), 1,
      sym_namespace_prefix,
  [2523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COLON_COLON,
    ACTIONS(392), 1,
      sym_id,
    STATE(124), 1,
      aux_sym_defn_repeat2,
  [2536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COLON_COLON,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym__id_desc_list1_repeat1,
  [2549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COLON_COLON,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym__id_desc_list1_repeat1,
  [2562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_string,
    STATE(121), 1,
      aux_sym_hom_body_repeat1,
    STATE(173), 1,
      sym_hom_body,
  [2575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_tex,
    ACTIONS(388), 1,
      anon_sym_tex_DASHpreamble,
    STATE(101), 1,
      sym_hom_name,
  [2588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_COLON_COLON,
    ACTIONS(400), 1,
      sym_id,
    STATE(114), 1,
      aux_sym_defn_repeat2,
  [2601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_id,
    ACTIONS(398), 1,
      anon_sym_COLON_COLON,
    STATE(124), 1,
      aux_sym_defn_repeat2,
  [2614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_id,
    STATE(112), 1,
      sym_id_desc,
    STATE(155), 1,
      sym__id_desc_list1,
  [2627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COLON_COLON,
    ACTIONS(406), 1,
      sym_id,
    STATE(117), 1,
      aux_sym_defn_repeat2,
  [2640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_id,
    ACTIONS(410), 1,
      sym_string,
    STATE(192), 1,
      sym_comprehension_bound,
  [2662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym_id,
    STATE(166), 1,
      sym_namespace_prefix,
  [2675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      sym_id,
  [2685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [2693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(418), 1,
      sym_string,
  [2703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_id,
    STATE(137), 1,
      sym_id_desc,
  [2713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SLASH_GT,
    ACTIONS(424), 1,
      anon_sym_IN,
  [2723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_id,
    STATE(182), 1,
      sym_comprehension_bound,
  [2733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_string,
    STATE(86), 1,
      sym_defnclass,
  [2743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_id,
    STATE(181), 1,
      sym_comprehension_bound,
  [2753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_id,
    STATE(177), 1,
      sym_comprehension_bound,
  [2763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_id,
    STATE(183), 1,
      sym_comprehension_bound,
  [2773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_id,
    STATE(148), 1,
      sym_id_desc,
  [2783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_id,
    STATE(176), 1,
      sym_comprehension_bound,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_id,
    STATE(169), 1,
      sym_comprehension_bound,
  [2811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
  [2818] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LF,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_COLON_COLON,
  [2832] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LF,
  [2839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      sym_string,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON_COLON_EQ,
  [2853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_string,
  [2860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_string,
  [2867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_COLON_COLON_EQ,
  [2874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COLON_COLON,
  [2881] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LF,
  [2888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RBRACE_RBRACE,
  [2895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_COLON_COLON,
  [2902] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(456), 1,
      aux_sym_dash_line_token1,
  [2909] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LF,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_id,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COLON_COLON_EQ,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SLASH_GT,
  [2937] = 2,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LF,
  [2944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH_GT,
  [2951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_id,
  [2958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COLON_COLON,
  [2965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_SQUOTE,
  [2972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACE_RBRACE,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_SLASH_GT,
  [2986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SLASH_GT,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_SLASH_GT,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SLASH_GT,
  [3007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_COLON_COLON,
  [3014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_SLASH_GT,
  [3021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SLASH_GT,
  [3028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SLASH_GT,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SLASH_GT,
  [3042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_SLASH_GT,
  [3049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COLON_COLON,
  [3056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_string,
  [3063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_SLASH_GT,
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_SLASH_SLASH,
  [3077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_id,
  [3084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_id,
  [3091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COLON_COLON,
  [3098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_string,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_SLASH_GT,
  [3112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_SLASH_SLASH,
  [3119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
  [3126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
  [3133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH,
  [3140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_string,
  [3147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_id,
  [3154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_SLASH_SLASH,
  [3161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 364,
  [SMALL_STATE(10)] = 416,
  [SMALL_STATE(11)] = 468,
  [SMALL_STATE(12)] = 489,
  [SMALL_STATE(13)] = 526,
  [SMALL_STATE(14)] = 555,
  [SMALL_STATE(15)] = 580,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 676,
  [SMALL_STATE(20)] = 702,
  [SMALL_STATE(21)] = 728,
  [SMALL_STATE(22)] = 755,
  [SMALL_STATE(23)] = 778,
  [SMALL_STATE(24)] = 801,
  [SMALL_STATE(25)] = 832,
  [SMALL_STATE(26)] = 859,
  [SMALL_STATE(27)] = 882,
  [SMALL_STATE(28)] = 905,
  [SMALL_STATE(29)] = 928,
  [SMALL_STATE(30)] = 951,
  [SMALL_STATE(31)] = 970,
  [SMALL_STATE(32)] = 989,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1039,
  [SMALL_STATE(35)] = 1062,
  [SMALL_STATE(36)] = 1084,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1128,
  [SMALL_STATE(39)] = 1153,
  [SMALL_STATE(40)] = 1172,
  [SMALL_STATE(41)] = 1197,
  [SMALL_STATE(42)] = 1224,
  [SMALL_STATE(43)] = 1249,
  [SMALL_STATE(44)] = 1274,
  [SMALL_STATE(45)] = 1299,
  [SMALL_STATE(46)] = 1324,
  [SMALL_STATE(47)] = 1343,
  [SMALL_STATE(48)] = 1370,
  [SMALL_STATE(49)] = 1395,
  [SMALL_STATE(50)] = 1422,
  [SMALL_STATE(51)] = 1449,
  [SMALL_STATE(52)] = 1474,
  [SMALL_STATE(53)] = 1493,
  [SMALL_STATE(54)] = 1520,
  [SMALL_STATE(55)] = 1545,
  [SMALL_STATE(56)] = 1570,
  [SMALL_STATE(57)] = 1595,
  [SMALL_STATE(58)] = 1614,
  [SMALL_STATE(59)] = 1639,
  [SMALL_STATE(60)] = 1664,
  [SMALL_STATE(61)] = 1689,
  [SMALL_STATE(62)] = 1708,
  [SMALL_STATE(63)] = 1727,
  [SMALL_STATE(64)] = 1739,
  [SMALL_STATE(65)] = 1751,
  [SMALL_STATE(66)] = 1765,
  [SMALL_STATE(67)] = 1779,
  [SMALL_STATE(68)] = 1791,
  [SMALL_STATE(69)] = 1803,
  [SMALL_STATE(70)] = 1815,
  [SMALL_STATE(71)] = 1829,
  [SMALL_STATE(72)] = 1843,
  [SMALL_STATE(73)] = 1857,
  [SMALL_STATE(74)] = 1869,
  [SMALL_STATE(75)] = 1881,
  [SMALL_STATE(76)] = 1893,
  [SMALL_STATE(77)] = 1905,
  [SMALL_STATE(78)] = 1917,
  [SMALL_STATE(79)] = 1931,
  [SMALL_STATE(80)] = 1945,
  [SMALL_STATE(81)] = 1957,
  [SMALL_STATE(82)] = 1969,
  [SMALL_STATE(83)] = 1983,
  [SMALL_STATE(84)] = 1997,
  [SMALL_STATE(85)] = 2009,
  [SMALL_STATE(86)] = 2021,
  [SMALL_STATE(87)] = 2033,
  [SMALL_STATE(88)] = 2048,
  [SMALL_STATE(89)] = 2063,
  [SMALL_STATE(90)] = 2074,
  [SMALL_STATE(91)] = 2089,
  [SMALL_STATE(92)] = 2106,
  [SMALL_STATE(93)] = 2121,
  [SMALL_STATE(94)] = 2135,
  [SMALL_STATE(95)] = 2149,
  [SMALL_STATE(96)] = 2163,
  [SMALL_STATE(97)] = 2177,
  [SMALL_STATE(98)] = 2191,
  [SMALL_STATE(99)] = 2205,
  [SMALL_STATE(100)] = 2219,
  [SMALL_STATE(101)] = 2232,
  [SMALL_STATE(102)] = 2245,
  [SMALL_STATE(103)] = 2258,
  [SMALL_STATE(104)] = 2271,
  [SMALL_STATE(105)] = 2284,
  [SMALL_STATE(106)] = 2293,
  [SMALL_STATE(107)] = 2306,
  [SMALL_STATE(108)] = 2319,
  [SMALL_STATE(109)] = 2332,
  [SMALL_STATE(110)] = 2341,
  [SMALL_STATE(111)] = 2354,
  [SMALL_STATE(112)] = 2367,
  [SMALL_STATE(113)] = 2380,
  [SMALL_STATE(114)] = 2393,
  [SMALL_STATE(115)] = 2406,
  [SMALL_STATE(116)] = 2419,
  [SMALL_STATE(117)] = 2432,
  [SMALL_STATE(118)] = 2445,
  [SMALL_STATE(119)] = 2458,
  [SMALL_STATE(120)] = 2471,
  [SMALL_STATE(121)] = 2484,
  [SMALL_STATE(122)] = 2497,
  [SMALL_STATE(123)] = 2510,
  [SMALL_STATE(124)] = 2523,
  [SMALL_STATE(125)] = 2536,
  [SMALL_STATE(126)] = 2549,
  [SMALL_STATE(127)] = 2562,
  [SMALL_STATE(128)] = 2575,
  [SMALL_STATE(129)] = 2588,
  [SMALL_STATE(130)] = 2601,
  [SMALL_STATE(131)] = 2614,
  [SMALL_STATE(132)] = 2627,
  [SMALL_STATE(133)] = 2640,
  [SMALL_STATE(134)] = 2649,
  [SMALL_STATE(135)] = 2662,
  [SMALL_STATE(136)] = 2675,
  [SMALL_STATE(137)] = 2685,
  [SMALL_STATE(138)] = 2693,
  [SMALL_STATE(139)] = 2703,
  [SMALL_STATE(140)] = 2713,
  [SMALL_STATE(141)] = 2723,
  [SMALL_STATE(142)] = 2733,
  [SMALL_STATE(143)] = 2743,
  [SMALL_STATE(144)] = 2753,
  [SMALL_STATE(145)] = 2763,
  [SMALL_STATE(146)] = 2773,
  [SMALL_STATE(147)] = 2783,
  [SMALL_STATE(148)] = 2793,
  [SMALL_STATE(149)] = 2801,
  [SMALL_STATE(150)] = 2811,
  [SMALL_STATE(151)] = 2818,
  [SMALL_STATE(152)] = 2825,
  [SMALL_STATE(153)] = 2832,
  [SMALL_STATE(154)] = 2839,
  [SMALL_STATE(155)] = 2846,
  [SMALL_STATE(156)] = 2853,
  [SMALL_STATE(157)] = 2860,
  [SMALL_STATE(158)] = 2867,
  [SMALL_STATE(159)] = 2874,
  [SMALL_STATE(160)] = 2881,
  [SMALL_STATE(161)] = 2888,
  [SMALL_STATE(162)] = 2895,
  [SMALL_STATE(163)] = 2902,
  [SMALL_STATE(164)] = 2909,
  [SMALL_STATE(165)] = 2916,
  [SMALL_STATE(166)] = 2923,
  [SMALL_STATE(167)] = 2930,
  [SMALL_STATE(168)] = 2937,
  [SMALL_STATE(169)] = 2944,
  [SMALL_STATE(170)] = 2951,
  [SMALL_STATE(171)] = 2958,
  [SMALL_STATE(172)] = 2965,
  [SMALL_STATE(173)] = 2972,
  [SMALL_STATE(174)] = 2979,
  [SMALL_STATE(175)] = 2986,
  [SMALL_STATE(176)] = 2993,
  [SMALL_STATE(177)] = 3000,
  [SMALL_STATE(178)] = 3007,
  [SMALL_STATE(179)] = 3014,
  [SMALL_STATE(180)] = 3021,
  [SMALL_STATE(181)] = 3028,
  [SMALL_STATE(182)] = 3035,
  [SMALL_STATE(183)] = 3042,
  [SMALL_STATE(184)] = 3049,
  [SMALL_STATE(185)] = 3056,
  [SMALL_STATE(186)] = 3063,
  [SMALL_STATE(187)] = 3070,
  [SMALL_STATE(188)] = 3077,
  [SMALL_STATE(189)] = 3084,
  [SMALL_STATE(190)] = 3091,
  [SMALL_STATE(191)] = 3098,
  [SMALL_STATE(192)] = 3105,
  [SMALL_STATE(193)] = 3112,
  [SMALL_STATE(194)] = 3119,
  [SMALL_STATE(195)] = 3126,
  [SMALL_STATE(196)] = 3133,
  [SMALL_STATE(197)] = 3140,
  [SMALL_STATE(198)] = 3147,
  [SMALL_STATE(199)] = 3154,
  [SMALL_STATE(200)] = 3161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(163),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(40),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(65),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat3, 2, 0, 0), SHIFT_REPEAT(83),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 19),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 20),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 20),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 17),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 17),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 14),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 14),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 11),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 11),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 13),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 13),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 12),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 12),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 10),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 10),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 15),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 15),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 16),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 16),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 9),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(38),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 8),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 18),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 18),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 8),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 21),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_body, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [516] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
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
