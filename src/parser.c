#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 9
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 34

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
  sym_production_name = 43,
  sym_element = 44,
  sym_metavardefn = 45,
  sym__id_desc_list1 = 46,
  sym_id_desc = 47,
  sym_comprehension_bound = 48,
  sym_embed = 49,
  sym_homomorphism = 50,
  sym_hom_name = 51,
  sym_hom_body = 52,
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
  aux_sym_hom_body_repeat1 = 66,
  anon_alias_sym_defn_name = 67,
  anon_alias_sym_defnclass_name = 68,
  anon_alias_sym_element = 69,
  anon_alias_sym_hom_string = 70,
  anon_alias_sym_id = 71,
  anon_alias_sym_production_modifier = 72,
  anon_alias_sym_production_name = 73,
  anon_alias_sym_q_id = 74,
  anon_alias_sym_symbol = 75,
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
  [31] = {.index = 61, .length = 3},
  [32] = {.index = 64, .length = 5},
  [33] = {.index = 69, .length = 2},
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
  [16] = 15,
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
  [31] = 31,
  [32] = 32,
  [33] = 22,
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
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 51,
  [55] = 43,
  [56] = 56,
  [57] = 57,
  [58] = 47,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 42,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 64,
  [70] = 67,
  [71] = 71,
  [72] = 72,
  [73] = 18,
  [74] = 67,
  [75] = 75,
  [76] = 66,
  [77] = 65,
  [78] = 78,
  [79] = 71,
  [80] = 68,
  [81] = 71,
  [82] = 68,
  [83] = 65,
  [84] = 78,
  [85] = 64,
  [86] = 66,
  [87] = 78,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 89,
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
  [109] = 108,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 108,
  [114] = 110,
  [115] = 107,
  [116] = 116,
  [117] = 111,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 110,
  [127] = 119,
  [128] = 128,
  [129] = 106,
  [130] = 116,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 141,
  [144] = 141,
  [145] = 138,
  [146] = 146,
  [147] = 133,
  [148] = 148,
  [149] = 149,
  [150] = 140,
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
  [162] = 67,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 153,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 171,
  [177] = 172,
  [178] = 173,
  [179] = 174,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 171,
  [186] = 174,
  [187] = 187,
  [188] = 173,
  [189] = 189,
  [190] = 172,
  [191] = 191,
  [192] = 182,
  [193] = 193,
  [194] = 193,
  [195] = 195,
  [196] = 182,
  [197] = 193,
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
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
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
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 60},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 60},
  [90] = {.lex_state = 60},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 60},
  [107] = {.lex_state = 60},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 60},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 60},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 60},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 60},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 60},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 73},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
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
    [sym_source_file] = STATE(191),
    [sym__item] = STATE(63),
    [sym_metavardefn] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(63),
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
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
      sym_dash_line,
    STATE(9), 2,
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
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
      sym_dash_line,
    STATE(4), 2,
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
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
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
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
      sym_dash_line,
    STATE(8), 2,
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
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
      sym_dash_line,
    STATE(10), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
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
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
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
    ACTIONS(45), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
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
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
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
    ACTIONS(49), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [364] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(58), 1,
      anon_sym_LT_SLASH,
    ACTIONS(64), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(11), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(53), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(61), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(51), 4,
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
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
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
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(52), 1,
      sym_rule_separator,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(168), 1,
      sym_dash_line,
    STATE(21), 2,
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
  [526] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(35), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(79), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [555] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(37), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(85), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [584] = 5,
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
  [609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_defn,
    ACTIONS(94), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
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
  [634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(99), 8,
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
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(103), 8,
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
    ACTIONS(107), 1,
      anon_sym_defn,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(39), 2,
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
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(60), 2,
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
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    STATE(21), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(118), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_defn,
    ACTIONS(124), 10,
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
  [778] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_id,
    STATE(117), 1,
      sym_id_desc,
    STATE(175), 1,
      sym__id_desc_list1,
    ACTIONS(130), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(31), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(136), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(140), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [851] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(144), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [874] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_id,
    STATE(117), 1,
      sym_id_desc,
    STATE(175), 1,
      sym__id_desc_list1,
    ACTIONS(148), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [901] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(29), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(152), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [924] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(156), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(160), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [970] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_id,
    STATE(117), 1,
      sym_id_desc,
    STATE(175), 1,
      sym__id_desc_list1,
    ACTIONS(164), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(31), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 2,
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
  [1020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [1039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
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
    ACTIONS(77), 1,
      anon_sym_PIPE,
    STATE(36), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(85), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_PIPE,
    STATE(36), 2,
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
  [1106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    STATE(36), 2,
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
  [1128] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COLON_COLON,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(194), 1,
      sym_string,
    STATE(66), 1,
      sym_dots,
    STATE(59), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(192), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    STATE(61), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1191] = 8,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      anon_sym_LT_SLASH,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    ACTIONS(207), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1218] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1245] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LT_SLASH,
    ACTIONS(217), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 1,
      sym_string,
    STATE(76), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(219), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1270] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      anon_sym_grammar,
    ACTIONS(228), 1,
      anon_sym_embed,
    ACTIONS(231), 1,
      anon_sym_defns,
    ACTIONS(234), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(44), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1295] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LT_SLASH,
    ACTIONS(221), 1,
      sym_string,
    ACTIONS(237), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(219), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1320] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(194), 1,
      sym_string,
    ACTIONS(239), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_dots,
    STATE(56), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(192), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1345] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COLON_COLON,
    ACTIONS(243), 1,
      anon_sym_LT_SLASH,
    ACTIONS(249), 1,
      sym_string,
    STATE(66), 1,
      sym_dots,
    STATE(47), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(246), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1370] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(12), 1,
      sym_rule_line,
    STATE(62), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1435] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LT_SLASH,
    ACTIONS(221), 1,
      sym_string,
    ACTIONS(256), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_dots,
    STATE(45), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(219), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1460] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(17), 1,
      sym_rule_line,
    STATE(62), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1487] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LT_SLASH,
    ACTIONS(221), 1,
      sym_string,
    ACTIONS(258), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_dots,
    STATE(55), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(219), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1512] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LT_SLASH,
    ACTIONS(221), 1,
      sym_string,
    ACTIONS(260), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_dots,
    STATE(43), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(219), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1537] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LT_SLASH,
    ACTIONS(221), 1,
      sym_string,
    ACTIONS(262), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(219), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1562] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(194), 1,
      sym_string,
    ACTIONS(264), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_dots,
    STATE(47), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(192), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1604] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(270), 1,
      anon_sym_LT_SLASH,
    ACTIONS(276), 1,
      sym_string,
    STATE(76), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(273), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1629] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LT_SLASH,
    ACTIONS(194), 1,
      sym_string,
    ACTIONS(279), 1,
      anon_sym_COLON_COLON,
    STATE(66), 1,
      sym_dots,
    STATE(47), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(192), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    STATE(61), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(281), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_defn,
    STATE(61), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(283), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1692] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(72), 1,
      sym_element,
    STATE(86), 1,
      sym_dots,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1719] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(44), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1756] = 3,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(296), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1782] = 3,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1796] = 3,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1834] = 3,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1848] = 3,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(103), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2008] = 3,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(292), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2022] = 3,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(298), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2036] = 3,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(316), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SLASH_GT,
    ACTIONS(328), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(187), 1,
      sym_dots,
    ACTIONS(326), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(330), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(15), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(332), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(89), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(332), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(93), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(330), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(336), 1,
      anon_sym_by,
    STATE(100), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    ACTIONS(340), 1,
      sym_id,
    STATE(96), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_id,
    ACTIONS(342), 1,
      anon_sym_COLON_COLON,
    STATE(98), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_id,
    ACTIONS(344), 1,
      anon_sym_COLON_COLON,
    STATE(102), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON,
    ACTIONS(348), 1,
      sym_id,
    STATE(98), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(351), 1,
      anon_sym_by,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(353), 1,
      anon_sym_by,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(75), 1,
      sym_embed,
    STATE(50), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_id,
    ACTIONS(355), 1,
      anon_sym_COLON_COLON,
    STATE(98), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      anon_sym_by,
    STATE(99), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      sym_id,
    STATE(103), 1,
      sym_namespace_prefix,
  [2291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym__id_desc_list1_repeat1,
  [2313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym__id_desc_list1_repeat1,
  [2326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_id,
    ACTIONS(376), 1,
      sym_string,
    STATE(177), 1,
      sym_comprehension_bound,
  [2339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_id,
    ACTIONS(378), 1,
      sym_string,
    STATE(190), 1,
      sym_comprehension_bound,
  [2352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_id,
    ACTIONS(380), 1,
      sym_string,
    STATE(176), 1,
      sym_comprehension_bound,
  [2365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(106), 1,
      aux_sym__id_desc_list1_repeat1,
  [2378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_id,
    STATE(111), 1,
      sym_id_desc,
    STATE(165), 1,
      sym__id_desc_list1,
  [2391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_id,
    ACTIONS(386), 1,
      sym_string,
    STATE(172), 1,
      sym_comprehension_bound,
  [2404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_id,
    ACTIONS(388), 1,
      sym_string,
    STATE(171), 1,
      sym_comprehension_bound,
  [2417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COLON_COLON,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym__id_desc_list1_repeat1,
  [2430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_string,
    STATE(120), 1,
      aux_sym_hom_body_repeat1,
    STATE(170), 1,
      sym_hom_body,
  [2443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COLON_COLON,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym__id_desc_list1_repeat1,
  [2456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_id,
    STATE(75), 1,
      sym_defnclass,
    STATE(166), 1,
      sym_defnclass_name,
  [2469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_tex,
    ACTIONS(401), 1,
      anon_sym_tex_DASHpreamble,
    STATE(130), 1,
      sym_hom_name,
  [2482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_string,
    ACTIONS(403), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(122), 1,
      aux_sym_hom_body_repeat1,
  [2495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(409), 1,
      sym_string,
    STATE(122), 1,
      aux_sym_hom_body_repeat1,
  [2517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      sym_id,
    STATE(154), 1,
      sym_namespace_prefix,
  [2530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      sym_id,
    STATE(94), 1,
      sym_namespace_prefix,
  [2552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_id,
    ACTIONS(414), 1,
      sym_string,
    STATE(185), 1,
      sym_comprehension_bound,
  [2565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_tex,
    ACTIONS(401), 1,
      anon_sym_tex_DASHpreamble,
    STATE(116), 1,
      sym_hom_name,
  [2578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      sym_id,
    STATE(156), 1,
      sym_namespace_prefix,
  [2591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COLON_COLON,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym__id_desc_list1_repeat1,
  [2604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_string,
    STATE(120), 1,
      aux_sym_hom_body_repeat1,
    STATE(153), 1,
      sym_hom_body,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_COLON_COLON,
      sym_id,
  [2625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_id,
    STATE(34), 1,
      sym_production_name,
  [2635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym_id,
    STATE(140), 1,
      sym_id_desc,
  [2645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_id,
    STATE(30), 1,
      sym_production_name,
  [2655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_id,
    STATE(152), 1,
      sym_defn_name,
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_id,
    STATE(24), 1,
      sym_production_name,
  [2675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_SQUOTE,
    ACTIONS(426), 1,
      sym_id,
  [2685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_id,
    STATE(186), 1,
      sym_comprehension_bound,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_id,
    STATE(179), 1,
      sym_comprehension_bound,
  [2705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [2713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_id,
    STATE(178), 1,
      sym_comprehension_bound,
  [2723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_SLASH_GT,
    ACTIONS(432), 1,
      anon_sym_IN,
  [2733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_id,
    STATE(188), 1,
      sym_comprehension_bound,
  [2743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_id,
    STATE(173), 1,
      sym_comprehension_bound,
  [2753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_id,
    STATE(174), 1,
      sym_comprehension_bound,
  [2763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_id,
    STATE(189), 1,
      sym_defn_name,
  [2773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_id,
    STATE(150), 1,
      sym_id_desc,
  [2783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_id,
    STATE(28), 1,
      sym_production_name,
  [2793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(436), 1,
      sym_string,
  [2803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2811] = 2,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LF,
  [2818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON_COLON,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_RBRACE_RBRACE,
  [2832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON_COLON_EQ,
  [2839] = 2,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LF,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COLON_COLON_EQ,
  [2853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SQUOTE,
  [2860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COLON_COLON,
  [2867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_string,
  [2874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_string,
  [2881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_COLON_COLON,
  [2888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_id,
  [2895] = 2,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LF,
  [2902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_COLON_COLON,
  [2909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_COLON_COLON_EQ,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COLON_COLON,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_COLON_COLON,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COLON_COLON,
  [2937] = 2,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym_dash_line_token1,
  [2944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACE_RBRACE,
  [2951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_SLASH_GT,
  [2958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SLASH_GT,
  [2965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_SLASH_GT,
  [2972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SLASH_GT,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_COLON_COLON,
  [2986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_SLASH_GT,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SLASH_GT,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SLASH_GT,
  [3007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SLASH_GT,
  [3014] = 2,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LF,
  [3021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COLON_COLON,
  [3028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_SLASH_SLASH,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_SLASH_GT,
  [3042] = 2,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LF,
  [3049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SLASH_GT,
  [3056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SLASH_GT,
  [3063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_id,
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_SLASH_GT,
  [3077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COLON_COLON,
  [3084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_SLASH_GT,
  [3091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
  [3098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_SLASH_SLASH,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_SLASH_SLASH,
  [3112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SLASH_SLASH,
  [3119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_id,
  [3126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_SLASH_SLASH,
  [3133] = 2,
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
  [SMALL_STATE(12)] = 505,
  [SMALL_STATE(13)] = 526,
  [SMALL_STATE(14)] = 555,
  [SMALL_STATE(15)] = 584,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 676,
  [SMALL_STATE(20)] = 702,
  [SMALL_STATE(21)] = 728,
  [SMALL_STATE(22)] = 759,
  [SMALL_STATE(23)] = 778,
  [SMALL_STATE(24)] = 805,
  [SMALL_STATE(25)] = 828,
  [SMALL_STATE(26)] = 851,
  [SMALL_STATE(27)] = 874,
  [SMALL_STATE(28)] = 901,
  [SMALL_STATE(29)] = 924,
  [SMALL_STATE(30)] = 947,
  [SMALL_STATE(31)] = 970,
  [SMALL_STATE(32)] = 997,
  [SMALL_STATE(33)] = 1020,
  [SMALL_STATE(34)] = 1039,
  [SMALL_STATE(35)] = 1062,
  [SMALL_STATE(36)] = 1084,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1128,
  [SMALL_STATE(39)] = 1153,
  [SMALL_STATE(40)] = 1172,
  [SMALL_STATE(41)] = 1191,
  [SMALL_STATE(42)] = 1218,
  [SMALL_STATE(43)] = 1245,
  [SMALL_STATE(44)] = 1270,
  [SMALL_STATE(45)] = 1295,
  [SMALL_STATE(46)] = 1320,
  [SMALL_STATE(47)] = 1345,
  [SMALL_STATE(48)] = 1370,
  [SMALL_STATE(49)] = 1397,
  [SMALL_STATE(50)] = 1416,
  [SMALL_STATE(51)] = 1435,
  [SMALL_STATE(52)] = 1460,
  [SMALL_STATE(53)] = 1487,
  [SMALL_STATE(54)] = 1512,
  [SMALL_STATE(55)] = 1537,
  [SMALL_STATE(56)] = 1562,
  [SMALL_STATE(57)] = 1587,
  [SMALL_STATE(58)] = 1604,
  [SMALL_STATE(59)] = 1629,
  [SMALL_STATE(60)] = 1654,
  [SMALL_STATE(61)] = 1673,
  [SMALL_STATE(62)] = 1692,
  [SMALL_STATE(63)] = 1719,
  [SMALL_STATE(64)] = 1744,
  [SMALL_STATE(65)] = 1756,
  [SMALL_STATE(66)] = 1770,
  [SMALL_STATE(67)] = 1782,
  [SMALL_STATE(68)] = 1796,
  [SMALL_STATE(69)] = 1810,
  [SMALL_STATE(70)] = 1822,
  [SMALL_STATE(71)] = 1834,
  [SMALL_STATE(72)] = 1848,
  [SMALL_STATE(73)] = 1862,
  [SMALL_STATE(74)] = 1876,
  [SMALL_STATE(75)] = 1888,
  [SMALL_STATE(76)] = 1900,
  [SMALL_STATE(77)] = 1912,
  [SMALL_STATE(78)] = 1924,
  [SMALL_STATE(79)] = 1936,
  [SMALL_STATE(80)] = 1948,
  [SMALL_STATE(81)] = 1960,
  [SMALL_STATE(82)] = 1972,
  [SMALL_STATE(83)] = 1984,
  [SMALL_STATE(84)] = 1996,
  [SMALL_STATE(85)] = 2008,
  [SMALL_STATE(86)] = 2022,
  [SMALL_STATE(87)] = 2036,
  [SMALL_STATE(88)] = 2050,
  [SMALL_STATE(89)] = 2067,
  [SMALL_STATE(90)] = 2082,
  [SMALL_STATE(91)] = 2097,
  [SMALL_STATE(92)] = 2108,
  [SMALL_STATE(93)] = 2123,
  [SMALL_STATE(94)] = 2138,
  [SMALL_STATE(95)] = 2152,
  [SMALL_STATE(96)] = 2166,
  [SMALL_STATE(97)] = 2180,
  [SMALL_STATE(98)] = 2194,
  [SMALL_STATE(99)] = 2208,
  [SMALL_STATE(100)] = 2222,
  [SMALL_STATE(101)] = 2236,
  [SMALL_STATE(102)] = 2250,
  [SMALL_STATE(103)] = 2264,
  [SMALL_STATE(104)] = 2278,
  [SMALL_STATE(105)] = 2291,
  [SMALL_STATE(106)] = 2300,
  [SMALL_STATE(107)] = 2313,
  [SMALL_STATE(108)] = 2326,
  [SMALL_STATE(109)] = 2339,
  [SMALL_STATE(110)] = 2352,
  [SMALL_STATE(111)] = 2365,
  [SMALL_STATE(112)] = 2378,
  [SMALL_STATE(113)] = 2391,
  [SMALL_STATE(114)] = 2404,
  [SMALL_STATE(115)] = 2417,
  [SMALL_STATE(116)] = 2430,
  [SMALL_STATE(117)] = 2443,
  [SMALL_STATE(118)] = 2456,
  [SMALL_STATE(119)] = 2469,
  [SMALL_STATE(120)] = 2482,
  [SMALL_STATE(121)] = 2495,
  [SMALL_STATE(122)] = 2504,
  [SMALL_STATE(123)] = 2517,
  [SMALL_STATE(124)] = 2530,
  [SMALL_STATE(125)] = 2539,
  [SMALL_STATE(126)] = 2552,
  [SMALL_STATE(127)] = 2565,
  [SMALL_STATE(128)] = 2578,
  [SMALL_STATE(129)] = 2591,
  [SMALL_STATE(130)] = 2604,
  [SMALL_STATE(131)] = 2617,
  [SMALL_STATE(132)] = 2625,
  [SMALL_STATE(133)] = 2635,
  [SMALL_STATE(134)] = 2645,
  [SMALL_STATE(135)] = 2655,
  [SMALL_STATE(136)] = 2665,
  [SMALL_STATE(137)] = 2675,
  [SMALL_STATE(138)] = 2685,
  [SMALL_STATE(139)] = 2695,
  [SMALL_STATE(140)] = 2705,
  [SMALL_STATE(141)] = 2713,
  [SMALL_STATE(142)] = 2723,
  [SMALL_STATE(143)] = 2733,
  [SMALL_STATE(144)] = 2743,
  [SMALL_STATE(145)] = 2753,
  [SMALL_STATE(146)] = 2763,
  [SMALL_STATE(147)] = 2773,
  [SMALL_STATE(148)] = 2783,
  [SMALL_STATE(149)] = 2793,
  [SMALL_STATE(150)] = 2803,
  [SMALL_STATE(151)] = 2811,
  [SMALL_STATE(152)] = 2818,
  [SMALL_STATE(153)] = 2825,
  [SMALL_STATE(154)] = 2832,
  [SMALL_STATE(155)] = 2839,
  [SMALL_STATE(156)] = 2846,
  [SMALL_STATE(157)] = 2853,
  [SMALL_STATE(158)] = 2860,
  [SMALL_STATE(159)] = 2867,
  [SMALL_STATE(160)] = 2874,
  [SMALL_STATE(161)] = 2881,
  [SMALL_STATE(162)] = 2888,
  [SMALL_STATE(163)] = 2895,
  [SMALL_STATE(164)] = 2902,
  [SMALL_STATE(165)] = 2909,
  [SMALL_STATE(166)] = 2916,
  [SMALL_STATE(167)] = 2923,
  [SMALL_STATE(168)] = 2930,
  [SMALL_STATE(169)] = 2937,
  [SMALL_STATE(170)] = 2944,
  [SMALL_STATE(171)] = 2951,
  [SMALL_STATE(172)] = 2958,
  [SMALL_STATE(173)] = 2965,
  [SMALL_STATE(174)] = 2972,
  [SMALL_STATE(175)] = 2979,
  [SMALL_STATE(176)] = 2986,
  [SMALL_STATE(177)] = 2993,
  [SMALL_STATE(178)] = 3000,
  [SMALL_STATE(179)] = 3007,
  [SMALL_STATE(180)] = 3014,
  [SMALL_STATE(181)] = 3021,
  [SMALL_STATE(182)] = 3028,
  [SMALL_STATE(183)] = 3035,
  [SMALL_STATE(184)] = 3042,
  [SMALL_STATE(185)] = 3049,
  [SMALL_STATE(186)] = 3056,
  [SMALL_STATE(187)] = 3063,
  [SMALL_STATE(188)] = 3070,
  [SMALL_STATE(189)] = 3077,
  [SMALL_STATE(190)] = 3084,
  [SMALL_STATE(191)] = 3091,
  [SMALL_STATE(192)] = 3098,
  [SMALL_STATE(193)] = 3105,
  [SMALL_STATE(194)] = 3112,
  [SMALL_STATE(195)] = 3119,
  [SMALL_STATE(196)] = 3126,
  [SMALL_STATE(197)] = 3133,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 29),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 22),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 22),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 24),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 24),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 30),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 30),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 25),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 25),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 26),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 26),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 32),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 32),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(169),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(67),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(85),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 28),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 28),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 16),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 16),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 15),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 15),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 18),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 18),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 17),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 17),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 19),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 19),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 20),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 20),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 21),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 21),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 13),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 13),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 8),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 12),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 12),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 10),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(38),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 9),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 23),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 23),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 33),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_body, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 6),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 11),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hom_body_repeat1, 1, 0, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_name, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 14),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [516] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
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
