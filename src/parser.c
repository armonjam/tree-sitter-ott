#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 194
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 5
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 30

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
  aux_sym_defn_rule_repeat1 = 57,
  aux_sym_rule_line_repeat1 = 58,
  aux_sym_grammar_rule_repeat1 = 59,
  aux_sym_production_repeat1 = 60,
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
  [aux_sym_defn_rule_repeat1] = "defn_rule_repeat1",
  [aux_sym_rule_line_repeat1] = "rule_line_repeat1",
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym_production_repeat1] = "production_repeat1",
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
  [aux_sym_defn_rule_repeat1] = aux_sym_defn_rule_repeat1,
  [aux_sym_rule_line_repeat1] = aux_sym_rule_line_repeat1,
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym_production_repeat1] = aux_sym_production_repeat1,
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
  [aux_sym_production_repeat1] = {
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
  field_definition_name = 6,
  field_definition_rule = 7,
  field_element = 8,
  field_homomorphism = 9,
  field_line = 10,
  field_modifier = 11,
  field_name = 12,
  field_namespace_prefix = 13,
  field_open = 14,
  field_premise = 15,
  field_production_name = 16,
  field_rule_name = 17,
  field_separator = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_class_name] = "class_name",
  [field_close] = "close",
  [field_conclusion] = "conclusion",
  [field_definition] = "definition",
  [field_definition_name] = "definition_name",
  [field_definition_rule] = "definition_rule",
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
  [18] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 3},
  [22] = {.index = 44, .length = 3},
  [23] = {.index = 47, .length = 2},
  [24] = {.index = 49, .length = 4},
  [25] = {.index = 53, .length = 4},
  [26] = {.index = 57, .length = 4},
  [27] = {.index = 61, .length = 3},
  [28] = {.index = 64, .length = 5},
  [29] = {.index = 69, .length = 2},
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
    {field_definition_name, 3},
    {field_namespace_prefix, 5},
  [38] =
    {field_definition_name, 3},
    {field_definition_rule, 8},
    {field_namespace_prefix, 5},
  [41] =
    {field_definition_name, 3},
    {field_homomorphism, 6},
    {field_namespace_prefix, 5},
  [44] =
    {field_definition_name, 4},
    {field_element, 1},
    {field_namespace_prefix, 6},
  [47] =
    {field_conclusion, 1},
    {field_separator, 0},
  [49] =
    {field_definition_name, 3},
    {field_definition_rule, 9},
    {field_homomorphism, 6},
    {field_namespace_prefix, 5},
  [53] =
    {field_definition_name, 4},
    {field_definition_rule, 9},
    {field_element, 1},
    {field_namespace_prefix, 6},
  [57] =
    {field_definition_name, 4},
    {field_element, 1},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [61] =
    {field_conclusion, 2},
    {field_premise, 0},
    {field_separator, 1},
  [64] =
    {field_definition_name, 4},
    {field_definition_rule, 10},
    {field_element, 1},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [69] =
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
  [19] = {
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
  [16] = 16,
  [17] = 17,
  [18] = 15,
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
  [34] = 32,
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
  [46] = 42,
  [47] = 47,
  [48] = 43,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 43,
  [55] = 55,
  [56] = 41,
  [57] = 42,
  [58] = 58,
  [59] = 44,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 17,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 67,
  [74] = 67,
  [75] = 70,
  [76] = 76,
  [77] = 71,
  [78] = 68,
  [79] = 70,
  [80] = 71,
  [81] = 76,
  [82] = 72,
  [83] = 68,
  [84] = 63,
  [85] = 72,
  [86] = 76,
  [87] = 87,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 87,
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
  [105] = 103,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 99,
  [110] = 110,
  [111] = 111,
  [112] = 108,
  [113] = 99,
  [114] = 114,
  [115] = 115,
  [116] = 104,
  [117] = 117,
  [118] = 118,
  [119] = 98,
  [120] = 120,
  [121] = 108,
  [122] = 115,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 114,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 129,
  [136] = 136,
  [137] = 132,
  [138] = 138,
  [139] = 138,
  [140] = 136,
  [141] = 138,
  [142] = 129,
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
  [158] = 71,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 150,
  [167] = 161,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 161,
  [173] = 144,
  [174] = 169,
  [175] = 170,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 144,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 170,
  [187] = 187,
  [188] = 156,
  [189] = 180,
  [190] = 190,
  [191] = 169,
  [192] = 156,
  [193] = 180,
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
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 60},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 60},
  [27] = {.lex_state = 60},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 60},
  [32] = {.lex_state = 60},
  [33] = {.lex_state = 60},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 60},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 60},
  [88] = {.lex_state = 60},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 60},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 60},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 60},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 60},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 60},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 60},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 60},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 73},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
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
    [sym_source_file] = STATE(190),
    [sym__item] = STATE(47),
    [sym_metavardefn] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(47),
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
    STATE(40), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
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
    STATE(40), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
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
    STATE(40), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
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
    STATE(40), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(37), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [208] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(46), 1,
      anon_sym_LT_SLASH,
    ACTIONS(52), 1,
      sym_string,
    STATE(40), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(41), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(49), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(39), 4,
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
    STATE(40), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
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
  [312] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(40), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(61), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(59), 4,
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
    STATE(40), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(65), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(63), 4,
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
    STATE(40), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(69), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [468] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(51), 1,
      sym_rule_separator,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(171), 1,
      sym_dash_line,
    STATE(30), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(73), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(77), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [547] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(36), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(83), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(89), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [601] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(37), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(96), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(100), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_defn,
    ACTIONS(102), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(87), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(52), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(38), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(115), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [751] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(24), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(119), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(123), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(127), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(29), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(131), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [843] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 2,
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
  [866] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_id,
    STATE(103), 1,
      sym_id_desc,
    STATE(187), 1,
      sym__id_desc_list1,
    ACTIONS(139), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(27), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(146), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [916] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(150), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [939] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(154), 1,
      anon_sym_LT_SLASH,
    ACTIONS(160), 1,
      sym_string,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    STATE(30), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(157), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [970] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_id,
    STATE(103), 1,
      sym_id_desc,
    STATE(187), 1,
      sym__id_desc_list1,
    ACTIONS(165), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(27), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [1016] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_id,
    STATE(103), 1,
      sym_id_desc,
    STATE(187), 1,
      sym__id_desc_list1,
    ACTIONS(175), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(31), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_defn,
    ACTIONS(169), 10,
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
  [1062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_PIPE,
    STATE(35), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(182), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    STATE(35), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(186), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    STATE(35), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(83), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    STATE(62), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1147] = 8,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(192), 1,
      anon_sym_LT_SLASH,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_string,
    STATE(39), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    ACTIONS(197), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1174] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(12), 1,
      sym_rule_line,
    STATE(59), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1201] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LT_SLASH,
    ACTIONS(206), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(211), 1,
      sym_string,
    STATE(63), 1,
      sym_dots,
    STATE(41), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(208), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1226] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(216), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(220), 1,
      sym_string,
    STATE(63), 1,
      sym_dots,
    STATE(41), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(218), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1251] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(220), 1,
      sym_string,
    ACTIONS(222), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_dots,
    STATE(42), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(218), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1276] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LF,
    STATE(39), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1322] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(220), 1,
      sym_string,
    ACTIONS(228), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_dots,
    STATE(41), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(218), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1347] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(61), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1372] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(220), 1,
      sym_string,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_dots,
    STATE(46), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(218), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1397] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    ACTIONS(236), 1,
      anon_sym_LT_SLASH,
    ACTIONS(240), 1,
      sym_string,
    STATE(66), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1422] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LT_SLASH,
    ACTIONS(240), 1,
      sym_string,
    ACTIONS(242), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_dots,
    STATE(60), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1447] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(13), 1,
      sym_rule_line,
    STATE(59), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    STATE(62), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1512] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(220), 1,
      sym_string,
    ACTIONS(248), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_dots,
    STATE(57), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(218), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(45), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1556] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COLON_COLON,
    ACTIONS(252), 1,
      anon_sym_LT_SLASH,
    ACTIONS(258), 1,
      sym_string,
    STATE(66), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(255), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1581] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    ACTIONS(220), 1,
      sym_string,
    ACTIONS(261), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_dots,
    STATE(41), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(218), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1606] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LT_SLASH,
    ACTIONS(240), 1,
      sym_string,
    ACTIONS(263), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1631] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LF,
    STATE(39), 1,
      aux_sym_rule_line_repeat1,
    STATE(64), 1,
      sym_element,
    STATE(84), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1658] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LT_SLASH,
    ACTIONS(240), 1,
      sym_string,
    ACTIONS(267), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1683] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 1,
      anon_sym_grammar,
    ACTIONS(274), 1,
      anon_sym_embed,
    ACTIONS(277), 1,
      anon_sym_defns,
    ACTIONS(280), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(61), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_defn,
    STATE(62), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(283), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1739] = 3,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(100), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1839] = 3,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(304), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1865] = 3,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(294), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1891] = 3,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1929] = 3,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(298), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1943] = 3,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(300), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1981] = 3,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(296), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1995] = 3,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(288), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(322), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(87), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(322), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(91), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SLASH_GT,
    ACTIONS(328), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(147), 1,
      sym_dots,
    ACTIONS(326), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(65), 1,
      sym_embed,
    STATE(53), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(332), 1,
      anon_sym_by,
    STATE(95), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(334), 1,
      anon_sym_by,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(336), 1,
      anon_sym_by,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(338), 1,
      anon_sym_by,
    STATE(96), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym__id_desc_list1_repeat1,
  [2204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(346), 1,
      sym_string,
    STATE(167), 1,
      sym_comprehension_bound,
  [2217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(350), 1,
      sym_string,
    STATE(100), 1,
      aux_sym_hom_body_repeat1,
  [2230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      sym_id,
    STATE(94), 1,
      sym_namespace_prefix,
  [2243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_id,
    STATE(105), 1,
      sym_id_desc,
    STATE(164), 1,
      sym__id_desc_list1,
  [2256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym__id_desc_list1_repeat1,
  [2269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_tex,
    ACTIONS(365), 1,
      anon_sym_tex_DASHpreamble,
    STATE(115), 1,
      sym_hom_name,
  [2282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(98), 1,
      aux_sym__id_desc_list1_repeat1,
  [2295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      sym_id,
    STATE(97), 1,
      sym_namespace_prefix,
  [2317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(369), 1,
      sym_string,
    STATE(173), 1,
      sym_comprehension_bound,
  [2330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(371), 1,
      sym_string,
    STATE(172), 1,
      sym_comprehension_bound,
  [2343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COLON_COLON,
    ACTIONS(375), 1,
      sym_id,
    STATE(118), 1,
      aux_sym_production_repeat1,
  [2356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(379), 1,
      sym_string,
    STATE(144), 1,
      sym_comprehension_bound,
  [2378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(381), 1,
      sym_string,
    STATE(161), 1,
      sym_comprehension_bound,
  [2391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym__id_desc_list1_repeat1,
  [2404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_string,
    STATE(127), 1,
      aux_sym_hom_body_repeat1,
    STATE(166), 1,
      sym_hom_body,
  [2417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_tex,
    ACTIONS(365), 1,
      anon_sym_tex_DASHpreamble,
    STATE(122), 1,
      sym_hom_name,
  [2430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      sym_id,
    STATE(154), 1,
      sym_namespace_prefix,
  [2443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COLON_COLON,
    ACTIONS(392), 1,
      sym_id,
    STATE(125), 1,
      aux_sym_production_repeat1,
  [2456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym__id_desc_list1_repeat1,
  [2469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(394), 1,
      anon_sym_COLON_COLON,
    STATE(125), 1,
      aux_sym_production_repeat1,
  [2482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_id,
    ACTIONS(396), 1,
      sym_string,
    STATE(181), 1,
      sym_comprehension_bound,
  [2495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_string,
    STATE(127), 1,
      aux_sym_hom_body_repeat1,
    STATE(150), 1,
      sym_hom_body,
  [2508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    ACTIONS(355), 1,
      sym_id,
    STATE(148), 1,
      sym_namespace_prefix,
  [2521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_COLON_COLON,
    ACTIONS(402), 1,
      sym_id,
    STATE(125), 1,
      aux_sym_production_repeat1,
  [2543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COLON_COLON,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym__id_desc_list1_repeat1,
  [2556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_string,
    ACTIONS(408), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(100), 1,
      aux_sym_hom_body_repeat1,
  [2569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_COLON_COLON,
    ACTIONS(412), 1,
      sym_id,
    STATE(120), 1,
      aux_sym_production_repeat1,
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_id,
    STATE(170), 1,
      sym_comprehension_bound,
  [2592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_string,
    STATE(65), 1,
      sym_defnclass,
  [2602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(420), 1,
      sym_string,
  [2612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [2620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SLASH_GT,
    ACTIONS(424), 1,
      anon_sym_IN,
  [2630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      sym_id,
  [2640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_id,
    STATE(186), 1,
      sym_comprehension_bound,
  [2650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(132), 1,
      sym_id_desc,
  [2660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_id,
    STATE(191), 1,
      sym_comprehension_bound,
  [2678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_id,
    STATE(169), 1,
      sym_comprehension_bound,
  [2688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_id,
    STATE(137), 1,
      sym_id_desc,
  [2698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_id,
    STATE(174), 1,
      sym_comprehension_bound,
  [2708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_id,
    STATE(175), 1,
      sym_comprehension_bound,
  [2718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_string,
  [2725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SLASH_GT,
  [2732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_COLON_COLON,
  [2739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_SQUOTE,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_id,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON_EQ,
  [2760] = 2,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LF,
  [2767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACE_RBRACE,
  [2774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_string,
  [2781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COLON_COLON,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_string,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_COLON_COLON_EQ,
  [2802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_string,
  [2809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SLASH_SLASH,
  [2816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COLON_COLON,
  [2823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_id,
  [2830] = 2,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LF,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_string,
  [2844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH_GT,
  [2851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COLON_COLON,
  [2858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_string,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_COLON_COLON_EQ,
  [2872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_COLON_COLON,
  [2879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACE_RBRACE,
  [2886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SLASH_GT,
  [2893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_string,
  [2900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SLASH_GT,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SLASH_GT,
  [2914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON_COLON,
  [2921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SLASH_GT,
  [2928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SLASH_GT,
  [2935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SLASH_GT,
  [2942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_SLASH_GT,
  [2949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_id,
  [2956] = 2,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_dash_line_token1,
  [2963] = 2,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LF,
  [2970] = 2,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LF,
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SLASH_SLASH,
  [2984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SLASH_GT,
  [2991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_SLASH_GT,
  [2998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_string,
  [3005] = 2,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LF,
  [3012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COLON_COLON,
  [3019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_SLASH_GT,
  [3026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_COLON_COLON,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH,
  [3040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SLASH_SLASH,
  [3047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_SLASH_GT,
  [3061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SLASH_SLASH,
  [3068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
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
  [SMALL_STATE(12)] = 505,
  [SMALL_STATE(13)] = 526,
  [SMALL_STATE(14)] = 547,
  [SMALL_STATE(15)] = 576,
  [SMALL_STATE(16)] = 601,
  [SMALL_STATE(17)] = 630,
  [SMALL_STATE(18)] = 651,
  [SMALL_STATE(19)] = 676,
  [SMALL_STATE(20)] = 702,
  [SMALL_STATE(21)] = 728,
  [SMALL_STATE(22)] = 751,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 797,
  [SMALL_STATE(25)] = 820,
  [SMALL_STATE(26)] = 843,
  [SMALL_STATE(27)] = 866,
  [SMALL_STATE(28)] = 893,
  [SMALL_STATE(29)] = 916,
  [SMALL_STATE(30)] = 939,
  [SMALL_STATE(31)] = 970,
  [SMALL_STATE(32)] = 997,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1043,
  [SMALL_STATE(35)] = 1062,
  [SMALL_STATE(36)] = 1084,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1128,
  [SMALL_STATE(39)] = 1147,
  [SMALL_STATE(40)] = 1174,
  [SMALL_STATE(41)] = 1201,
  [SMALL_STATE(42)] = 1226,
  [SMALL_STATE(43)] = 1251,
  [SMALL_STATE(44)] = 1276,
  [SMALL_STATE(45)] = 1303,
  [SMALL_STATE(46)] = 1322,
  [SMALL_STATE(47)] = 1347,
  [SMALL_STATE(48)] = 1372,
  [SMALL_STATE(49)] = 1397,
  [SMALL_STATE(50)] = 1422,
  [SMALL_STATE(51)] = 1447,
  [SMALL_STATE(52)] = 1474,
  [SMALL_STATE(53)] = 1493,
  [SMALL_STATE(54)] = 1512,
  [SMALL_STATE(55)] = 1537,
  [SMALL_STATE(56)] = 1556,
  [SMALL_STATE(57)] = 1581,
  [SMALL_STATE(58)] = 1606,
  [SMALL_STATE(59)] = 1631,
  [SMALL_STATE(60)] = 1658,
  [SMALL_STATE(61)] = 1683,
  [SMALL_STATE(62)] = 1708,
  [SMALL_STATE(63)] = 1727,
  [SMALL_STATE(64)] = 1739,
  [SMALL_STATE(65)] = 1753,
  [SMALL_STATE(66)] = 1765,
  [SMALL_STATE(67)] = 1777,
  [SMALL_STATE(68)] = 1789,
  [SMALL_STATE(69)] = 1801,
  [SMALL_STATE(70)] = 1815,
  [SMALL_STATE(71)] = 1827,
  [SMALL_STATE(72)] = 1839,
  [SMALL_STATE(73)] = 1853,
  [SMALL_STATE(74)] = 1865,
  [SMALL_STATE(75)] = 1879,
  [SMALL_STATE(76)] = 1891,
  [SMALL_STATE(77)] = 1905,
  [SMALL_STATE(78)] = 1917,
  [SMALL_STATE(79)] = 1929,
  [SMALL_STATE(80)] = 1943,
  [SMALL_STATE(81)] = 1957,
  [SMALL_STATE(82)] = 1969,
  [SMALL_STATE(83)] = 1981,
  [SMALL_STATE(84)] = 1995,
  [SMALL_STATE(85)] = 2009,
  [SMALL_STATE(86)] = 2021,
  [SMALL_STATE(87)] = 2033,
  [SMALL_STATE(88)] = 2048,
  [SMALL_STATE(89)] = 2063,
  [SMALL_STATE(90)] = 2078,
  [SMALL_STATE(91)] = 2095,
  [SMALL_STATE(92)] = 2110,
  [SMALL_STATE(93)] = 2121,
  [SMALL_STATE(94)] = 2135,
  [SMALL_STATE(95)] = 2149,
  [SMALL_STATE(96)] = 2163,
  [SMALL_STATE(97)] = 2177,
  [SMALL_STATE(98)] = 2191,
  [SMALL_STATE(99)] = 2204,
  [SMALL_STATE(100)] = 2217,
  [SMALL_STATE(101)] = 2230,
  [SMALL_STATE(102)] = 2243,
  [SMALL_STATE(103)] = 2256,
  [SMALL_STATE(104)] = 2269,
  [SMALL_STATE(105)] = 2282,
  [SMALL_STATE(106)] = 2295,
  [SMALL_STATE(107)] = 2304,
  [SMALL_STATE(108)] = 2317,
  [SMALL_STATE(109)] = 2330,
  [SMALL_STATE(110)] = 2343,
  [SMALL_STATE(111)] = 2356,
  [SMALL_STATE(112)] = 2365,
  [SMALL_STATE(113)] = 2378,
  [SMALL_STATE(114)] = 2391,
  [SMALL_STATE(115)] = 2404,
  [SMALL_STATE(116)] = 2417,
  [SMALL_STATE(117)] = 2430,
  [SMALL_STATE(118)] = 2443,
  [SMALL_STATE(119)] = 2456,
  [SMALL_STATE(120)] = 2469,
  [SMALL_STATE(121)] = 2482,
  [SMALL_STATE(122)] = 2495,
  [SMALL_STATE(123)] = 2508,
  [SMALL_STATE(124)] = 2521,
  [SMALL_STATE(125)] = 2530,
  [SMALL_STATE(126)] = 2543,
  [SMALL_STATE(127)] = 2556,
  [SMALL_STATE(128)] = 2569,
  [SMALL_STATE(129)] = 2582,
  [SMALL_STATE(130)] = 2592,
  [SMALL_STATE(131)] = 2602,
  [SMALL_STATE(132)] = 2612,
  [SMALL_STATE(133)] = 2620,
  [SMALL_STATE(134)] = 2630,
  [SMALL_STATE(135)] = 2640,
  [SMALL_STATE(136)] = 2650,
  [SMALL_STATE(137)] = 2660,
  [SMALL_STATE(138)] = 2668,
  [SMALL_STATE(139)] = 2678,
  [SMALL_STATE(140)] = 2688,
  [SMALL_STATE(141)] = 2698,
  [SMALL_STATE(142)] = 2708,
  [SMALL_STATE(143)] = 2718,
  [SMALL_STATE(144)] = 2725,
  [SMALL_STATE(145)] = 2732,
  [SMALL_STATE(146)] = 2739,
  [SMALL_STATE(147)] = 2746,
  [SMALL_STATE(148)] = 2753,
  [SMALL_STATE(149)] = 2760,
  [SMALL_STATE(150)] = 2767,
  [SMALL_STATE(151)] = 2774,
  [SMALL_STATE(152)] = 2781,
  [SMALL_STATE(153)] = 2788,
  [SMALL_STATE(154)] = 2795,
  [SMALL_STATE(155)] = 2802,
  [SMALL_STATE(156)] = 2809,
  [SMALL_STATE(157)] = 2816,
  [SMALL_STATE(158)] = 2823,
  [SMALL_STATE(159)] = 2830,
  [SMALL_STATE(160)] = 2837,
  [SMALL_STATE(161)] = 2844,
  [SMALL_STATE(162)] = 2851,
  [SMALL_STATE(163)] = 2858,
  [SMALL_STATE(164)] = 2865,
  [SMALL_STATE(165)] = 2872,
  [SMALL_STATE(166)] = 2879,
  [SMALL_STATE(167)] = 2886,
  [SMALL_STATE(168)] = 2893,
  [SMALL_STATE(169)] = 2900,
  [SMALL_STATE(170)] = 2907,
  [SMALL_STATE(171)] = 2914,
  [SMALL_STATE(172)] = 2921,
  [SMALL_STATE(173)] = 2928,
  [SMALL_STATE(174)] = 2935,
  [SMALL_STATE(175)] = 2942,
  [SMALL_STATE(176)] = 2949,
  [SMALL_STATE(177)] = 2956,
  [SMALL_STATE(178)] = 2963,
  [SMALL_STATE(179)] = 2970,
  [SMALL_STATE(180)] = 2977,
  [SMALL_STATE(181)] = 2984,
  [SMALL_STATE(182)] = 2991,
  [SMALL_STATE(183)] = 2998,
  [SMALL_STATE(184)] = 3005,
  [SMALL_STATE(185)] = 3012,
  [SMALL_STATE(186)] = 3019,
  [SMALL_STATE(187)] = 3026,
  [SMALL_STATE(188)] = 3033,
  [SMALL_STATE(189)] = 3040,
  [SMALL_STATE(190)] = 3047,
  [SMALL_STATE(191)] = 3054,
  [SMALL_STATE(192)] = 3061,
  [SMALL_STATE(193)] = 3068,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 25),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 20),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 20),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 21),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 21),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 22),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 22),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(177),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(43),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 24),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 24),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 26),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 26),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 28),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 28),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 18),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 18),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 23),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 23),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 27),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 27),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 10),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 10),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 16),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 16),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 14),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 14),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 17),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 17),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 13),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 13),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 12),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 11),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 11),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 15),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 15),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(50),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 19),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 19),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 8),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 8),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 29),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_body, 1, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [524] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
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
