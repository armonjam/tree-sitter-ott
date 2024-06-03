#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 11
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 36

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
  sym_defnclass_name = 33,
  sym_defn = 34,
  sym_defn_name = 35,
  sym_defn_rule = 36,
  sym_rule_separator = 37,
  sym_rule_name = 38,
  sym_dash_line = 39,
  sym_rule_line = 40,
  sym_grammar_rule = 41,
  sym_production = 42,
  sym_production_mod = 43,
  sym_production_name = 44,
  sym_element = 45,
  sym_metavardefn = 46,
  sym__id_desc_list1 = 47,
  sym_id_desc = 48,
  sym_comprehension_bound = 49,
  sym_embed = 50,
  sym_homomorphism = 51,
  sym_hom_name = 52,
  sym_dots = 53,
  sym_namespace_prefix = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym__item_repeat1 = 56,
  aux_sym_defnclass_repeat1 = 57,
  aux_sym_defnclass_repeat2 = 58,
  aux_sym_defn_repeat1 = 59,
  aux_sym_defn_repeat2 = 60,
  aux_sym_defn_rule_repeat1 = 61,
  aux_sym_rule_line_repeat1 = 62,
  aux_sym_grammar_rule_repeat1 = 63,
  aux_sym_production_repeat1 = 64,
  aux_sym__id_desc_list1_repeat1 = 65,
  aux_sym_homomorphism_repeat1 = 66,
  anon_alias_sym_defn_name = 67,
  anon_alias_sym_defnclass_name = 68,
  anon_alias_sym_element = 69,
  alias_sym_hom_body = 70,
  anon_alias_sym_hom_string = 71,
  anon_alias_sym_id = 72,
  anon_alias_sym_production_modifier = 73,
  anon_alias_sym_production_name = 74,
  anon_alias_sym_q_id = 75,
  anon_alias_sym_rule_name = 76,
  anon_alias_sym_symbol = 77,
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
  [sym_defnclass_name] = "defnclass_name",
  [sym_defn] = "defn",
  [sym_defn_name] = "defn_name",
  [sym_defn_rule] = "defn_rule",
  [sym_rule_separator] = "rule_separator",
  [sym_rule_name] = "rule_name",
  [sym_dash_line] = "dash_line",
  [sym_rule_line] = "rule_line",
  [sym_grammar_rule] = "grammar_rule",
  [sym_production] = "production",
  [sym_production_mod] = "production_mod",
  [sym_production_name] = "production_name",
  [sym_element] = "element",
  [sym_metavardefn] = "metavardefn",
  [sym__id_desc_list1] = "_id_desc_list1",
  [sym_id_desc] = "id_desc",
  [sym_comprehension_bound] = "comprehension_bound",
  [sym_embed] = "embed",
  [sym_homomorphism] = "homomorphism",
  [sym_hom_name] = "hom_name",
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
  [aux_sym_homomorphism_repeat1] = "homomorphism_repeat1",
  [anon_alias_sym_defn_name] = "defn_name",
  [anon_alias_sym_defnclass_name] = "defnclass_name",
  [anon_alias_sym_element] = "element",
  [alias_sym_hom_body] = "hom_body",
  [anon_alias_sym_hom_string] = "hom_string",
  [anon_alias_sym_id] = "id",
  [anon_alias_sym_production_modifier] = "production_modifier",
  [anon_alias_sym_production_name] = "production_name",
  [anon_alias_sym_q_id] = "q_id",
  [anon_alias_sym_rule_name] = "rule_name",
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
  [sym_defnclass_name] = sym_defnclass_name,
  [sym_defn] = sym_defn,
  [sym_defn_name] = sym_defn_name,
  [sym_defn_rule] = sym_defn_rule,
  [sym_rule_separator] = sym_rule_separator,
  [sym_rule_name] = sym_rule_name,
  [sym_dash_line] = sym_dash_line,
  [sym_rule_line] = sym_rule_line,
  [sym_grammar_rule] = sym_grammar_rule,
  [sym_production] = sym_production,
  [sym_production_mod] = sym_production_mod,
  [sym_production_name] = sym_production_name,
  [sym_element] = sym_element,
  [sym_metavardefn] = sym_metavardefn,
  [sym__id_desc_list1] = sym__id_desc_list1,
  [sym_id_desc] = sym_id_desc,
  [sym_comprehension_bound] = sym_comprehension_bound,
  [sym_embed] = sym_embed,
  [sym_homomorphism] = sym_homomorphism,
  [sym_hom_name] = sym_hom_name,
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
  [aux_sym_homomorphism_repeat1] = aux_sym_homomorphism_repeat1,
  [anon_alias_sym_defn_name] = anon_alias_sym_defn_name,
  [anon_alias_sym_defnclass_name] = anon_alias_sym_defnclass_name,
  [anon_alias_sym_element] = anon_alias_sym_element,
  [alias_sym_hom_body] = alias_sym_hom_body,
  [anon_alias_sym_hom_string] = anon_alias_sym_hom_string,
  [anon_alias_sym_id] = anon_alias_sym_id,
  [anon_alias_sym_production_modifier] = anon_alias_sym_production_modifier,
  [anon_alias_sym_production_name] = anon_alias_sym_production_name,
  [anon_alias_sym_q_id] = anon_alias_sym_q_id,
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
  [sym_defnclass_name] = {
    .visible = true,
    .named = true,
  },
  [sym_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_defn_name] = {
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
  [sym_rule_name] = {
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
  [sym_production_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_production_name] = {
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
  [aux_sym_homomorphism_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_defn_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_defnclass_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_element] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_hom_body] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_hom_string] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_production_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_production_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_q_id] = {
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
  [3] = {.index = 0, .length = 3},
  [5] = {.index = 3, .length = 4},
  [6] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 3},
  [11] = {.index = 15, .length = 4},
  [14] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 3},
  [20] = {.index = 29, .length = 3},
  [21] = {.index = 32, .length = 3},
  [22] = {.index = 35, .length = 4},
  [23] = {.index = 39, .length = 2},
  [25] = {.index = 41, .length = 3},
  [26] = {.index = 44, .length = 3},
  [27] = {.index = 47, .length = 3},
  [28] = {.index = 50, .length = 2},
  [29] = {.index = 52, .length = 4},
  [30] = {.index = 56, .length = 4},
  [31] = {.index = 60, .length = 4},
  [33] = {.index = 64, .length = 3},
  [34] = {.index = 67, .length = 5},
  [35] = {.index = 72, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 2},
    {field_name, 1},
    {field_open, 0},
  [3] =
    {field_body, 2},
    {field_close, 3},
    {field_name, 1},
    {field_open, 0},
  [7] =
    {field_class_name, 0},
    {field_namespace_prefix, 2},
  [9] =
    {field_class_name, 0},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [12] =
    {field_class_name, 0},
    {field_definition, 4},
    {field_namespace_prefix, 2},
  [15] =
    {field_class_name, 0},
    {field_definition, 5},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [19] =
    {field_production_name, 3},
  [20] =
    {field_homomorphism, 4},
    {field_production_name, 3},
  [22] =
    {field_modifier, 2},
    {field_production_name, 4},
  [24] =
    {field_element, 1},
    {field_production_name, 4},
  [26] =
    {field_homomorphism, 5},
    {field_modifier, 2},
    {field_production_name, 4},
  [29] =
    {field_element, 1},
    {field_homomorphism, 5},
    {field_production_name, 4},
  [32] =
    {field_element, 1},
    {field_modifier, 3},
    {field_production_name, 5},
  [35] =
    {field_element, 1},
    {field_homomorphism, 6},
    {field_modifier, 3},
    {field_production_name, 5},
  [39] =
    {field_definition_name, 3},
    {field_namespace_prefix, 5},
  [41] =
    {field_definition_name, 3},
    {field_definition_rule, 8},
    {field_namespace_prefix, 5},
  [44] =
    {field_definition_name, 3},
    {field_homomorphism, 6},
    {field_namespace_prefix, 5},
  [47] =
    {field_definition_name, 4},
    {field_element, 1},
    {field_namespace_prefix, 6},
  [50] =
    {field_conclusion, 1},
    {field_separator, 0},
  [52] =
    {field_definition_name, 3},
    {field_definition_rule, 9},
    {field_homomorphism, 6},
    {field_namespace_prefix, 5},
  [56] =
    {field_definition_name, 4},
    {field_definition_rule, 9},
    {field_element, 1},
    {field_namespace_prefix, 6},
  [60] =
    {field_definition_name, 4},
    {field_element, 1},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [64] =
    {field_conclusion, 2},
    {field_premise, 0},
    {field_separator, 1},
  [67] =
    {field_definition_name, 4},
    {field_definition_rule, 10},
    {field_element, 1},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [72] =
    {field_line, 0},
    {field_rule_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_defnclass_name,
  },
  [2] = {
    [0] = anon_alias_sym_id,
  },
  [4] = {
    [0] = anon_alias_sym_hom_string,
  },
  [5] = {
    [2] = alias_sym_hom_body,
  },
  [7] = {
    [1] = anon_alias_sym_q_id,
  },
  [10] = {
    [0] = anon_alias_sym_symbol,
  },
  [12] = {
    [0] = anon_alias_sym_production_modifier,
  },
  [13] = {
    [0] = anon_alias_sym_production_name,
  },
  [15] = {
    [0] = anon_alias_sym_defn_name,
  },
  [24] = {
    [0] = anon_alias_sym_element,
  },
  [32] = {
    [0] = anon_alias_sym_rule_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_element, 2,
    sym_element,
    anon_alias_sym_element,
  aux_sym_homomorphism_repeat1, 2,
    aux_sym_homomorphism_repeat1,
    alias_sym_hom_body,
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
  [30] = 11,
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
  [44] = 20,
  [45] = 45,
  [46] = 21,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 40,
  [55] = 41,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 50,
  [60] = 40,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 43,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 13,
  [70] = 67,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 71,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 68,
  [79] = 67,
  [80] = 80,
  [81] = 71,
  [82] = 82,
  [83] = 66,
  [84] = 68,
  [85] = 76,
  [86] = 80,
  [87] = 76,
  [88] = 80,
  [89] = 66,
  [90] = 82,
  [91] = 82,
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
  [114] = 109,
  [115] = 107,
  [116] = 116,
  [117] = 112,
  [118] = 118,
  [119] = 119,
  [120] = 109,
  [121] = 121,
  [122] = 118,
  [123] = 123,
  [124] = 124,
  [125] = 112,
  [126] = 126,
  [127] = 111,
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
  [139] = 135,
  [140] = 136,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 136,
  [146] = 135,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 150,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 68,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 149,
  [169] = 157,
  [170] = 170,
  [171] = 171,
  [172] = 167,
  [173] = 149,
  [174] = 157,
  [175] = 150,
  [176] = 176,
  [177] = 167,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 178,
  [188] = 161,
  [189] = 189,
  [190] = 190,
  [191] = 178,
  [192] = 161,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '%', 94,
        '\'', 101,
        ',', 87,
        '-', 12,
        '.', 13,
        '/', 14,
        ':', 16,
        '<', 15,
        'I', 20,
        'b', 57,
        'd', 31,
        'e', 40,
        'g', 47,
        'i', 44,
        'm', 32,
        't', 33,
        '{', 58,
        '|', 75,
        '}', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '<') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == ':') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == '{') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '<') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '<') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '<') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == '<') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '}') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(88);
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
      if (lookahead == 'e') ADVANCE(92);
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
      if (lookahead == 'n') ADVANCE(70);
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
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(84);
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
      if (lookahead == 'x') ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == '{') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '%', 94,
        ':', 17,
        'd', 110,
        'e', 115,
        'g', 121,
        'i', 118,
        'm', 111,
        '{', 58,
        '|', 75,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '%', 93,
        '-', 133,
        '.', 134,
        '<', 135,
        'd', 146,
        'e', 151,
        'g', 157,
        'i', 155,
        'm', 147,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (lookahead != 0) ADVANCE(165);
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
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_tex);
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_tex_DASHpreamble);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(165);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 60},
  [27] = {.lex_state = 60},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 60},
  [31] = {.lex_state = 60},
  [32] = {.lex_state = 60},
  [33] = {.lex_state = 60},
  [34] = {.lex_state = 60},
  [35] = {.lex_state = 60},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 60},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 60},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 60},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 74},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 60},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 60},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_embed] = ACTIONS(1),
    [anon_sym_defns] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(176),
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
    ACTIONS(22), 1,
      anon_sym_LT_SLASH,
    ACTIONS(28), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(57), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(17), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(25), 3,
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
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(57), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(5), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(33), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [104] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(57), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(45), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [156] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(57), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(49), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [208] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(57), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(39), 3,
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
  [260] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(57), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(39), 3,
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
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(57), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(39), 3,
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
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(57), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(39), 3,
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
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(57), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(39), 3,
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
  [468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(73), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [494] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(49), 1,
      sym_rule_separator,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(181), 1,
      sym_dash_line,
    STATE(22), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(80), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(84), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [573] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(35), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(90), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [602] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(36), 2,
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
  [631] = 3,
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
  [652] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(19), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(42), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(63), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    ACTIONS(110), 10,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [744] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(120), 1,
      anon_sym_LT_SLASH,
    ACTIONS(126), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    STATE(22), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(123), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [775] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
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
  [798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
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
  [821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
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
  [844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
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
  [867] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_id,
    STATE(100), 1,
      sym_id_desc,
    STATE(182), 1,
      sym__id_desc_list1,
    ACTIONS(147), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(27), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [894] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(154), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [917] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(158), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(73), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(165), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [986] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_id,
    STATE(100), 1,
      sym_id_desc,
    STATE(182), 1,
      sym__id_desc_list1,
    ACTIONS(169), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(27), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(31), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(175), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1036] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_id,
    STATE(100), 1,
      sym_id_desc,
    STATE(182), 1,
      sym__id_desc_list1,
    ACTIONS(179), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(32), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1063] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_PIPE,
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
  [1085] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    STATE(37), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(183), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    STATE(37), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(190), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1129] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COLON_COLON,
    ACTIONS(194), 1,
      anon_sym_LT_SLASH,
    ACTIONS(198), 1,
      sym_string,
    STATE(71), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(196), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(206), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(210), 1,
      sym_string,
    STATE(81), 1,
      sym_dots,
    STATE(50), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(208), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1196] = 8,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(64), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1242] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LT_SLASH,
    ACTIONS(221), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(226), 1,
      sym_string,
    STATE(81), 1,
      sym_dots,
    STATE(43), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(223), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1320] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(56), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1345] = 8,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LF,
    ACTIONS(235), 1,
      anon_sym_LT_SLASH,
    ACTIONS(241), 1,
      sym_string,
    STATE(48), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1372] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(17), 1,
      sym_rule_line,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1399] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(210), 1,
      sym_string,
    ACTIONS(244), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_dots,
    STATE(43), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(208), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1424] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(210), 1,
      sym_string,
    ACTIONS(246), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_dots,
    STATE(43), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(208), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(45), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1487] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(210), 1,
      sym_string,
    ACTIONS(252), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_dots,
    STATE(51), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(208), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1512] = 8,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LF,
    STATE(48), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1539] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      anon_sym_grammar,
    ACTIONS(261), 1,
      anon_sym_embed,
    ACTIONS(264), 1,
      anon_sym_defns,
    ACTIONS(267), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(56), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1564] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(14), 1,
      sym_rule_line,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(74), 1,
      sym_dots,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1591] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LT_SLASH,
    ACTIONS(198), 1,
      sym_string,
    ACTIONS(270), 1,
      anon_sym_COLON_COLON,
    STATE(71), 1,
      sym_dots,
    STATE(65), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(196), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1616] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(210), 1,
      sym_string,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_dots,
    STATE(43), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(208), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1641] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(210), 1,
      sym_string,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_dots,
    STATE(59), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(208), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1666] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LT_SLASH,
    ACTIONS(198), 1,
      sym_string,
    ACTIONS(276), 1,
      anon_sym_COLON_COLON,
    STATE(71), 1,
      sym_dots,
    STATE(62), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(196), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1691] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LT_SLASH,
    ACTIONS(198), 1,
      sym_string,
    ACTIONS(278), 1,
      anon_sym_COLON_COLON,
    STATE(71), 1,
      sym_dots,
    STATE(65), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(196), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(64), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_defn,
    STATE(64), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(282), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1754] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      anon_sym_LT_SLASH,
    ACTIONS(293), 1,
      sym_string,
    STATE(71), 1,
      sym_dots,
    STATE(65), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(290), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(80), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1853] = 3,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(308), 1,
      anon_sym_COLON_COLON,
    ACTIONS(310), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(75), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1885] = 3,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(302), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1899] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(314), 1,
      anon_sym_COLON_COLON,
    ACTIONS(316), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1953] = 3,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(298), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2015] = 3,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(300), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2029] = 3,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(318), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2067] = 3,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(322), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2081] = 3,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(296), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2107] = 3,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(324), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SLASH_GT,
    ACTIONS(342), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(156), 1,
      sym_dots,
    ACTIONS(340), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(344), 1,
      anon_sym_by,
    STATE(103), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(346), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COLON_COLON,
    ACTIONS(350), 1,
      sym_id,
    STATE(97), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_id,
    ACTIONS(352), 1,
      anon_sym_COLON_COLON,
    STATE(105), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_id,
    ACTIONS(354), 1,
      anon_sym_COLON_COLON,
    STATE(106), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2219] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COLON_COLON,
    ACTIONS(358), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym__id_desc_list1_repeat1,
  [2235] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_COLON_COLON,
    ACTIONS(365), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym__id_desc_list1_repeat1,
  [2251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(77), 1,
      sym_embed,
    STATE(53), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_COLON_COLON,
    ACTIONS(371), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(99), 1,
      aux_sym__id_desc_list1_repeat1,
  [2281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(373), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_by,
    STATE(95), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COLON_COLON,
    ACTIONS(379), 1,
      sym_id,
    STATE(105), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_id,
    ACTIONS(382), 1,
      anon_sym_COLON_COLON,
    STATE(105), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(386), 1,
      sym_string,
    STATE(118), 1,
      aux_sym_homomorphism_repeat1,
  [2350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      sym_id,
    STATE(94), 1,
      sym_namespace_prefix,
  [2363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(394), 1,
      sym_string,
    STATE(149), 1,
      sym_comprehension_bound,
  [2376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      sym_id,
    STATE(189), 1,
      sym_namespace_prefix,
  [2389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_tex,
    ACTIONS(398), 1,
      anon_sym_tex_DASHpreamble,
    STATE(107), 1,
      sym_hom_name,
  [2402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(400), 1,
      sym_string,
    STATE(167), 1,
      sym_comprehension_bound,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(404), 1,
      sym_string,
    STATE(168), 1,
      sym_comprehension_bound,
  [2437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_string,
    ACTIONS(406), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(122), 1,
      aux_sym_homomorphism_repeat1,
  [2450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_id,
    STATE(100), 1,
      sym_id_desc,
    STATE(183), 1,
      sym__id_desc_list1,
  [2463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(410), 1,
      sym_string,
    STATE(172), 1,
      sym_comprehension_bound,
  [2476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_string,
    ACTIONS(412), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(119), 1,
      aux_sym_homomorphism_repeat1,
  [2489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(416), 1,
      sym_string,
    STATE(119), 1,
      aux_sym_homomorphism_repeat1,
  [2502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(419), 1,
      sym_string,
    STATE(173), 1,
      sym_comprehension_bound,
  [2515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      sym_id,
    STATE(155), 1,
      sym_namespace_prefix,
  [2528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_string,
    ACTIONS(421), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(119), 1,
      aux_sym_homomorphism_repeat1,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(427), 1,
      sym_string,
    STATE(177), 1,
      sym_comprehension_bound,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_id,
    STATE(77), 1,
      sym_defnclass,
    STATE(184), 1,
      sym_defnclass_name,
  [2585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_tex,
    ACTIONS(398), 1,
      anon_sym_tex_DASHpreamble,
    STATE(115), 1,
      sym_hom_name,
  [2598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      sym_id,
    STATE(104), 1,
      sym_namespace_prefix,
  [2611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COLON_COLON,
    ACTIONS(358), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(433), 1,
      sym_string,
  [2632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_id,
    STATE(129), 1,
      sym_id_desc,
  [2642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_COLON_COLON,
      sym_id,
  [2650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_id,
    STATE(33), 1,
      sym_production_name,
  [2660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_id,
    STATE(165), 1,
      sym_defn_name,
  [2670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(175), 1,
      sym_comprehension_bound,
  [2680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(174), 1,
      sym_comprehension_bound,
  [2690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_id,
    STATE(29), 1,
      sym_production_name,
  [2700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SLASH_GT,
    ACTIONS(445), 1,
      anon_sym_IN,
  [2710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(150), 1,
      sym_comprehension_bound,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(169), 1,
      sym_comprehension_bound,
  [2730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_id,
    STATE(28), 1,
      sym_production_name,
  [2740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    ACTIONS(449), 1,
      sym_id,
  [2750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(453), 1,
      sym_string,
  [2760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_id,
    STATE(160), 1,
      sym_defn_name,
  [2770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(157), 1,
      sym_comprehension_bound,
  [2780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_id,
    STATE(154), 1,
      sym_comprehension_bound,
  [2790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_id,
    STATE(24), 1,
      sym_production_name,
  [2800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_id,
    STATE(179), 1,
      sym_rule_name,
  [2810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SLASH_GT,
  [2817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SLASH_GT,
  [2824] = 2,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_LF,
  [2831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SLASH_GT,
  [2838] = 2,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LF,
  [2845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_SLASH_GT,
  [2852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON_COLON_EQ,
  [2859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_id,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_SLASH_GT,
  [2873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COLON_COLON,
  [2880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_id,
  [2887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_COLON_COLON,
  [2894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_COLON_COLON,
  [2908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_id,
  [2915] = 2,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
  [2922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COLON_COLON,
  [2929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COLON_COLON,
  [2936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SLASH_GT,
  [2943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_SLASH_GT,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_SLASH_GT,
  [2957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
  [2964] = 2,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_dash_line_token1,
  [2971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_SLASH_GT,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_SLASH_GT,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_SLASH_GT,
  [2992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SLASH_GT,
  [2999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
  [3006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SLASH_GT,
  [3013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_SLASH_SLASH,
  [3020] = 2,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LF,
  [3027] = 2,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_LF,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_COLON_COLON,
  [3041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COLON_COLON,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COLON_COLON_EQ,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COLON_COLON,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_COLON_COLON,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_COLON_COLON,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_SLASH_SLASH,
  [3083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SLASH_SLASH,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON_COLON_EQ,
  [3097] = 2,
    ACTIONS(214), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_LF,
  [3104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SLASH_SLASH,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
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
  [SMALL_STATE(12)] = 494,
  [SMALL_STATE(13)] = 531,
  [SMALL_STATE(14)] = 552,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 602,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 678,
  [SMALL_STATE(20)] = 704,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 744,
  [SMALL_STATE(23)] = 775,
  [SMALL_STATE(24)] = 798,
  [SMALL_STATE(25)] = 821,
  [SMALL_STATE(26)] = 844,
  [SMALL_STATE(27)] = 867,
  [SMALL_STATE(28)] = 894,
  [SMALL_STATE(29)] = 917,
  [SMALL_STATE(30)] = 940,
  [SMALL_STATE(31)] = 963,
  [SMALL_STATE(32)] = 986,
  [SMALL_STATE(33)] = 1013,
  [SMALL_STATE(34)] = 1036,
  [SMALL_STATE(35)] = 1063,
  [SMALL_STATE(36)] = 1085,
  [SMALL_STATE(37)] = 1107,
  [SMALL_STATE(38)] = 1129,
  [SMALL_STATE(39)] = 1154,
  [SMALL_STATE(40)] = 1171,
  [SMALL_STATE(41)] = 1196,
  [SMALL_STATE(42)] = 1223,
  [SMALL_STATE(43)] = 1242,
  [SMALL_STATE(44)] = 1267,
  [SMALL_STATE(45)] = 1284,
  [SMALL_STATE(46)] = 1303,
  [SMALL_STATE(47)] = 1320,
  [SMALL_STATE(48)] = 1345,
  [SMALL_STATE(49)] = 1372,
  [SMALL_STATE(50)] = 1399,
  [SMALL_STATE(51)] = 1424,
  [SMALL_STATE(52)] = 1449,
  [SMALL_STATE(53)] = 1468,
  [SMALL_STATE(54)] = 1487,
  [SMALL_STATE(55)] = 1512,
  [SMALL_STATE(56)] = 1539,
  [SMALL_STATE(57)] = 1564,
  [SMALL_STATE(58)] = 1591,
  [SMALL_STATE(59)] = 1616,
  [SMALL_STATE(60)] = 1641,
  [SMALL_STATE(61)] = 1666,
  [SMALL_STATE(62)] = 1691,
  [SMALL_STATE(63)] = 1716,
  [SMALL_STATE(64)] = 1735,
  [SMALL_STATE(65)] = 1754,
  [SMALL_STATE(66)] = 1779,
  [SMALL_STATE(67)] = 1791,
  [SMALL_STATE(68)] = 1803,
  [SMALL_STATE(69)] = 1815,
  [SMALL_STATE(70)] = 1829,
  [SMALL_STATE(71)] = 1841,
  [SMALL_STATE(72)] = 1853,
  [SMALL_STATE(73)] = 1867,
  [SMALL_STATE(74)] = 1885,
  [SMALL_STATE(75)] = 1899,
  [SMALL_STATE(76)] = 1917,
  [SMALL_STATE(77)] = 1929,
  [SMALL_STATE(78)] = 1941,
  [SMALL_STATE(79)] = 1953,
  [SMALL_STATE(80)] = 1967,
  [SMALL_STATE(81)] = 1979,
  [SMALL_STATE(82)] = 1991,
  [SMALL_STATE(83)] = 2003,
  [SMALL_STATE(84)] = 2015,
  [SMALL_STATE(85)] = 2029,
  [SMALL_STATE(86)] = 2043,
  [SMALL_STATE(87)] = 2055,
  [SMALL_STATE(88)] = 2067,
  [SMALL_STATE(89)] = 2081,
  [SMALL_STATE(90)] = 2095,
  [SMALL_STATE(91)] = 2107,
  [SMALL_STATE(92)] = 2121,
  [SMALL_STATE(93)] = 2132,
  [SMALL_STATE(94)] = 2149,
  [SMALL_STATE(95)] = 2163,
  [SMALL_STATE(96)] = 2177,
  [SMALL_STATE(97)] = 2191,
  [SMALL_STATE(98)] = 2205,
  [SMALL_STATE(99)] = 2219,
  [SMALL_STATE(100)] = 2235,
  [SMALL_STATE(101)] = 2251,
  [SMALL_STATE(102)] = 2265,
  [SMALL_STATE(103)] = 2281,
  [SMALL_STATE(104)] = 2295,
  [SMALL_STATE(105)] = 2309,
  [SMALL_STATE(106)] = 2323,
  [SMALL_STATE(107)] = 2337,
  [SMALL_STATE(108)] = 2350,
  [SMALL_STATE(109)] = 2363,
  [SMALL_STATE(110)] = 2376,
  [SMALL_STATE(111)] = 2389,
  [SMALL_STATE(112)] = 2402,
  [SMALL_STATE(113)] = 2415,
  [SMALL_STATE(114)] = 2424,
  [SMALL_STATE(115)] = 2437,
  [SMALL_STATE(116)] = 2450,
  [SMALL_STATE(117)] = 2463,
  [SMALL_STATE(118)] = 2476,
  [SMALL_STATE(119)] = 2489,
  [SMALL_STATE(120)] = 2502,
  [SMALL_STATE(121)] = 2515,
  [SMALL_STATE(122)] = 2528,
  [SMALL_STATE(123)] = 2541,
  [SMALL_STATE(124)] = 2550,
  [SMALL_STATE(125)] = 2559,
  [SMALL_STATE(126)] = 2572,
  [SMALL_STATE(127)] = 2585,
  [SMALL_STATE(128)] = 2598,
  [SMALL_STATE(129)] = 2611,
  [SMALL_STATE(130)] = 2622,
  [SMALL_STATE(131)] = 2632,
  [SMALL_STATE(132)] = 2642,
  [SMALL_STATE(133)] = 2650,
  [SMALL_STATE(134)] = 2660,
  [SMALL_STATE(135)] = 2670,
  [SMALL_STATE(136)] = 2680,
  [SMALL_STATE(137)] = 2690,
  [SMALL_STATE(138)] = 2700,
  [SMALL_STATE(139)] = 2710,
  [SMALL_STATE(140)] = 2720,
  [SMALL_STATE(141)] = 2730,
  [SMALL_STATE(142)] = 2740,
  [SMALL_STATE(143)] = 2750,
  [SMALL_STATE(144)] = 2760,
  [SMALL_STATE(145)] = 2770,
  [SMALL_STATE(146)] = 2780,
  [SMALL_STATE(147)] = 2790,
  [SMALL_STATE(148)] = 2800,
  [SMALL_STATE(149)] = 2810,
  [SMALL_STATE(150)] = 2817,
  [SMALL_STATE(151)] = 2824,
  [SMALL_STATE(152)] = 2831,
  [SMALL_STATE(153)] = 2838,
  [SMALL_STATE(154)] = 2845,
  [SMALL_STATE(155)] = 2852,
  [SMALL_STATE(156)] = 2859,
  [SMALL_STATE(157)] = 2866,
  [SMALL_STATE(158)] = 2873,
  [SMALL_STATE(159)] = 2880,
  [SMALL_STATE(160)] = 2887,
  [SMALL_STATE(161)] = 2894,
  [SMALL_STATE(162)] = 2901,
  [SMALL_STATE(163)] = 2908,
  [SMALL_STATE(164)] = 2915,
  [SMALL_STATE(165)] = 2922,
  [SMALL_STATE(166)] = 2929,
  [SMALL_STATE(167)] = 2936,
  [SMALL_STATE(168)] = 2943,
  [SMALL_STATE(169)] = 2950,
  [SMALL_STATE(170)] = 2957,
  [SMALL_STATE(171)] = 2964,
  [SMALL_STATE(172)] = 2971,
  [SMALL_STATE(173)] = 2978,
  [SMALL_STATE(174)] = 2985,
  [SMALL_STATE(175)] = 2992,
  [SMALL_STATE(176)] = 2999,
  [SMALL_STATE(177)] = 3006,
  [SMALL_STATE(178)] = 3013,
  [SMALL_STATE(179)] = 3020,
  [SMALL_STATE(180)] = 3027,
  [SMALL_STATE(181)] = 3034,
  [SMALL_STATE(182)] = 3041,
  [SMALL_STATE(183)] = 3048,
  [SMALL_STATE(184)] = 3055,
  [SMALL_STATE(185)] = 3062,
  [SMALL_STATE(186)] = 3069,
  [SMALL_STATE(187)] = 3076,
  [SMALL_STATE(188)] = 3083,
  [SMALL_STATE(189)] = 3090,
  [SMALL_STATE(190)] = 3097,
  [SMALL_STATE(191)] = 3104,
  [SMALL_STATE(192)] = 3111,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(171),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(60),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(79),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 23),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 34),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 34),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 25),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 25),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 31),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 31),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 30),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 30),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 29),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 29),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 26),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 26),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 27),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 27),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 28),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 28),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 33),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 33),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 8),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 3, 0, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 3, 0, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 22),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 22),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 21),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 21),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 20),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 20),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 19),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 19),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 18),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 18),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 17),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 17),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 16),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 16),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 14),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 14),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 13),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 13),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 9),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 11),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(61),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 10),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 24),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 24),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 10),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 35),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 0),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 7),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_name, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 12),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 15),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [509] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 32),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
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
