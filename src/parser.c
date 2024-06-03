#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 8
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 33

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
  sym_dash_line = 38,
  sym_rule_line = 39,
  sym_grammar_rule = 40,
  sym_production = 41,
  sym_production_mod = 42,
  sym_element = 43,
  sym_metavardefn = 44,
  sym__id_desc_list1 = 45,
  sym_id_desc = 46,
  sym_comprehension_bound = 47,
  sym_embed = 48,
  sym_homomorphism = 49,
  sym_hom_name = 50,
  sym_hom_body = 51,
  sym_dots = 52,
  sym_namespace_prefix = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym__item_repeat1 = 55,
  aux_sym_defnclass_repeat1 = 56,
  aux_sym_defnclass_repeat2 = 57,
  aux_sym_defn_repeat1 = 58,
  aux_sym_defn_repeat2 = 59,
  aux_sym_defn_rule_repeat1 = 60,
  aux_sym_rule_line_repeat1 = 61,
  aux_sym_grammar_rule_repeat1 = 62,
  aux_sym_production_repeat1 = 63,
  aux_sym__id_desc_list1_repeat1 = 64,
  aux_sym_hom_body_repeat1 = 65,
  anon_alias_sym_defn_name = 66,
  anon_alias_sym_defnclass_name = 67,
  anon_alias_sym_element = 68,
  anon_alias_sym_hom_string = 69,
  anon_alias_sym_id = 70,
  anon_alias_sym_production_modifier = 71,
  anon_alias_sym_q_id = 72,
  anon_alias_sym_symbol = 73,
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
  [sym_dash_line] = "dash_line",
  [sym_rule_line] = "rule_line",
  [sym_grammar_rule] = "grammar_rule",
  [sym_production] = "production",
  [sym_production_mod] = "production_mod",
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
  [sym_defnclass_name] = sym_defnclass_name,
  [sym_defn] = sym_defn,
  [sym_defn_name] = sym_defn_name,
  [sym_defn_rule] = sym_defn_rule,
  [sym_rule_separator] = sym_rule_separator,
  [sym_dash_line] = sym_dash_line,
  [sym_rule_line] = sym_rule_line,
  [sym_grammar_rule] = sym_grammar_rule,
  [sym_production] = sym_production,
  [sym_production_mod] = sym_production_mod,
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
  [4] = {.index = 0, .length = 4},
  [5] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 3},
  [8] = {.index = 9, .length = 3},
  [10] = {.index = 12, .length = 4},
  [12] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 3},
  [18] = {.index = 26, .length = 3},
  [19] = {.index = 29, .length = 3},
  [20] = {.index = 32, .length = 4},
  [21] = {.index = 36, .length = 2},
  [23] = {.index = 38, .length = 3},
  [24] = {.index = 41, .length = 3},
  [25] = {.index = 44, .length = 3},
  [26] = {.index = 47, .length = 2},
  [27] = {.index = 49, .length = 4},
  [28] = {.index = 53, .length = 4},
  [29] = {.index = 57, .length = 4},
  [30] = {.index = 61, .length = 3},
  [31] = {.index = 64, .length = 5},
  [32] = {.index = 69, .length = 2},
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
  [13] = {
    [0] = anon_alias_sym_defn_name,
  },
  [22] = {
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
  [17] = 12,
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
  [32] = 30,
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
  [46] = 42,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 47,
  [51] = 51,
  [52] = 52,
  [53] = 42,
  [54] = 54,
  [55] = 55,
  [56] = 41,
  [57] = 57,
  [58] = 40,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 67,
  [71] = 64,
  [72] = 14,
  [73] = 66,
  [74] = 66,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 69,
  [79] = 77,
  [80] = 63,
  [81] = 63,
  [82] = 77,
  [83] = 69,
  [84] = 84,
  [85] = 75,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 87,
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
  [107] = 106,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 104,
  [117] = 112,
  [118] = 114,
  [119] = 119,
  [120] = 109,
  [121] = 121,
  [122] = 122,
  [123] = 114,
  [124] = 124,
  [125] = 103,
  [126] = 119,
  [127] = 127,
  [128] = 128,
  [129] = 112,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 131,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 139,
  [143] = 141,
  [144] = 141,
  [145] = 132,
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
  [161] = 75,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 152,
  [170] = 158,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 158,
  [176] = 147,
  [177] = 172,
  [178] = 173,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 147,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 172,
  [189] = 189,
  [190] = 190,
  [191] = 157,
  [192] = 180,
  [193] = 193,
  [194] = 173,
  [195] = 157,
  [196] = 180,
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
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 60},
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
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 60},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 60},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 60},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 60},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 60},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 60},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 60},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 60},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 60},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 73},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
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
    [sym_source_file] = STATE(193),
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
    STATE(39), 1,
      sym_rule_separator,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(13), 2,
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
    STATE(39), 1,
      sym_rule_separator,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(13), 2,
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
    STATE(39), 1,
      sym_rule_separator,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(13), 2,
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
    STATE(39), 1,
      sym_rule_separator,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(13), 2,
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
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(39), 1,
      sym_rule_separator,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(13), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(41), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [260] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(50), 1,
      anon_sym_LT_SLASH,
    ACTIONS(56), 1,
      sym_string,
    STATE(39), 1,
      sym_rule_separator,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(13), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(45), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(53), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(43), 4,
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
    STATE(39), 1,
      sym_rule_separator,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(13), 2,
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
    STATE(39), 1,
      sym_rule_separator,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(5), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(13), 2,
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
    STATE(39), 1,
      sym_rule_separator,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(13), 2,
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
  [468] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(37), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(75), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [497] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(81), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [522] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(54), 1,
      sym_rule_separator,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(179), 1,
      sym_dash_line,
    STATE(21), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(88), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [580] = 3,
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
  [601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(96), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_defn,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(79), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [647] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(36), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(103), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(62), 2,
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
    STATE(19), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(51), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [728] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(115), 1,
      anon_sym_LT_SLASH,
    ACTIONS(121), 1,
      sym_string,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    STATE(21), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [759] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_id,
    STATE(107), 1,
      sym_id_desc,
    STATE(190), 1,
      sym__id_desc_list1,
    ACTIONS(126), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(25), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [786] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_id,
    STATE(107), 1,
      sym_id_desc,
    STATE(190), 1,
      sym__id_desc_list1,
    ACTIONS(132), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [813] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
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
  [836] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_id,
    STATE(107), 1,
      sym_id_desc,
    STATE(190), 1,
      sym__id_desc_list1,
    ACTIONS(143), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
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
  [886] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(29), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(151), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(33), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(155), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
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
  [955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_defn,
    ACTIONS(161), 10,
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
  [974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(167), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [1016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 2,
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
  [1039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
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
    ACTIONS(73), 1,
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
    ACTIONS(73), 1,
      anon_sym_PIPE,
    STATE(35), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(103), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1128] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COLON_COLON,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(194), 1,
      sym_string,
    STATE(70), 1,
      sym_dots,
    STATE(61), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(192), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1153] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(16), 1,
      sym_rule_line,
    STATE(47), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LT_SLASH,
    ACTIONS(198), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(202), 1,
      sym_string,
    STATE(68), 1,
      sym_dots,
    STATE(41), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(200), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1205] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(207), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(212), 1,
      sym_string,
    STATE(68), 1,
      sym_dots,
    STATE(41), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(209), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1230] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LT_SLASH,
    ACTIONS(202), 1,
      sym_string,
    ACTIONS(215), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 1,
      sym_dots,
    STATE(40), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(200), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1255] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LT_SLASH,
    ACTIONS(202), 1,
      sym_string,
    ACTIONS(217), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 1,
      sym_dots,
    STATE(41), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(200), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1280] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(52), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1324] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LT_SLASH,
    ACTIONS(202), 1,
      sym_string,
    ACTIONS(223), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 1,
      sym_dots,
    STATE(43), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(200), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1349] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(227), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1395] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(194), 1,
      sym_string,
    ACTIONS(231), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_dots,
    STATE(57), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(192), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1420] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LF,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    STATE(60), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(235), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1466] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      anon_sym_grammar,
    ACTIONS(242), 1,
      anon_sym_embed,
    ACTIONS(245), 1,
      anon_sym_defns,
    ACTIONS(248), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(52), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1491] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LT_SLASH,
    ACTIONS(202), 1,
      sym_string,
    ACTIONS(251), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(200), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1516] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(15), 1,
      sym_rule_line,
    STATE(47), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1543] = 8,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      sym_string,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(67), 1,
      sym_dots,
    STATE(86), 1,
      sym_element,
    ACTIONS(258), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1570] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COLON_COLON,
    ACTIONS(264), 1,
      anon_sym_LT_SLASH,
    ACTIONS(270), 1,
      sym_string,
    STATE(70), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(267), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1595] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(194), 1,
      sym_string,
    ACTIONS(273), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(192), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1620] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LT_SLASH,
    ACTIONS(202), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 1,
      sym_dots,
    STATE(41), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(200), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(45), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_defn,
    STATE(60), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(279), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1683] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(194), 1,
      sym_string,
    ACTIONS(284), 1,
      anon_sym_COLON_COLON,
    STATE(70), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(192), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    STATE(60), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(286), 6,
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
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1751] = 3,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(290), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1777] = 3,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 5,
      anon_sym_LT_SLASH,
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
  [1815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(88), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1853] = 3,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(294), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1915] = 3,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(300), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1929] = 3,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(306), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1943] = 3,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(288), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2005] = 3,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(304), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2019] = 3,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(12), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(324), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(87), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(324), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(92), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_SLASH_GT,
    ACTIONS(330), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(150), 1,
      sym_dots,
    ACTIONS(328), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(332), 1,
      anon_sym_by,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COLON_COLON,
    ACTIONS(336), 1,
      sym_id,
    STATE(99), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_id,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    STATE(99), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(340), 1,
      anon_sym_by,
    STATE(93), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      anon_sym_by,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_id,
    ACTIONS(344), 1,
      anon_sym_COLON_COLON,
    STATE(95), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
    ACTIONS(348), 1,
      sym_id,
    STATE(99), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_id,
    ACTIONS(351), 1,
      anon_sym_COLON_COLON,
    STATE(94), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(84), 1,
      sym_embed,
    STATE(48), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(353), 1,
      anon_sym_by,
    STATE(97), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym__id_desc_list1_repeat1,
  [2274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym__id_desc_list1_repeat1,
  [2287] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_id,
    STATE(106), 1,
      sym_id_desc,
    STATE(166), 1,
      sym__id_desc_list1,
  [2300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(103), 1,
      aux_sym__id_desc_list1_repeat1,
  [2313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COLON_COLON,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__id_desc_list1_repeat1,
  [2326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_id,
    STATE(84), 1,
      sym_defnclass,
    STATE(167), 1,
      sym_defnclass_name,
  [2339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_tex,
    ACTIONS(374), 1,
      anon_sym_tex_DASHpreamble,
    STATE(119), 1,
      sym_hom_name,
  [2352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(378), 1,
      sym_string,
    STATE(110), 1,
      aux_sym_hom_body_repeat1,
  [2365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    ACTIONS(385), 1,
      sym_string,
    STATE(176), 1,
      sym_comprehension_bound,
  [2387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      sym_id,
    STATE(102), 1,
      sym_namespace_prefix,
  [2400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    ACTIONS(391), 1,
      sym_string,
    STATE(175), 1,
      sym_comprehension_bound,
  [2413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym__id_desc_list1_repeat1,
  [2435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    ACTIONS(398), 1,
      sym_string,
    STATE(147), 1,
      sym_comprehension_bound,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    ACTIONS(400), 1,
      sym_string,
    STATE(170), 1,
      sym_comprehension_bound,
  [2461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_string,
    STATE(121), 1,
      aux_sym_hom_body_repeat1,
    STATE(169), 1,
      sym_hom_body,
  [2474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_tex,
    ACTIONS(374), 1,
      anon_sym_tex_DASHpreamble,
    STATE(126), 1,
      sym_hom_name,
  [2487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_string,
    ACTIONS(404), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(110), 1,
      aux_sym_hom_body_repeat1,
  [2500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      sym_id,
    STATE(156), 1,
      sym_namespace_prefix,
  [2513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    ACTIONS(406), 1,
      sym_string,
    STATE(158), 1,
      sym_comprehension_bound,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON_COLON,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym__id_desc_list1_repeat1,
  [2548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym_string,
    STATE(121), 1,
      aux_sym_hom_body_repeat1,
    STATE(152), 1,
      sym_hom_body,
  [2561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      sym_id,
    STATE(96), 1,
      sym_namespace_prefix,
  [2574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      sym_id,
    STATE(149), 1,
      sym_namespace_prefix,
  [2587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_id,
    ACTIONS(410), 1,
      sym_string,
    STATE(182), 1,
      sym_comprehension_bound,
  [2600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      sym_id,
  [2610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_id,
    STATE(132), 1,
      sym_id_desc,
  [2620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [2628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SLASH_GT,
    ACTIONS(420), 1,
      anon_sym_IN,
  [2638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_id,
    STATE(145), 1,
      sym_id_desc,
  [2648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(424), 1,
      sym_string,
  [2658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_id,
    STATE(165), 1,
      sym_defn_name,
  [2668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_id,
    STATE(187), 1,
      sym_defn_name,
  [2678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_COLON_COLON,
      sym_id,
  [2686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(188), 1,
      sym_comprehension_bound,
  [2696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(172), 1,
      sym_comprehension_bound,
  [2706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(173), 1,
      sym_comprehension_bound,
  [2716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(177), 1,
      sym_comprehension_bound,
  [2726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(178), 1,
      sym_comprehension_bound,
  [2736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_id,
    STATE(194), 1,
      sym_comprehension_bound,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2754] = 2,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LF,
  [2761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SLASH_GT,
  [2768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_SQUOTE,
  [2775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COLON_COLON_EQ,
  [2782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_id,
  [2789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_string,
  [2796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RBRACE_RBRACE,
  [2803] = 2,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LF,
  [2810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COLON_COLON,
  [2817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_string,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COLON_COLON_EQ,
  [2831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SLASH_SLASH,
  [2838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SLASH_GT,
  [2845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_string,
  [2852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COLON_COLON,
  [2859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_id,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_string,
  [2873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_string,
  [2880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COLON_COLON,
  [2887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COLON_COLON,
  [2894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COLON_COLON_EQ,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_COLON_COLON,
  [2908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_COLON_COLON,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACE_RBRACE,
  [2922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SLASH_GT,
  [2929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
  [2936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SLASH_GT,
  [2943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SLASH_GT,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_id,
  [2957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SLASH_GT,
  [2964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SLASH_GT,
  [2971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SLASH_GT,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_SLASH_GT,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COLON_COLON,
  [2992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_SLASH_SLASH,
  [2999] = 2,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym_dash_line_token1,
  [3006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_SLASH_GT,
  [3013] = 2,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LF,
  [3020] = 2,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LF,
  [3027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_string,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_SLASH_GT,
  [3041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COLON_COLON,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_SLASH_GT,
  [3055] = 2,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LF,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_COLON_COLON,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SLASH_SLASH,
  [3083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_SLASH_GT,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SLASH_SLASH,
  [3104] = 2,
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
  [SMALL_STATE(12)] = 497,
  [SMALL_STATE(13)] = 522,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 580,
  [SMALL_STATE(16)] = 601,
  [SMALL_STATE(17)] = 622,
  [SMALL_STATE(18)] = 647,
  [SMALL_STATE(19)] = 676,
  [SMALL_STATE(20)] = 702,
  [SMALL_STATE(21)] = 728,
  [SMALL_STATE(22)] = 759,
  [SMALL_STATE(23)] = 786,
  [SMALL_STATE(24)] = 813,
  [SMALL_STATE(25)] = 836,
  [SMALL_STATE(26)] = 863,
  [SMALL_STATE(27)] = 886,
  [SMALL_STATE(28)] = 909,
  [SMALL_STATE(29)] = 932,
  [SMALL_STATE(30)] = 955,
  [SMALL_STATE(31)] = 974,
  [SMALL_STATE(32)] = 997,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1039,
  [SMALL_STATE(35)] = 1062,
  [SMALL_STATE(36)] = 1084,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1128,
  [SMALL_STATE(39)] = 1153,
  [SMALL_STATE(40)] = 1180,
  [SMALL_STATE(41)] = 1205,
  [SMALL_STATE(42)] = 1230,
  [SMALL_STATE(43)] = 1255,
  [SMALL_STATE(44)] = 1280,
  [SMALL_STATE(45)] = 1305,
  [SMALL_STATE(46)] = 1324,
  [SMALL_STATE(47)] = 1349,
  [SMALL_STATE(48)] = 1376,
  [SMALL_STATE(49)] = 1395,
  [SMALL_STATE(50)] = 1420,
  [SMALL_STATE(51)] = 1447,
  [SMALL_STATE(52)] = 1466,
  [SMALL_STATE(53)] = 1491,
  [SMALL_STATE(54)] = 1516,
  [SMALL_STATE(55)] = 1543,
  [SMALL_STATE(56)] = 1570,
  [SMALL_STATE(57)] = 1595,
  [SMALL_STATE(58)] = 1620,
  [SMALL_STATE(59)] = 1645,
  [SMALL_STATE(60)] = 1664,
  [SMALL_STATE(61)] = 1683,
  [SMALL_STATE(62)] = 1708,
  [SMALL_STATE(63)] = 1727,
  [SMALL_STATE(64)] = 1739,
  [SMALL_STATE(65)] = 1751,
  [SMALL_STATE(66)] = 1765,
  [SMALL_STATE(67)] = 1777,
  [SMALL_STATE(68)] = 1791,
  [SMALL_STATE(69)] = 1803,
  [SMALL_STATE(70)] = 1815,
  [SMALL_STATE(71)] = 1827,
  [SMALL_STATE(72)] = 1839,
  [SMALL_STATE(73)] = 1853,
  [SMALL_STATE(74)] = 1867,
  [SMALL_STATE(75)] = 1879,
  [SMALL_STATE(76)] = 1891,
  [SMALL_STATE(77)] = 1903,
  [SMALL_STATE(78)] = 1915,
  [SMALL_STATE(79)] = 1929,
  [SMALL_STATE(80)] = 1943,
  [SMALL_STATE(81)] = 1957,
  [SMALL_STATE(82)] = 1969,
  [SMALL_STATE(83)] = 1981,
  [SMALL_STATE(84)] = 1993,
  [SMALL_STATE(85)] = 2005,
  [SMALL_STATE(86)] = 2019,
  [SMALL_STATE(87)] = 2033,
  [SMALL_STATE(88)] = 2048,
  [SMALL_STATE(89)] = 2059,
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
  [SMALL_STATE(101)] = 2233,
  [SMALL_STATE(102)] = 2247,
  [SMALL_STATE(103)] = 2261,
  [SMALL_STATE(104)] = 2274,
  [SMALL_STATE(105)] = 2287,
  [SMALL_STATE(106)] = 2300,
  [SMALL_STATE(107)] = 2313,
  [SMALL_STATE(108)] = 2326,
  [SMALL_STATE(109)] = 2339,
  [SMALL_STATE(110)] = 2352,
  [SMALL_STATE(111)] = 2365,
  [SMALL_STATE(112)] = 2374,
  [SMALL_STATE(113)] = 2387,
  [SMALL_STATE(114)] = 2400,
  [SMALL_STATE(115)] = 2413,
  [SMALL_STATE(116)] = 2422,
  [SMALL_STATE(117)] = 2435,
  [SMALL_STATE(118)] = 2448,
  [SMALL_STATE(119)] = 2461,
  [SMALL_STATE(120)] = 2474,
  [SMALL_STATE(121)] = 2487,
  [SMALL_STATE(122)] = 2500,
  [SMALL_STATE(123)] = 2513,
  [SMALL_STATE(124)] = 2526,
  [SMALL_STATE(125)] = 2535,
  [SMALL_STATE(126)] = 2548,
  [SMALL_STATE(127)] = 2561,
  [SMALL_STATE(128)] = 2574,
  [SMALL_STATE(129)] = 2587,
  [SMALL_STATE(130)] = 2600,
  [SMALL_STATE(131)] = 2610,
  [SMALL_STATE(132)] = 2620,
  [SMALL_STATE(133)] = 2628,
  [SMALL_STATE(134)] = 2638,
  [SMALL_STATE(135)] = 2648,
  [SMALL_STATE(136)] = 2658,
  [SMALL_STATE(137)] = 2668,
  [SMALL_STATE(138)] = 2678,
  [SMALL_STATE(139)] = 2686,
  [SMALL_STATE(140)] = 2696,
  [SMALL_STATE(141)] = 2706,
  [SMALL_STATE(142)] = 2716,
  [SMALL_STATE(143)] = 2726,
  [SMALL_STATE(144)] = 2736,
  [SMALL_STATE(145)] = 2746,
  [SMALL_STATE(146)] = 2754,
  [SMALL_STATE(147)] = 2761,
  [SMALL_STATE(148)] = 2768,
  [SMALL_STATE(149)] = 2775,
  [SMALL_STATE(150)] = 2782,
  [SMALL_STATE(151)] = 2789,
  [SMALL_STATE(152)] = 2796,
  [SMALL_STATE(153)] = 2803,
  [SMALL_STATE(154)] = 2810,
  [SMALL_STATE(155)] = 2817,
  [SMALL_STATE(156)] = 2824,
  [SMALL_STATE(157)] = 2831,
  [SMALL_STATE(158)] = 2838,
  [SMALL_STATE(159)] = 2845,
  [SMALL_STATE(160)] = 2852,
  [SMALL_STATE(161)] = 2859,
  [SMALL_STATE(162)] = 2866,
  [SMALL_STATE(163)] = 2873,
  [SMALL_STATE(164)] = 2880,
  [SMALL_STATE(165)] = 2887,
  [SMALL_STATE(166)] = 2894,
  [SMALL_STATE(167)] = 2901,
  [SMALL_STATE(168)] = 2908,
  [SMALL_STATE(169)] = 2915,
  [SMALL_STATE(170)] = 2922,
  [SMALL_STATE(171)] = 2929,
  [SMALL_STATE(172)] = 2936,
  [SMALL_STATE(173)] = 2943,
  [SMALL_STATE(174)] = 2950,
  [SMALL_STATE(175)] = 2957,
  [SMALL_STATE(176)] = 2964,
  [SMALL_STATE(177)] = 2971,
  [SMALL_STATE(178)] = 2978,
  [SMALL_STATE(179)] = 2985,
  [SMALL_STATE(180)] = 2992,
  [SMALL_STATE(181)] = 2999,
  [SMALL_STATE(182)] = 3006,
  [SMALL_STATE(183)] = 3013,
  [SMALL_STATE(184)] = 3020,
  [SMALL_STATE(185)] = 3027,
  [SMALL_STATE(186)] = 3034,
  [SMALL_STATE(187)] = 3041,
  [SMALL_STATE(188)] = 3048,
  [SMALL_STATE(189)] = 3055,
  [SMALL_STATE(190)] = 3062,
  [SMALL_STATE(191)] = 3069,
  [SMALL_STATE(192)] = 3076,
  [SMALL_STATE(193)] = 3083,
  [SMALL_STATE(194)] = 3090,
  [SMALL_STATE(195)] = 3097,
  [SMALL_STATE(196)] = 3104,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 23),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 27),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 29),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 29),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 28),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 28),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 31),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 31),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(181),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(42),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(85),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(65),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 21),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 21),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 25),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 25),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 24),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 24),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 30),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 30),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 26),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 26),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 12),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 12),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 14),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 14),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 15),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 15),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 16),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 16),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 17),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 17),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 20),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 20),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 18),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 18),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 19),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 19),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 8),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(38),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 10),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 9),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 9),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 22),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 22),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 32),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 6),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_body, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 11),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 13),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [524] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
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
