#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 10
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 35

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
  sym_hom_body = 53,
  sym_dots = 54,
  sym_namespace_prefix = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym__item_repeat1 = 57,
  aux_sym_defnclass_repeat1 = 58,
  aux_sym_defnclass_repeat2 = 59,
  aux_sym_defn_repeat1 = 60,
  aux_sym_defn_repeat2 = 61,
  aux_sym_defn_rule_repeat1 = 62,
  aux_sym_rule_line_repeat1 = 63,
  aux_sym_grammar_rule_repeat1 = 64,
  aux_sym_production_repeat1 = 65,
  aux_sym__id_desc_list1_repeat1 = 66,
  aux_sym_hom_body_repeat1 = 67,
  anon_alias_sym_defn_name = 68,
  anon_alias_sym_defnclass_name = 69,
  anon_alias_sym_element = 70,
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
  [anon_alias_sym_defn_name] = "defn_name",
  [anon_alias_sym_defnclass_name] = "defnclass_name",
  [anon_alias_sym_element] = "element",
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
  [anon_alias_sym_defn_name] = anon_alias_sym_defn_name,
  [anon_alias_sym_defnclass_name] = anon_alias_sym_defnclass_name,
  [anon_alias_sym_element] = anon_alias_sym_element,
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
  [4] = {.index = 0, .length = 4},
  [5] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 3},
  [8] = {.index = 9, .length = 3},
  [10] = {.index = 12, .length = 4},
  [13] = {.index = 16, .length = 1},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 3},
  [19] = {.index = 26, .length = 3},
  [20] = {.index = 29, .length = 3},
  [21] = {.index = 32, .length = 4},
  [22] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 3},
  [25] = {.index = 41, .length = 3},
  [26] = {.index = 44, .length = 3},
  [27] = {.index = 47, .length = 2},
  [28] = {.index = 49, .length = 4},
  [29] = {.index = 53, .length = 4},
  [30] = {.index = 57, .length = 4},
  [32] = {.index = 61, .length = 3},
  [33] = {.index = 64, .length = 5},
  [34] = {.index = 69, .length = 2},
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
    [0] = anon_alias_sym_defnclass_name,
  },
  [2] = {
    [0] = anon_alias_sym_id,
  },
  [3] = {
    [0] = anon_alias_sym_hom_string,
  },
  [6] = {
    [1] = anon_alias_sym_q_id,
  },
  [9] = {
    [0] = anon_alias_sym_symbol,
  },
  [11] = {
    [0] = anon_alias_sym_production_modifier,
  },
  [12] = {
    [0] = anon_alias_sym_production_name,
  },
  [14] = {
    [0] = anon_alias_sym_defn_name,
  },
  [23] = {
    [0] = anon_alias_sym_element,
  },
  [31] = {
    [0] = anon_alias_sym_rule_name,
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
  [28] = 11,
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
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 39,
  [55] = 18,
  [56] = 38,
  [57] = 49,
  [58] = 58,
  [59] = 49,
  [60] = 39,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 64,
  [69] = 69,
  [70] = 66,
  [71] = 67,
  [72] = 64,
  [73] = 65,
  [74] = 66,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 17,
  [79] = 75,
  [80] = 80,
  [81] = 67,
  [82] = 77,
  [83] = 69,
  [84] = 84,
  [85] = 75,
  [86] = 86,
  [87] = 65,
  [88] = 69,
  [89] = 77,
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
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 110,
  [118] = 110,
  [119] = 112,
  [120] = 120,
  [121] = 114,
  [122] = 116,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 133,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 127,
  [141] = 133,
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
  [156] = 66,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 163,
  [165] = 154,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 154,
  [171] = 166,
  [172] = 167,
  [173] = 168,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 168,
  [182] = 182,
  [183] = 167,
  [184] = 184,
  [185] = 185,
  [186] = 152,
  [187] = 148,
  [188] = 188,
  [189] = 166,
  [190] = 152,
  [191] = 148,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '%', 95,
        '\'', 102,
        ',', 88,
        '-', 13,
        '.', 14,
        '/', 15,
        ':', 17,
        '<', 16,
        'I', 21,
        'b', 58,
        'd', 32,
        'e', 41,
        'g', 48,
        'i', 45,
        'm', 33,
        't', 34,
        '{', 59,
        '|', 76,
        '}', 60,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '<') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == ':') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(95);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == '{') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '<') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '<') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '<') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '<') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '}') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == '}') ADVANCE(91);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '%', 95,
        ':', 18,
        'd', 111,
        'e', 116,
        'g', 122,
        'i', 119,
        'm', 112,
        '{', 59,
        '|', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '%', 94,
        '-', 134,
        '.', 135,
        '<', 136,
        'd', 147,
        'e', 152,
        'g', 158,
        'i', 156,
        'm', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_tex);
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_tex_DASHpreamble);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 61},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 61},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 61},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 61},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 61},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 61},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 61},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 61},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 61},
  [175] = {.lex_state = 61},
  [176] = {.lex_state = 75},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 61},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
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
    [sym_source_file] = STATE(147),
    [sym__item] = STATE(37),
    [sym_metavardefn] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
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
    STATE(42), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
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
    STATE(42), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
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
    STATE(42), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
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
    STATE(42), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
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
    STATE(42), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
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
    STATE(42), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
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
    STATE(42), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
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
    STATE(42), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
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
    STATE(42), 1,
      sym_rule_separator,
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
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
    STATE(44), 1,
      aux_sym_rule_line_repeat1,
    STATE(47), 1,
      sym_rule_separator,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(175), 1,
      sym_dash_line,
    STATE(30), 2,
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
  [552] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(35), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(86), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(92), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [602] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(34), 2,
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
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    ACTIONS(102), 10,
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
  [672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_defn,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(52), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [698] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_defn,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(63), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(116), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(21), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(120), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(124), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [793] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(128), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [816] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_id,
    STATE(97), 1,
      sym_id_desc,
    STATE(151), 1,
      sym__id_desc_list1,
    ACTIONS(132), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(25), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [843] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 2,
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
  [866] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(24), 2,
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
  [889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
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
  [912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
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
  [935] = 9,
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
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    STATE(30), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(157), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [966] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_id,
    STATE(97), 1,
      sym_id_desc,
    STATE(151), 1,
      sym__id_desc_list1,
    ACTIONS(165), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(25), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(29), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(171), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1016] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_id,
    STATE(97), 1,
      sym_id_desc,
    STATE(151), 1,
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
  [1043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(36), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(86), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(36), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(179), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1087] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    STATE(36), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(186), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1109] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(43), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1134] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(193), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      sym_string,
    STATE(67), 1,
      sym_dots,
    STATE(38), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(195), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1159] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LT_SLASH,
    ACTIONS(203), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(207), 1,
      sym_string,
    STATE(67), 1,
      sym_dots,
    STATE(49), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(205), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1184] = 8,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(211), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(45), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(213), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1230] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(15), 1,
      sym_rule_line,
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1257] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      anon_sym_grammar,
    ACTIONS(220), 1,
      anon_sym_embed,
    ACTIONS(223), 1,
      anon_sym_defns,
    ACTIONS(226), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(43), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1282] = 8,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(231), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(233), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1347] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_string,
    STATE(13), 1,
      sym_rule_line,
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    ACTIONS(39), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1374] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COLON_COLON,
    ACTIONS(237), 1,
      anon_sym_LT_SLASH,
    ACTIONS(241), 1,
      sym_string,
    STATE(71), 1,
      sym_dots,
    STATE(62), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(239), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1399] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LT_SLASH,
    ACTIONS(207), 1,
      sym_string,
    ACTIONS(243), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      sym_dots,
    STATE(38), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(205), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_defn,
    STATE(50), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1443] = 8,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_LT_SLASH,
    ACTIONS(258), 1,
      sym_string,
    STATE(51), 1,
      aux_sym_rule_line_repeat1,
    STATE(81), 1,
      sym_dots,
    STATE(84), 1,
      sym_element,
    ACTIONS(255), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_defn,
    STATE(50), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(263), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1506] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LT_SLASH,
    ACTIONS(207), 1,
      sym_string,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      sym_dots,
    STATE(57), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(205), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1548] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(269), 1,
      anon_sym_LT_SLASH,
    ACTIONS(275), 1,
      sym_string,
    STATE(71), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(272), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1573] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LT_SLASH,
    ACTIONS(207), 1,
      sym_string,
    ACTIONS(278), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      sym_dots,
    STATE(38), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(205), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1598] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LT_SLASH,
    ACTIONS(241), 1,
      sym_string,
    ACTIONS(280), 1,
      anon_sym_COLON_COLON,
    STATE(71), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(239), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LT_SLASH,
    ACTIONS(207), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      sym_dots,
    STATE(38), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(205), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1648] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LT_SLASH,
    ACTIONS(207), 1,
      sym_string,
    ACTIONS(284), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      sym_dots,
    STATE(59), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(205), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1673] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LT_SLASH,
    ACTIONS(241), 1,
      sym_string,
    ACTIONS(286), 1,
      anon_sym_COLON_COLON,
    STATE(71), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(239), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1698] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LT_SLASH,
    ACTIONS(241), 1,
      sym_string,
    ACTIONS(288), 1,
      anon_sym_COLON_COLON,
    STATE(71), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(239), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_defn,
    STATE(50), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1742] = 3,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1768] = 3,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1854] = 3,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(296), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(310), 1,
      anon_sym_COLON_COLON,
    ACTIONS(312), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(86), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1922] = 3,
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
  [1936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1960] = 3,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(302), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1974] = 3,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(314), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1988] = 3,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(304), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2002] = 3,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(324), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2016] = 3,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(308), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2030] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(328), 1,
      anon_sym_COLON_COLON,
    ACTIONS(330), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SLASH_GT,
    ACTIONS(336), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(182), 1,
      sym_dots,
    ACTIONS(334), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(340), 1,
      anon_sym_by,
    STATE(102), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COLON_COLON,
    ACTIONS(346), 1,
      sym_id,
    STATE(94), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_COLON_COLON,
    ACTIONS(351), 1,
      sym_id,
    STATE(98), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_id,
    ACTIONS(353), 1,
      anon_sym_COLON_COLON,
    STATE(94), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON_COLON,
    ACTIONS(357), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym__id_desc_list1_repeat1,
  [2198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_id,
    ACTIONS(361), 1,
      anon_sym_COLON_COLON,
    STATE(94), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_id,
    ACTIONS(363), 1,
      anon_sym_COLON_COLON,
    STATE(96), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COLON_COLON,
    ACTIONS(367), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym__id_desc_list1_repeat1,
  [2242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(80), 1,
      sym_embed,
    STATE(46), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(372), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(374), 1,
      anon_sym_by,
    STATE(93), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_COLON_COLON,
    ACTIONS(378), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(100), 1,
      aux_sym__id_desc_list1_repeat1,
  [2300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      sym_id,
    STATE(92), 1,
      sym_namespace_prefix,
  [2313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(386), 1,
      sym_string,
    STATE(126), 1,
      aux_sym_hom_body_repeat1,
  [2326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_id,
    STATE(97), 1,
      sym_id_desc,
    STATE(169), 1,
      sym__id_desc_list1,
  [2339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COLON_COLON,
    ACTIONS(367), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(394), 1,
      sym_string,
    STATE(171), 1,
      sym_comprehension_bound,
  [2372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      sym_id,
    STATE(188), 1,
      sym_namespace_prefix,
  [2385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(396), 1,
      sym_string,
    STATE(170), 1,
      sym_comprehension_bound,
  [2398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(398), 1,
      sym_string,
    STATE(154), 1,
      sym_comprehension_bound,
  [2411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_string,
    STATE(106), 1,
      aux_sym_hom_body_repeat1,
    STATE(163), 1,
      sym_hom_body,
  [2424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      sym_id,
    STATE(161), 1,
      sym_namespace_prefix,
  [2437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_tex,
    ACTIONS(402), 1,
      anon_sym_tex_DASHpreamble,
    STATE(114), 1,
      sym_hom_name,
  [2450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(404), 1,
      sym_string,
    STATE(166), 1,
      sym_comprehension_bound,
  [2463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(406), 1,
      sym_string,
    STATE(189), 1,
      sym_comprehension_bound,
  [2476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_id,
    ACTIONS(408), 1,
      sym_string,
    STATE(165), 1,
      sym_comprehension_bound,
  [2489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      sym_id,
    STATE(103), 1,
      sym_namespace_prefix,
  [2502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_string,
    STATE(106), 1,
      aux_sym_hom_body_repeat1,
    STATE(164), 1,
      sym_hom_body,
  [2515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_tex,
    ACTIONS(402), 1,
      anon_sym_tex_DASHpreamble,
    STATE(121), 1,
      sym_hom_name,
  [2528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_id,
    STATE(80), 1,
      sym_defnclass,
    STATE(160), 1,
      sym_defnclass_name,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(418), 1,
      sym_string,
    STATE(126), 1,
      aux_sym_hom_body_repeat1,
  [2572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_id,
    STATE(181), 1,
      sym_comprehension_bound,
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(425), 1,
      sym_string,
  [2592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
    STATE(185), 1,
      sym_defn_name,
  [2602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_id,
    STATE(173), 1,
      sym_comprehension_bound,
  [2612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_id,
    STATE(149), 1,
      sym_rule_name,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    STATE(26), 1,
      sym_production_name,
  [2632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_id,
    STATE(183), 1,
      sym_comprehension_bound,
  [2642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_id,
    STATE(167), 1,
      sym_comprehension_bound,
  [2652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    STATE(32), 1,
      sym_production_name,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_COLON_COLON,
      sym_id,
  [2670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    STATE(22), 1,
      sym_production_name,
  [2680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SQUOTE,
    ACTIONS(437), 1,
      sym_id,
  [2690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SLASH_GT,
    ACTIONS(441), 1,
      anon_sym_IN,
  [2700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_id,
    STATE(168), 1,
      sym_comprehension_bound,
  [2710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_id,
    STATE(172), 1,
      sym_comprehension_bound,
  [2720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_id,
    STATE(174), 1,
      sym_defn_name,
  [2730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_id,
    STATE(27), 1,
      sym_production_name,
  [2740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_id,
    STATE(109), 1,
      sym_id_desc,
  [2750] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LF,
  [2757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COLON_COLON,
  [2764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
  [2771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SLASH_SLASH,
  [2778] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LF,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_id,
  [2792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_COLON_COLON,
  [2799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SLASH_SLASH,
  [2806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_COLON_COLON,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SLASH_GT,
  [2820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COLON_COLON,
  [2827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_id,
  [2834] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LF,
  [2841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COLON_COLON,
  [2848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
  [2855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COLON_COLON,
  [2862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_COLON_COLON_EQ,
  [2869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_COLON_COLON,
  [2876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RBRACE_RBRACE,
  [2883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_RBRACE_RBRACE,
  [2890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_SLASH_GT,
  [2897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_SLASH_GT,
  [2904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_SLASH_GT,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SLASH_GT,
  [2918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_COLON_COLON_EQ,
  [2925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_SLASH_GT,
  [2932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_SLASH_GT,
  [2939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_SLASH_GT,
  [2946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_SLASH_GT,
  [2953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_COLON_COLON,
  [2960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COLON_COLON,
  [2967] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_dash_line_token1,
  [2974] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LF,
  [2981] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LF,
  [2988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SLASH_GT,
  [2995] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LF,
  [3002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_SLASH_GT,
  [3009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_id,
  [3016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_SLASH_GT,
  [3023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_string,
  [3030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COLON_COLON,
  [3037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
  [3044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_SLASH_SLASH,
  [3051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_COLON_COLON_EQ,
  [3058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_SLASH_GT,
  [3065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_SLASH_SLASH,
  [3072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
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
  [SMALL_STATE(15)] = 581,
  [SMALL_STATE(16)] = 602,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 672,
  [SMALL_STATE(20)] = 698,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 747,
  [SMALL_STATE(23)] = 770,
  [SMALL_STATE(24)] = 793,
  [SMALL_STATE(25)] = 816,
  [SMALL_STATE(26)] = 843,
  [SMALL_STATE(27)] = 866,
  [SMALL_STATE(28)] = 889,
  [SMALL_STATE(29)] = 912,
  [SMALL_STATE(30)] = 935,
  [SMALL_STATE(31)] = 966,
  [SMALL_STATE(32)] = 993,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1043,
  [SMALL_STATE(35)] = 1065,
  [SMALL_STATE(36)] = 1087,
  [SMALL_STATE(37)] = 1109,
  [SMALL_STATE(38)] = 1134,
  [SMALL_STATE(39)] = 1159,
  [SMALL_STATE(40)] = 1184,
  [SMALL_STATE(41)] = 1211,
  [SMALL_STATE(42)] = 1230,
  [SMALL_STATE(43)] = 1257,
  [SMALL_STATE(44)] = 1282,
  [SMALL_STATE(45)] = 1309,
  [SMALL_STATE(46)] = 1328,
  [SMALL_STATE(47)] = 1347,
  [SMALL_STATE(48)] = 1374,
  [SMALL_STATE(49)] = 1399,
  [SMALL_STATE(50)] = 1424,
  [SMALL_STATE(51)] = 1443,
  [SMALL_STATE(52)] = 1470,
  [SMALL_STATE(53)] = 1489,
  [SMALL_STATE(54)] = 1506,
  [SMALL_STATE(55)] = 1531,
  [SMALL_STATE(56)] = 1548,
  [SMALL_STATE(57)] = 1573,
  [SMALL_STATE(58)] = 1598,
  [SMALL_STATE(59)] = 1623,
  [SMALL_STATE(60)] = 1648,
  [SMALL_STATE(61)] = 1673,
  [SMALL_STATE(62)] = 1698,
  [SMALL_STATE(63)] = 1723,
  [SMALL_STATE(64)] = 1742,
  [SMALL_STATE(65)] = 1756,
  [SMALL_STATE(66)] = 1768,
  [SMALL_STATE(67)] = 1782,
  [SMALL_STATE(68)] = 1794,
  [SMALL_STATE(69)] = 1806,
  [SMALL_STATE(70)] = 1818,
  [SMALL_STATE(71)] = 1830,
  [SMALL_STATE(72)] = 1842,
  [SMALL_STATE(73)] = 1854,
  [SMALL_STATE(74)] = 1868,
  [SMALL_STATE(75)] = 1880,
  [SMALL_STATE(76)] = 1892,
  [SMALL_STATE(77)] = 1910,
  [SMALL_STATE(78)] = 1922,
  [SMALL_STATE(79)] = 1936,
  [SMALL_STATE(80)] = 1948,
  [SMALL_STATE(81)] = 1960,
  [SMALL_STATE(82)] = 1974,
  [SMALL_STATE(83)] = 1988,
  [SMALL_STATE(84)] = 2002,
  [SMALL_STATE(85)] = 2016,
  [SMALL_STATE(86)] = 2030,
  [SMALL_STATE(87)] = 2048,
  [SMALL_STATE(88)] = 2060,
  [SMALL_STATE(89)] = 2072,
  [SMALL_STATE(90)] = 2084,
  [SMALL_STATE(91)] = 2101,
  [SMALL_STATE(92)] = 2112,
  [SMALL_STATE(93)] = 2126,
  [SMALL_STATE(94)] = 2140,
  [SMALL_STATE(95)] = 2154,
  [SMALL_STATE(96)] = 2168,
  [SMALL_STATE(97)] = 2182,
  [SMALL_STATE(98)] = 2198,
  [SMALL_STATE(99)] = 2212,
  [SMALL_STATE(100)] = 2226,
  [SMALL_STATE(101)] = 2242,
  [SMALL_STATE(102)] = 2256,
  [SMALL_STATE(103)] = 2270,
  [SMALL_STATE(104)] = 2284,
  [SMALL_STATE(105)] = 2300,
  [SMALL_STATE(106)] = 2313,
  [SMALL_STATE(107)] = 2326,
  [SMALL_STATE(108)] = 2339,
  [SMALL_STATE(109)] = 2348,
  [SMALL_STATE(110)] = 2359,
  [SMALL_STATE(111)] = 2372,
  [SMALL_STATE(112)] = 2385,
  [SMALL_STATE(113)] = 2398,
  [SMALL_STATE(114)] = 2411,
  [SMALL_STATE(115)] = 2424,
  [SMALL_STATE(116)] = 2437,
  [SMALL_STATE(117)] = 2450,
  [SMALL_STATE(118)] = 2463,
  [SMALL_STATE(119)] = 2476,
  [SMALL_STATE(120)] = 2489,
  [SMALL_STATE(121)] = 2502,
  [SMALL_STATE(122)] = 2515,
  [SMALL_STATE(123)] = 2528,
  [SMALL_STATE(124)] = 2541,
  [SMALL_STATE(125)] = 2550,
  [SMALL_STATE(126)] = 2559,
  [SMALL_STATE(127)] = 2572,
  [SMALL_STATE(128)] = 2582,
  [SMALL_STATE(129)] = 2592,
  [SMALL_STATE(130)] = 2602,
  [SMALL_STATE(131)] = 2612,
  [SMALL_STATE(132)] = 2622,
  [SMALL_STATE(133)] = 2632,
  [SMALL_STATE(134)] = 2642,
  [SMALL_STATE(135)] = 2652,
  [SMALL_STATE(136)] = 2662,
  [SMALL_STATE(137)] = 2670,
  [SMALL_STATE(138)] = 2680,
  [SMALL_STATE(139)] = 2690,
  [SMALL_STATE(140)] = 2700,
  [SMALL_STATE(141)] = 2710,
  [SMALL_STATE(142)] = 2720,
  [SMALL_STATE(143)] = 2730,
  [SMALL_STATE(144)] = 2740,
  [SMALL_STATE(145)] = 2750,
  [SMALL_STATE(146)] = 2757,
  [SMALL_STATE(147)] = 2764,
  [SMALL_STATE(148)] = 2771,
  [SMALL_STATE(149)] = 2778,
  [SMALL_STATE(150)] = 2785,
  [SMALL_STATE(151)] = 2792,
  [SMALL_STATE(152)] = 2799,
  [SMALL_STATE(153)] = 2806,
  [SMALL_STATE(154)] = 2813,
  [SMALL_STATE(155)] = 2820,
  [SMALL_STATE(156)] = 2827,
  [SMALL_STATE(157)] = 2834,
  [SMALL_STATE(158)] = 2841,
  [SMALL_STATE(159)] = 2848,
  [SMALL_STATE(160)] = 2855,
  [SMALL_STATE(161)] = 2862,
  [SMALL_STATE(162)] = 2869,
  [SMALL_STATE(163)] = 2876,
  [SMALL_STATE(164)] = 2883,
  [SMALL_STATE(165)] = 2890,
  [SMALL_STATE(166)] = 2897,
  [SMALL_STATE(167)] = 2904,
  [SMALL_STATE(168)] = 2911,
  [SMALL_STATE(169)] = 2918,
  [SMALL_STATE(170)] = 2925,
  [SMALL_STATE(171)] = 2932,
  [SMALL_STATE(172)] = 2939,
  [SMALL_STATE(173)] = 2946,
  [SMALL_STATE(174)] = 2953,
  [SMALL_STATE(175)] = 2960,
  [SMALL_STATE(176)] = 2967,
  [SMALL_STATE(177)] = 2974,
  [SMALL_STATE(178)] = 2981,
  [SMALL_STATE(179)] = 2988,
  [SMALL_STATE(180)] = 2995,
  [SMALL_STATE(181)] = 3002,
  [SMALL_STATE(182)] = 3009,
  [SMALL_STATE(183)] = 3016,
  [SMALL_STATE(184)] = 3023,
  [SMALL_STATE(185)] = 3030,
  [SMALL_STATE(186)] = 3037,
  [SMALL_STATE(187)] = 3044,
  [SMALL_STATE(188)] = 3051,
  [SMALL_STATE(189)] = 3058,
  [SMALL_STATE(190)] = 3065,
  [SMALL_STATE(191)] = 3072,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(176),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(60),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(66),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(64),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 22),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 33),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 33),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 24),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 24),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 30),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 30),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 29),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 29),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 28),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 28),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 25),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 25),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 26),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 26),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 32),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 32),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 21),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 21),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 20),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 20),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 19),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 19),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 18),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 18),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 17),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 17),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 16),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 16),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 15),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 15),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 13),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 13),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(48),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 8),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 12),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 12),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 10),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 9),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 9),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 23),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 23),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 34),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_body, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 6),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 11),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 31),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 14),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
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
