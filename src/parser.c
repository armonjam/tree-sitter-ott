#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 10
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 39

enum ts_symbol_identifiers {
  anon_sym_grammar = 1,
  anon_sym_embed = 2,
  anon_sym_defns = 3,
  anon_sym_COLON_COLON = 4,
  anon_sym_COLON_COLON_EQ = 5,
  anon_sym_defn = 6,
  anon_sym_by = 7,
  anon_sym_DASH_DASH_DASH_DASH = 8,
  aux_sym_dash_line_token1 = 9,
  anon_sym_PIPE = 10,
  anon_sym_LT_SLASH = 11,
  anon_sym_SLASH_SLASH = 12,
  anon_sym_SLASH_GT = 13,
  anon_sym_metavar = 14,
  anon_sym_indexvar = 15,
  anon_sym_COMMA = 16,
  anon_sym_IN = 17,
  anon_sym_LBRACE_LBRACE = 18,
  anon_sym_RBRACE_RBRACE = 19,
  sym_hom_name = 20,
  anon_sym_LBRACK_LBRACK = 21,
  anon_sym_RBRACK_RBRACK = 22,
  sym_comment = 23,
  anon_sym_DOT_DOT = 24,
  anon_sym_DOT_DOT_DOT = 25,
  anon_sym_DOT_DOT_DOT_DOT = 26,
  anon_sym_SQUOTE = 27,
  sym_id = 28,
  sym_string = 29,
  sym_line_end = 30,
  sym_hom_string = 31,
  sym_hom_inner_string = 32,
  sym_error_sentinel = 33,
  sym_source_file = 34,
  sym__item = 35,
  sym_defnclass = 36,
  sym_defnclass_name = 37,
  sym_defn = 38,
  sym_defn_name = 39,
  sym_defn_rule = 40,
  sym_rule_separator = 41,
  sym_rule_name = 42,
  sym_dash_line = 43,
  sym_rule_line = 44,
  sym_grammar_rule = 45,
  sym_production = 46,
  sym_production_mod = 47,
  sym_production_name = 48,
  sym_element = 49,
  sym_metavardefn = 50,
  sym__id_desc_list1 = 51,
  sym_id_desc = 52,
  sym_comprehension_bound = 53,
  sym_embed = 54,
  sym_homomorphism = 55,
  sym__hom_element = 56,
  sym_hom_inner_block = 57,
  sym__hom_inner = 58,
  sym__line_end = 59,
  sym__hom_string = 60,
  sym__hom_inner_string = 61,
  sym_dots = 62,
  sym_namespace_prefix = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym__item_repeat1 = 65,
  aux_sym_defnclass_repeat1 = 66,
  aux_sym_defnclass_repeat2 = 67,
  aux_sym_defn_repeat1 = 68,
  aux_sym_defn_repeat2 = 69,
  aux_sym_defn_rule_repeat1 = 70,
  aux_sym_rule_line_repeat1 = 71,
  aux_sym_grammar_rule_repeat1 = 72,
  aux_sym_production_repeat1 = 73,
  aux_sym__id_desc_list1_repeat1 = 74,
  aux_sym_homomorphism_repeat1 = 75,
  aux_sym__hom_inner_repeat1 = 76,
  anon_alias_sym_defn_name = 77,
  anon_alias_sym_defnclass_name = 78,
  anon_alias_sym_element = 79,
  alias_sym_hom_body = 80,
  anon_alias_sym_id = 81,
  anon_alias_sym_production_modifier = 82,
  anon_alias_sym_production_name = 83,
  anon_alias_sym_q_id = 84,
  anon_alias_sym_rule_name = 85,
  anon_alias_sym_symbol = 86,
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
  [sym_hom_name] = "hom_name",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_comment] = "comment",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT_DOT_DOT] = "....",
  [anon_sym_SQUOTE] = "'",
  [sym_id] = "id",
  [sym_string] = "string",
  [sym_line_end] = "line_end",
  [sym_hom_string] = "hom_string",
  [sym_hom_inner_string] = "hom_inner_string",
  [sym_error_sentinel] = "error_sentinel",
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
  [sym__hom_element] = "_hom_element",
  [sym_hom_inner_block] = "hom_inner_block",
  [sym__hom_inner] = "_hom_inner",
  [sym__line_end] = "_line_end",
  [sym__hom_string] = "_hom_string",
  [sym__hom_inner_string] = "_hom_inner_string",
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
  [aux_sym__hom_inner_repeat1] = "_hom_inner_repeat1",
  [anon_alias_sym_defn_name] = "defn_name",
  [anon_alias_sym_defnclass_name] = "defnclass_name",
  [anon_alias_sym_element] = "element",
  [alias_sym_hom_body] = "hom_body",
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
  [sym_hom_name] = sym_hom_name,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_comment] = sym_comment,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_id] = sym_id,
  [sym_string] = sym_string,
  [sym_line_end] = sym_line_end,
  [sym_hom_string] = sym_hom_string,
  [sym_hom_inner_string] = sym_hom_inner_string,
  [sym_error_sentinel] = sym_error_sentinel,
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
  [sym__hom_element] = sym__hom_element,
  [sym_hom_inner_block] = sym_hom_inner_block,
  [sym__hom_inner] = sym__hom_inner,
  [sym__line_end] = sym__line_end,
  [sym__hom_string] = sym__hom_string,
  [sym__hom_inner_string] = sym__hom_inner_string,
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
  [aux_sym__hom_inner_repeat1] = aux_sym__hom_inner_repeat1,
  [anon_alias_sym_defn_name] = anon_alias_sym_defn_name,
  [anon_alias_sym_defnclass_name] = anon_alias_sym_defnclass_name,
  [anon_alias_sym_element] = anon_alias_sym_element,
  [alias_sym_hom_body] = alias_sym_hom_body,
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
  [sym_hom_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
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
  [sym_line_end] = {
    .visible = true,
    .named = false,
  },
  [sym_hom_string] = {
    .visible = true,
    .named = false,
  },
  [sym_hom_inner_string] = {
    .visible = true,
    .named = false,
  },
  [sym_error_sentinel] = {
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
  [sym__hom_element] = {
    .visible = false,
    .named = true,
  },
  [sym_hom_inner_block] = {
    .visible = true,
    .named = true,
  },
  [sym__hom_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__line_end] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string] = {
    .visible = false,
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
  [aux_sym__hom_inner_repeat1] = {
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
  field_hom_inner_block = 9,
  field_hom_string = 10,
  field_homomorphism = 11,
  field_line = 12,
  field_modifier = 13,
  field_name = 14,
  field_namespace_prefix = 15,
  field_open = 16,
  field_premise = 17,
  field_production_name = 18,
  field_rule_name = 19,
  field_separator = 20,
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
  [field_hom_inner_block] = "hom_inner_block",
  [field_hom_string] = "hom_string",
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
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 6},
  [8] = {.index = 13, .length = 4},
  [9] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 4},
  [17] = {.index = 29, .length = 1},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 3},
  [23] = {.index = 39, .length = 3},
  [24] = {.index = 42, .length = 3},
  [25] = {.index = 45, .length = 4},
  [26] = {.index = 49, .length = 2},
  [28] = {.index = 51, .length = 3},
  [29] = {.index = 54, .length = 3},
  [30] = {.index = 57, .length = 3},
  [31] = {.index = 60, .length = 2},
  [32] = {.index = 62, .length = 4},
  [33] = {.index = 66, .length = 4},
  [34] = {.index = 70, .length = 4},
  [36] = {.index = 74, .length = 3},
  [37] = {.index = 77, .length = 5},
  [38] = {.index = 82, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 2},
    {field_name, 1},
    {field_open, 0},
  [3] =
    {field_hom_inner_block, 0, .inherited = true},
    {field_hom_string, 0, .inherited = true},
  [5] =
    {field_hom_inner_block, 0},
  [6] =
    {field_hom_string, 0},
  [7] =
    {field_body, 2},
    {field_close, 3},
    {field_hom_inner_block, 2, .inherited = true},
    {field_hom_string, 2, .inherited = true},
    {field_name, 1},
    {field_open, 0},
  [13] =
    {field_hom_inner_block, 0, .inherited = true},
    {field_hom_inner_block, 1, .inherited = true},
    {field_hom_string, 0, .inherited = true},
    {field_hom_string, 1, .inherited = true},
  [17] =
    {field_class_name, 0},
    {field_namespace_prefix, 2},
  [19] =
    {field_class_name, 0},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [22] =
    {field_class_name, 0},
    {field_definition, 4},
    {field_namespace_prefix, 2},
  [25] =
    {field_class_name, 0},
    {field_definition, 5},
    {field_homomorphism, 4},
    {field_namespace_prefix, 2},
  [29] =
    {field_production_name, 3},
  [30] =
    {field_homomorphism, 4},
    {field_production_name, 3},
  [32] =
    {field_modifier, 2},
    {field_production_name, 4},
  [34] =
    {field_element, 1},
    {field_production_name, 4},
  [36] =
    {field_homomorphism, 5},
    {field_modifier, 2},
    {field_production_name, 4},
  [39] =
    {field_element, 1},
    {field_homomorphism, 5},
    {field_production_name, 4},
  [42] =
    {field_element, 1},
    {field_modifier, 3},
    {field_production_name, 5},
  [45] =
    {field_element, 1},
    {field_homomorphism, 6},
    {field_modifier, 3},
    {field_production_name, 5},
  [49] =
    {field_definition_name, 3},
    {field_namespace_prefix, 5},
  [51] =
    {field_definition_name, 3},
    {field_definition_rule, 8},
    {field_namespace_prefix, 5},
  [54] =
    {field_definition_name, 3},
    {field_homomorphism, 6},
    {field_namespace_prefix, 5},
  [57] =
    {field_definition_name, 4},
    {field_element, 1},
    {field_namespace_prefix, 6},
  [60] =
    {field_conclusion, 1},
    {field_separator, 0},
  [62] =
    {field_definition_name, 3},
    {field_definition_rule, 9},
    {field_homomorphism, 6},
    {field_namespace_prefix, 5},
  [66] =
    {field_definition_name, 4},
    {field_definition_rule, 9},
    {field_element, 1},
    {field_namespace_prefix, 6},
  [70] =
    {field_definition_name, 4},
    {field_element, 1},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [74] =
    {field_conclusion, 2},
    {field_premise, 0},
    {field_separator, 1},
  [77] =
    {field_definition_name, 4},
    {field_definition_rule, 10},
    {field_element, 1},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [82] =
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
  [7] = {
    [2] = alias_sym_hom_body,
  },
  [10] = {
    [1] = anon_alias_sym_q_id,
  },
  [13] = {
    [0] = anon_alias_sym_symbol,
  },
  [15] = {
    [0] = anon_alias_sym_production_modifier,
  },
  [16] = {
    [0] = anon_alias_sym_production_name,
  },
  [18] = {
    [0] = anon_alias_sym_defn_name,
  },
  [27] = {
    [0] = anon_alias_sym_element,
  },
  [35] = {
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
  [25] = 11,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 24,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 33,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 18,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 19,
  [62] = 62,
  [63] = 63,
  [64] = 51,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 62,
  [69] = 53,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 80,
  [84] = 82,
  [85] = 82,
  [86] = 80,
  [87] = 81,
  [88] = 88,
  [89] = 76,
  [90] = 90,
  [91] = 74,
  [92] = 92,
  [93] = 74,
  [94] = 94,
  [95] = 78,
  [96] = 14,
  [97] = 78,
  [98] = 98,
  [99] = 94,
  [100] = 100,
  [101] = 81,
  [102] = 102,
  [103] = 94,
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
  [135] = 132,
  [136] = 136,
  [137] = 132,
  [138] = 138,
  [139] = 134,
  [140] = 134,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 144,
  [150] = 150,
  [151] = 151,
  [152] = 145,
  [153] = 144,
  [154] = 145,
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
  [165] = 78,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 78,
  [185] = 185,
  [186] = 168,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 180,
  [192] = 188,
  [193] = 189,
  [194] = 168,
  [195] = 180,
  [196] = 183,
  [197] = 197,
  [198] = 198,
  [199] = 188,
  [200] = 200,
  [201] = 201,
  [202] = 189,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 185,
  [208] = 206,
  [209] = 209,
  [210] = 210,
  [211] = 185,
  [212] = 206,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '%', 85,
        '\'', 92,
        ',', 77,
        '-', 11,
        '.', 12,
        '/', 13,
        ':', 15,
        '<', 14,
        'I', 19,
        '[', 20,
        ']', 21,
        'b', 48,
        'd', 30,
        'e', 35,
        'g', 40,
        'i', 38,
        'm', 31,
        '{', 49,
        '|', 65,
        '}', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == ':') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == '{') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '<') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '<') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '<') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == '[') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == '{') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(80);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '%', 85,
        ':', 16,
        'd', 101,
        'e', 106,
        'g', 112,
        'i', 109,
        'm', 102,
        '{', 49,
        '|', 65,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '%', 84,
        '-', 124,
        '.', 125,
        '<', 126,
        'd', 137,
        'e', 142,
        'g', 148,
        'i', 146,
        'm', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_hom_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 51},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 51},
  [26] = {.lex_state = 51},
  [27] = {.lex_state = 51},
  [28] = {.lex_state = 51},
  [29] = {.lex_state = 51},
  [30] = {.lex_state = 51},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 51},
  [37] = {.lex_state = 51},
  [38] = {.lex_state = 51},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 3},
  [41] = {.lex_state = 51},
  [42] = {.lex_state = 7, .external_lex_state = 3},
  [43] = {.lex_state = 51},
  [44] = {.lex_state = 51},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 51},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 7, .external_lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 51},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 0, .external_lex_state = 4},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 7, .external_lex_state = 3},
  [86] = {.lex_state = 7, .external_lex_state = 3},
  [87] = {.lex_state = 7, .external_lex_state = 3},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 7, .external_lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 7, .external_lex_state = 3},
  [94] = {.lex_state = 7, .external_lex_state = 3},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 7, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 7, .external_lex_state = 3},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 64},
  [173] = {.lex_state = 51},
  [174] = {.lex_state = 51},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 51},
  [177] = {.lex_state = 51},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 51},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 51},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 51},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 51},
  [201] = {.lex_state = 51},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 51},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
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
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_line_end] = ACTIONS(1),
    [sym_hom_string] = ACTIONS(1),
    [sym_hom_inner_string] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(175),
    [sym__item] = STATE(60),
    [sym_metavardefn] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(60),
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
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
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
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
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
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
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
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
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
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
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
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
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
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
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
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
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
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(16), 2,
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
  [494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_PIPE,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(13), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(44), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(82), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [523] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_PIPE,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(43), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(88), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [552] = 3,
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
  [573] = 3,
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
  [594] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(50), 1,
      sym_rule_separator,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(177), 1,
      sym_dash_line,
    STATE(35), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
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
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    ACTIONS(106), 10,
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
  [692] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(71), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [718] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(67), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(179), 1,
      sym__id_desc_list1,
    ACTIONS(120), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(37), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [771] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(126), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(132), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(135), 1,
      sym_hom_string,
    STATE(23), 1,
      aux_sym_homomorphism_repeat1,
    STATE(98), 1,
      sym__hom_string,
    STATE(102), 1,
      sym_hom_inner_block,
    ACTIONS(129), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(104), 2,
      sym__hom_element,
      sym_dots,
  [804] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(140), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(144), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(146), 1,
      sym_hom_string,
    STATE(39), 1,
      aux_sym_homomorphism_repeat1,
    STATE(98), 1,
      sym__hom_string,
    STATE(102), 1,
      sym_hom_inner_block,
    ACTIONS(142), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(104), 2,
      sym__hom_element,
      sym_dots,
  [837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
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
  [860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(153), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [883] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(157), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(161), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
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
  [952] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(169), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(29), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(173), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(177), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1021] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(144), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(146), 1,
      sym_hom_string,
    ACTIONS(179), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(23), 1,
      aux_sym_homomorphism_repeat1,
    STATE(98), 1,
      sym__hom_string,
    STATE(102), 1,
      sym_hom_inner_block,
    ACTIONS(142), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(104), 2,
      sym__hom_element,
      sym_dots,
  [1054] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(144), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(146), 1,
      sym_hom_string,
    ACTIONS(181), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(33), 1,
      aux_sym_homomorphism_repeat1,
    STATE(98), 1,
      sym__hom_string,
    STATE(102), 1,
      sym_hom_inner_block,
    ACTIONS(142), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(104), 2,
      sym__hom_element,
      sym_dots,
  [1087] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(185), 1,
      anon_sym_LT_SLASH,
    ACTIONS(191), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(35), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(188), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(196), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1141] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(179), 1,
      sym__id_desc_list1,
    ACTIONS(200), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(38), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1168] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(179), 1,
      sym__id_desc_list1,
    ACTIONS(204), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(38), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(202), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1195] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(144), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(146), 1,
      sym_hom_string,
    ACTIONS(209), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(23), 1,
      aux_sym_homomorphism_repeat1,
    STATE(98), 1,
      sym__hom_string,
    STATE(102), 1,
      sym_hom_inner_block,
    ACTIONS(142), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(104), 2,
      sym__hom_element,
      sym_dots,
  [1228] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(211), 1,
      sym_line_end,
    STATE(56), 1,
      aux_sym_rule_line_repeat1,
    STATE(86), 1,
      sym_dots,
    STATE(96), 1,
      sym__line_end,
    STATE(100), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(218), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1280] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(220), 1,
      sym_line_end,
    STATE(14), 1,
      sym__line_end,
    STATE(56), 1,
      aux_sym_rule_line_repeat1,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(224), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(222), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(88), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1354] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COLON_COLON,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    ACTIONS(232), 1,
      sym_string,
    STATE(80), 1,
      sym_dots,
    STATE(65), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(230), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1379] = 3,
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
  [1396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(52), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1415] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(17), 1,
      sym_rule_line,
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1442] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      anon_sym_grammar,
    ACTIONS(241), 1,
      anon_sym_embed,
    ACTIONS(244), 1,
      anon_sym_defns,
    ACTIONS(247), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(49), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1467] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(15), 1,
      sym_rule_line,
    STATE(42), 1,
      aux_sym_rule_line_repeat1,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LT_SLASH,
    ACTIONS(252), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(256), 1,
      sym_string,
    STATE(83), 1,
      sym_dots,
    STATE(68), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(254), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1538] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LT_SLASH,
    ACTIONS(256), 1,
      sym_string,
    ACTIONS(260), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_dots,
    STATE(51), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(254), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1563] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LT_SLASH,
    ACTIONS(256), 1,
      sym_string,
    ACTIONS(262), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_dots,
    STATE(68), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(254), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1588] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LT_SLASH,
    ACTIONS(256), 1,
      sym_string,
    ACTIONS(264), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_dots,
    STATE(54), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(254), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1613] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LT_SLASH,
    ACTIONS(272), 1,
      sym_string,
    ACTIONS(275), 1,
      sym_line_end,
    STATE(56), 1,
      aux_sym_rule_line_repeat1,
    STATE(86), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    ACTIONS(269), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1659] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    ACTIONS(232), 1,
      sym_string,
    ACTIONS(279), 1,
      anon_sym_COLON_COLON,
    STATE(80), 1,
      sym_dots,
    STATE(62), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(230), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(281), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1701] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(49), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1743] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON_COLON,
    ACTIONS(289), 1,
      anon_sym_LT_SLASH,
    ACTIONS(295), 1,
      sym_string,
    STATE(80), 1,
      sym_dots,
    STATE(62), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(292), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1768] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LT_SLASH,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(304), 1,
      sym_hom_inner_string,
    STATE(121), 1,
      sym_dots,
    STATE(205), 1,
      sym__hom_inner,
    ACTIONS(300), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1795] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LT_SLASH,
    ACTIONS(256), 1,
      sym_string,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_dots,
    STATE(68), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(254), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1820] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    ACTIONS(232), 1,
      sym_string,
    ACTIONS(308), 1,
      anon_sym_COLON_COLON,
    STATE(80), 1,
      sym_dots,
    STATE(62), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(230), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1845] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    ACTIONS(232), 1,
      sym_string,
    ACTIONS(310), 1,
      anon_sym_COLON_COLON,
    STATE(80), 1,
      sym_dots,
    STATE(58), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(230), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    STATE(70), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(312), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1889] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(314), 1,
      anon_sym_LT_SLASH,
    ACTIONS(320), 1,
      sym_string,
    STATE(83), 1,
      sym_dots,
    STATE(68), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(317), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1914] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LT_SLASH,
    ACTIONS(256), 1,
      sym_string,
    ACTIONS(323), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_dots,
    STATE(64), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(254), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_defn,
    STATE(70), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    STATE(70), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(330), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1977] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_hom_inner_string,
    ACTIONS(334), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
    ACTIONS(332), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [1997] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(339), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(341), 1,
      sym_hom_inner_string,
    STATE(122), 1,
      sym_dots,
    ACTIONS(300), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(345), 1,
      anon_sym_COLON_COLON,
    ACTIONS(347), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(351), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_line_end,
    ACTIONS(359), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_line_end,
    ACTIONS(355), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_line_end,
    ACTIONS(357), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(367), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_line_end,
    ACTIONS(349), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2231] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(373), 1,
      anon_sym_COLON_COLON,
    ACTIONS(375), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(75), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_line_end,
    ACTIONS(343), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_line_end,
    ACTIONS(379), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(92), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_line_end,
    ACTIONS(353), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(383), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_line_end,
    ACTIONS(387), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(391), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(395), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_SLASH_GT,
    ACTIONS(403), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(198), 1,
      sym_dots,
    ACTIONS(401), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COLON_COLON,
    ACTIONS(409), 1,
      sym_id,
    STATE(113), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_hom_inner_string,
    ACTIONS(411), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_COLON_COLON,
    ACTIONS(415), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym__id_desc_list1_repeat1,
  [2505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(92), 1,
      sym_embed,
    STATE(57), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2519] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COLON_COLON,
    ACTIONS(421), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym__id_desc_list1_repeat1,
  [2535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      sym_hom_inner_string,
    STATE(124), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_id,
    ACTIONS(430), 1,
      anon_sym_COLON_COLON,
    STATE(117), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_COLON_COLON,
    ACTIONS(434), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(109), 1,
      aux_sym__id_desc_list1_repeat1,
  [2579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(436), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_id,
    ACTIONS(438), 1,
      anon_sym_COLON_COLON,
    STATE(117), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON_COLON,
    ACTIONS(442), 1,
      sym_id,
    STATE(117), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(445), 1,
      anon_sym_by,
    STATE(115), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(447), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_id,
    ACTIONS(449), 1,
      anon_sym_COLON_COLON,
    STATE(116), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(451), 1,
      sym_hom_inner_string,
    STATE(125), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(455), 1,
      sym_hom_inner_string,
    STATE(108), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(457), 1,
      anon_sym_by,
    STATE(119), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_hom_inner_string,
    ACTIONS(459), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_hom_inner_string,
    ACTIONS(453), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_id,
    STATE(118), 1,
      sym_namespace_prefix,
  [2755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_id,
    STATE(114), 1,
      sym_id_desc,
    STATE(203), 1,
      sym__id_desc_list1,
  [2777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_id,
    STATE(92), 1,
      sym_defnclass,
    STATE(201), 1,
      sym_defnclass_name,
  [2790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_id,
    STATE(123), 1,
      sym_namespace_prefix,
  [2803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_id,
    ACTIONS(475), 1,
      sym_string,
    STATE(188), 1,
      sym_comprehension_bound,
  [2816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_id,
    STATE(178), 1,
      sym_namespace_prefix,
  [2829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_id,
    ACTIONS(477), 1,
      sym_string,
    STATE(189), 1,
      sym_comprehension_bound,
  [2842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_id,
    ACTIONS(479), 1,
      sym_string,
    STATE(199), 1,
      sym_comprehension_bound,
  [2855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COLON_COLON,
    ACTIONS(421), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_id,
    ACTIONS(481), 1,
      sym_string,
    STATE(192), 1,
      sym_comprehension_bound,
  [2879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_id,
    STATE(187), 1,
      sym_namespace_prefix,
  [2892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_id,
    ACTIONS(483), 1,
      sym_string,
    STATE(193), 1,
      sym_comprehension_bound,
  [2905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_id,
    ACTIONS(485), 1,
      sym_string,
    STATE(202), 1,
      sym_comprehension_bound,
  [2918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_line_end,
    STATE(2), 1,
      sym__line_end,
  [2937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(36), 1,
      sym_production_name,
  [2947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(186), 1,
      sym_comprehension_bound,
  [2957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(195), 1,
      sym_comprehension_bound,
  [2967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_id,
    STATE(136), 1,
      sym_id_desc,
  [2977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(30), 1,
      sym_production_name,
  [2987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_line_end,
    STATE(5), 1,
      sym__line_end,
  [2997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(194), 1,
      sym_comprehension_bound,
  [3007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(27), 1,
      sym_production_name,
  [3017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_id,
    STATE(159), 1,
      sym_rule_name,
  [3027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(191), 1,
      sym_comprehension_bound,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(168), 1,
      sym_comprehension_bound,
  [3047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(180), 1,
      sym_comprehension_bound,
  [3057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_SQUOTE,
    ACTIONS(501), 1,
      sym_id,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(31), 1,
      sym_production_name,
  [3077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(167), 1,
      sym_comprehension_bound,
  [3087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_line_end,
    STATE(3), 1,
      sym__line_end,
  [3097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_line_end,
    STATE(106), 1,
      sym__line_end,
  [3107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_id,
    STATE(197), 1,
      sym_defn_name,
  [3117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SLASH_GT,
    ACTIONS(511), 1,
      anon_sym_IN,
  [3127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(169), 1,
      sym_comprehension_bound,
  [3137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_id,
    STATE(174), 1,
      sym_defn_name,
  [3147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_line_end,
    STATE(10), 1,
      sym__line_end,
  [3157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 2,
      sym_hom_inner_string,
      anon_sym_RBRACK_RBRACK,
  [3165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 2,
      anon_sym_COLON_COLON,
      sym_id,
  [3173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_SLASH_GT,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SLASH_GT,
  [3187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SLASH_GT,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACK_RBRACK,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_id,
  [3208] = 2,
    ACTIONS(527), 1,
      aux_sym_dash_line_token1,
    ACTIONS(529), 1,
      sym_comment,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_COLON_COLON,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_COLON_COLON,
  [3229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COLON_COLON,
  [3243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COLON_COLON,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COLON_COLON_EQ,
  [3257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COLON_COLON,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SLASH_GT,
  [3271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_SLASH_GT,
  [3278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_line_end,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_hom_name,
  [3292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_id,
  [3299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_SLASH_SLASH,
  [3306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SLASH_GT,
  [3313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON_COLON_EQ,
  [3320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH_GT,
  [3327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SLASH_GT,
  [3334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON_COLON,
  [3341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SLASH_GT,
  [3348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
  [3355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SLASH_GT,
  [3362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SLASH_GT,
  [3369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SLASH_GT,
  [3376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_hom_name,
  [3383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COLON_COLON,
  [3390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_id,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SLASH_GT,
  [3404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_COLON_COLON,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_COLON_COLON,
  [3418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH_GT,
  [3425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON_COLON_EQ,
  [3432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RBRACK_RBRACK,
  [3446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_SLASH_SLASH,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
  [3460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SLASH_SLASH,
  [3467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SQUOTE,
  [3474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RBRACK_RBRACK,
  [3481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SLASH_SLASH,
  [3488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
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
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 552,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 594,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 672,
  [SMALL_STATE(20)] = 692,
  [SMALL_STATE(21)] = 718,
  [SMALL_STATE(22)] = 744,
  [SMALL_STATE(23)] = 771,
  [SMALL_STATE(24)] = 804,
  [SMALL_STATE(25)] = 837,
  [SMALL_STATE(26)] = 860,
  [SMALL_STATE(27)] = 883,
  [SMALL_STATE(28)] = 906,
  [SMALL_STATE(29)] = 929,
  [SMALL_STATE(30)] = 952,
  [SMALL_STATE(31)] = 975,
  [SMALL_STATE(32)] = 998,
  [SMALL_STATE(33)] = 1021,
  [SMALL_STATE(34)] = 1054,
  [SMALL_STATE(35)] = 1087,
  [SMALL_STATE(36)] = 1118,
  [SMALL_STATE(37)] = 1141,
  [SMALL_STATE(38)] = 1168,
  [SMALL_STATE(39)] = 1195,
  [SMALL_STATE(40)] = 1228,
  [SMALL_STATE(41)] = 1258,
  [SMALL_STATE(42)] = 1280,
  [SMALL_STATE(43)] = 1310,
  [SMALL_STATE(44)] = 1332,
  [SMALL_STATE(45)] = 1354,
  [SMALL_STATE(46)] = 1379,
  [SMALL_STATE(47)] = 1396,
  [SMALL_STATE(48)] = 1415,
  [SMALL_STATE(49)] = 1442,
  [SMALL_STATE(50)] = 1467,
  [SMALL_STATE(51)] = 1494,
  [SMALL_STATE(52)] = 1519,
  [SMALL_STATE(53)] = 1538,
  [SMALL_STATE(54)] = 1563,
  [SMALL_STATE(55)] = 1588,
  [SMALL_STATE(56)] = 1613,
  [SMALL_STATE(57)] = 1640,
  [SMALL_STATE(58)] = 1659,
  [SMALL_STATE(59)] = 1684,
  [SMALL_STATE(60)] = 1701,
  [SMALL_STATE(61)] = 1726,
  [SMALL_STATE(62)] = 1743,
  [SMALL_STATE(63)] = 1768,
  [SMALL_STATE(64)] = 1795,
  [SMALL_STATE(65)] = 1820,
  [SMALL_STATE(66)] = 1845,
  [SMALL_STATE(67)] = 1870,
  [SMALL_STATE(68)] = 1889,
  [SMALL_STATE(69)] = 1914,
  [SMALL_STATE(70)] = 1939,
  [SMALL_STATE(71)] = 1958,
  [SMALL_STATE(72)] = 1977,
  [SMALL_STATE(73)] = 1997,
  [SMALL_STATE(74)] = 2021,
  [SMALL_STATE(75)] = 2033,
  [SMALL_STATE(76)] = 2051,
  [SMALL_STATE(77)] = 2063,
  [SMALL_STATE(78)] = 2075,
  [SMALL_STATE(79)] = 2089,
  [SMALL_STATE(80)] = 2101,
  [SMALL_STATE(81)] = 2113,
  [SMALL_STATE(82)] = 2125,
  [SMALL_STATE(83)] = 2137,
  [SMALL_STATE(84)] = 2149,
  [SMALL_STATE(85)] = 2161,
  [SMALL_STATE(86)] = 2175,
  [SMALL_STATE(87)] = 2189,
  [SMALL_STATE(88)] = 2203,
  [SMALL_STATE(89)] = 2217,
  [SMALL_STATE(90)] = 2231,
  [SMALL_STATE(91)] = 2249,
  [SMALL_STATE(92)] = 2261,
  [SMALL_STATE(93)] = 2273,
  [SMALL_STATE(94)] = 2287,
  [SMALL_STATE(95)] = 2301,
  [SMALL_STATE(96)] = 2313,
  [SMALL_STATE(97)] = 2327,
  [SMALL_STATE(98)] = 2341,
  [SMALL_STATE(99)] = 2355,
  [SMALL_STATE(100)] = 2367,
  [SMALL_STATE(101)] = 2381,
  [SMALL_STATE(102)] = 2393,
  [SMALL_STATE(103)] = 2407,
  [SMALL_STATE(104)] = 2419,
  [SMALL_STATE(105)] = 2433,
  [SMALL_STATE(106)] = 2450,
  [SMALL_STATE(107)] = 2461,
  [SMALL_STATE(108)] = 2475,
  [SMALL_STATE(109)] = 2489,
  [SMALL_STATE(110)] = 2505,
  [SMALL_STATE(111)] = 2519,
  [SMALL_STATE(112)] = 2535,
  [SMALL_STATE(113)] = 2549,
  [SMALL_STATE(114)] = 2563,
  [SMALL_STATE(115)] = 2579,
  [SMALL_STATE(116)] = 2593,
  [SMALL_STATE(117)] = 2607,
  [SMALL_STATE(118)] = 2621,
  [SMALL_STATE(119)] = 2635,
  [SMALL_STATE(120)] = 2649,
  [SMALL_STATE(121)] = 2663,
  [SMALL_STATE(122)] = 2677,
  [SMALL_STATE(123)] = 2691,
  [SMALL_STATE(124)] = 2705,
  [SMALL_STATE(125)] = 2719,
  [SMALL_STATE(126)] = 2733,
  [SMALL_STATE(127)] = 2742,
  [SMALL_STATE(128)] = 2755,
  [SMALL_STATE(129)] = 2764,
  [SMALL_STATE(130)] = 2777,
  [SMALL_STATE(131)] = 2790,
  [SMALL_STATE(132)] = 2803,
  [SMALL_STATE(133)] = 2816,
  [SMALL_STATE(134)] = 2829,
  [SMALL_STATE(135)] = 2842,
  [SMALL_STATE(136)] = 2855,
  [SMALL_STATE(137)] = 2866,
  [SMALL_STATE(138)] = 2879,
  [SMALL_STATE(139)] = 2892,
  [SMALL_STATE(140)] = 2905,
  [SMALL_STATE(141)] = 2918,
  [SMALL_STATE(142)] = 2927,
  [SMALL_STATE(143)] = 2937,
  [SMALL_STATE(144)] = 2947,
  [SMALL_STATE(145)] = 2957,
  [SMALL_STATE(146)] = 2967,
  [SMALL_STATE(147)] = 2977,
  [SMALL_STATE(148)] = 2987,
  [SMALL_STATE(149)] = 2997,
  [SMALL_STATE(150)] = 3007,
  [SMALL_STATE(151)] = 3017,
  [SMALL_STATE(152)] = 3027,
  [SMALL_STATE(153)] = 3037,
  [SMALL_STATE(154)] = 3047,
  [SMALL_STATE(155)] = 3057,
  [SMALL_STATE(156)] = 3067,
  [SMALL_STATE(157)] = 3077,
  [SMALL_STATE(158)] = 3087,
  [SMALL_STATE(159)] = 3097,
  [SMALL_STATE(160)] = 3107,
  [SMALL_STATE(161)] = 3117,
  [SMALL_STATE(162)] = 3127,
  [SMALL_STATE(163)] = 3137,
  [SMALL_STATE(164)] = 3147,
  [SMALL_STATE(165)] = 3157,
  [SMALL_STATE(166)] = 3165,
  [SMALL_STATE(167)] = 3173,
  [SMALL_STATE(168)] = 3180,
  [SMALL_STATE(169)] = 3187,
  [SMALL_STATE(170)] = 3194,
  [SMALL_STATE(171)] = 3201,
  [SMALL_STATE(172)] = 3208,
  [SMALL_STATE(173)] = 3215,
  [SMALL_STATE(174)] = 3222,
  [SMALL_STATE(175)] = 3229,
  [SMALL_STATE(176)] = 3236,
  [SMALL_STATE(177)] = 3243,
  [SMALL_STATE(178)] = 3250,
  [SMALL_STATE(179)] = 3257,
  [SMALL_STATE(180)] = 3264,
  [SMALL_STATE(181)] = 3271,
  [SMALL_STATE(182)] = 3278,
  [SMALL_STATE(183)] = 3285,
  [SMALL_STATE(184)] = 3292,
  [SMALL_STATE(185)] = 3299,
  [SMALL_STATE(186)] = 3306,
  [SMALL_STATE(187)] = 3313,
  [SMALL_STATE(188)] = 3320,
  [SMALL_STATE(189)] = 3327,
  [SMALL_STATE(190)] = 3334,
  [SMALL_STATE(191)] = 3341,
  [SMALL_STATE(192)] = 3348,
  [SMALL_STATE(193)] = 3355,
  [SMALL_STATE(194)] = 3362,
  [SMALL_STATE(195)] = 3369,
  [SMALL_STATE(196)] = 3376,
  [SMALL_STATE(197)] = 3383,
  [SMALL_STATE(198)] = 3390,
  [SMALL_STATE(199)] = 3397,
  [SMALL_STATE(200)] = 3404,
  [SMALL_STATE(201)] = 3411,
  [SMALL_STATE(202)] = 3418,
  [SMALL_STATE(203)] = 3425,
  [SMALL_STATE(204)] = 3432,
  [SMALL_STATE(205)] = 3439,
  [SMALL_STATE(206)] = 3446,
  [SMALL_STATE(207)] = 3453,
  [SMALL_STATE(208)] = 3460,
  [SMALL_STATE(209)] = 3467,
  [SMALL_STATE(210)] = 3474,
  [SMALL_STATE(211)] = 3481,
  [SMALL_STATE(212)] = 3488,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 29),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 26),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 26),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 37),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 37),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 34),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 34),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 33),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 33),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 32),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 32),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 28),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 28),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(172),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(97),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(85),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 30),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 36),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 36),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 31),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 31),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 3, 0, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 3, 0, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 7),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 7),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 11),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 9),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(63),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(78),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(78),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(98),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 25),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 25),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 24),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 24),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 23),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 23),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 22),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 22),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 21),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 21),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 20),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 20),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 19),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 19),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 17),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 17),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 16),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 16),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 12),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(66),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 14),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 13),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 13),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 6),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 6),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 27),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 27),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 38),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 10),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 15),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [535] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 18),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 35),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_line_end = 0,
  ts_external_token_hom_string = 1,
  ts_external_token_hom_inner_string = 2,
  ts_external_token_error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_line_end] = sym_line_end,
  [ts_external_token_hom_string] = sym_hom_string,
  [ts_external_token_hom_inner_string] = sym_hom_inner_string,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_line_end] = true,
    [ts_external_token_hom_string] = true,
    [ts_external_token_hom_inner_string] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_hom_string] = true,
  },
  [3] = {
    [ts_external_token_line_end] = true,
  },
  [4] = {
    [ts_external_token_hom_inner_string] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ott_external_scanner_create(void);
void tree_sitter_ott_external_scanner_destroy(void *);
bool tree_sitter_ott_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ott_external_scanner_serialize(void *, char *);
void tree_sitter_ott_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_ott_external_scanner_create,
      tree_sitter_ott_external_scanner_destroy,
      tree_sitter_ott_external_scanner_scan,
      tree_sitter_ott_external_scanner_serialize,
      tree_sitter_ott_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
