#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 214
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 8
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 38

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
  aux_sym_string_desc_token1 = 17,
  anon_sym_LBRACE_LBRACE = 18,
  aux_sym_homomorphism_token1 = 19,
  anon_sym_RBRACE_RBRACE = 20,
  sym_hom_name = 21,
  anon_sym_LBRACK_LBRACK = 22,
  anon_sym_RBRACK_RBRACK = 23,
  anon_sym_IN = 24,
  sym_comment = 25,
  anon_sym_DOT_DOT = 26,
  anon_sym_DOT_DOT_DOT = 27,
  anon_sym_DOT_DOT_DOT_DOT = 28,
  anon_sym_SQUOTE = 29,
  sym_string = 30,
  sym_line_cont = 31,
  sym_line_end = 32,
  sym_hom_string = 33,
  sym_hom_inner_string = 34,
  sym_error_sentinel = 35,
  sym_source_file = 36,
  sym__item = 37,
  sym_defnclass = 38,
  sym_defnclass_name = 39,
  sym_defn = 40,
  sym_defn_name = 41,
  sym_defn_rule = 42,
  sym_rule_separator = 43,
  sym_rule_name = 44,
  sym_dash_line = 45,
  sym_rule_line = 46,
  sym_grammar_rule = 47,
  sym_production = 48,
  sym_production_mod = 49,
  sym_production_name = 50,
  sym__element = 51,
  sym_metavardefn = 52,
  sym__string_desc_list1 = 53,
  sym_string_desc = 54,
  sym_embed = 55,
  sym_homomorphism = 56,
  sym__hom_element = 57,
  sym_hom_inner_block = 58,
  sym__hom_inner = 59,
  sym__line_cont = 60,
  sym__line_end = 61,
  sym__hom_string = 62,
  sym__hom_inner_string = 63,
  sym_comprehension_bound = 64,
  sym_dots = 65,
  sym_namespace_prefix = 66,
  sym_id = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym__item_repeat1 = 69,
  aux_sym_defnclass_repeat1 = 70,
  aux_sym_defnclass_repeat2 = 71,
  aux_sym_defn_repeat1 = 72,
  aux_sym_defn_repeat2 = 73,
  aux_sym_defn_rule_repeat1 = 74,
  aux_sym_grammar_rule_repeat1 = 75,
  aux_sym_production_repeat1 = 76,
  aux_sym__string_desc_list1_repeat1 = 77,
  aux_sym_homomorphism_repeat1 = 78,
  aux_sym__hom_inner_repeat1 = 79,
  anon_alias_sym_defn_name = 80,
  anon_alias_sym_defnclass_name = 81,
  alias_sym_hom_body = 82,
  anon_alias_sym_id = 83,
  anon_alias_sym_production_modifier = 84,
  anon_alias_sym_production_name = 85,
  anon_alias_sym_q_id = 86,
  anon_alias_sym_rule_name = 87,
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
  [aux_sym_string_desc_token1] = "string_desc_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_homomorphism_token1] = "_hom_name_space",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_hom_name] = "hom_name",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_IN] = "IN",
  [sym_comment] = "comment",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT_DOT_DOT] = "....",
  [anon_sym_SQUOTE] = "'",
  [sym_string] = "string",
  [sym_line_cont] = "line_cont",
  [sym_line_end] = "line_end",
  [sym_hom_string] = "hom_string",
  [sym_hom_inner_string] = "string",
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
  [sym__element] = "_element",
  [sym_metavardefn] = "metavardefn",
  [sym__string_desc_list1] = "_string_desc_list1",
  [sym_string_desc] = "string_desc",
  [sym_embed] = "embed",
  [sym_homomorphism] = "homomorphism",
  [sym__hom_element] = "_hom_element",
  [sym_hom_inner_block] = "hom_inner_block",
  [sym__hom_inner] = "_hom_inner",
  [sym__line_cont] = "_line_cont",
  [sym__line_end] = "_line_end",
  [sym__hom_string] = "_hom_string",
  [sym__hom_inner_string] = "_hom_inner_string",
  [sym_comprehension_bound] = "comprehension_bound",
  [sym_dots] = "dots",
  [sym_namespace_prefix] = "namespace_prefix",
  [sym_id] = "id",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__item_repeat1] = "_item_repeat1",
  [aux_sym_defnclass_repeat1] = "defnclass_repeat1",
  [aux_sym_defnclass_repeat2] = "defnclass_repeat2",
  [aux_sym_defn_repeat1] = "defn_repeat1",
  [aux_sym_defn_repeat2] = "defn_repeat2",
  [aux_sym_defn_rule_repeat1] = "defn_rule_repeat1",
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym_production_repeat1] = "production_repeat1",
  [aux_sym__string_desc_list1_repeat1] = "_string_desc_list1_repeat1",
  [aux_sym_homomorphism_repeat1] = "homomorphism_repeat1",
  [aux_sym__hom_inner_repeat1] = "_hom_inner_repeat1",
  [anon_alias_sym_defn_name] = "defn_name",
  [anon_alias_sym_defnclass_name] = "defnclass_name",
  [alias_sym_hom_body] = "hom_body",
  [anon_alias_sym_id] = "id",
  [anon_alias_sym_production_modifier] = "production_modifier",
  [anon_alias_sym_production_name] = "production_name",
  [anon_alias_sym_q_id] = "q_id",
  [anon_alias_sym_rule_name] = "rule_name",
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
  [aux_sym_string_desc_token1] = aux_sym_string_desc_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_homomorphism_token1] = aux_sym_homomorphism_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_hom_name] = sym_hom_name,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_IN] = anon_sym_IN,
  [sym_comment] = sym_comment,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_string] = sym_string,
  [sym_line_cont] = sym_line_cont,
  [sym_line_end] = sym_line_end,
  [sym_hom_string] = sym_hom_string,
  [sym_hom_inner_string] = sym_string,
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
  [sym__element] = sym__element,
  [sym_metavardefn] = sym_metavardefn,
  [sym__string_desc_list1] = sym__string_desc_list1,
  [sym_string_desc] = sym_string_desc,
  [sym_embed] = sym_embed,
  [sym_homomorphism] = sym_homomorphism,
  [sym__hom_element] = sym__hom_element,
  [sym_hom_inner_block] = sym_hom_inner_block,
  [sym__hom_inner] = sym__hom_inner,
  [sym__line_cont] = sym__line_cont,
  [sym__line_end] = sym__line_end,
  [sym__hom_string] = sym__hom_string,
  [sym__hom_inner_string] = sym__hom_inner_string,
  [sym_comprehension_bound] = sym_comprehension_bound,
  [sym_dots] = sym_dots,
  [sym_namespace_prefix] = sym_namespace_prefix,
  [sym_id] = sym_id,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__item_repeat1] = aux_sym__item_repeat1,
  [aux_sym_defnclass_repeat1] = aux_sym_defnclass_repeat1,
  [aux_sym_defnclass_repeat2] = aux_sym_defnclass_repeat2,
  [aux_sym_defn_repeat1] = aux_sym_defn_repeat1,
  [aux_sym_defn_repeat2] = aux_sym_defn_repeat2,
  [aux_sym_defn_rule_repeat1] = aux_sym_defn_rule_repeat1,
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym_production_repeat1] = aux_sym_production_repeat1,
  [aux_sym__string_desc_list1_repeat1] = aux_sym__string_desc_list1_repeat1,
  [aux_sym_homomorphism_repeat1] = aux_sym_homomorphism_repeat1,
  [aux_sym__hom_inner_repeat1] = aux_sym__hom_inner_repeat1,
  [anon_alias_sym_defn_name] = anon_alias_sym_defn_name,
  [anon_alias_sym_defnclass_name] = anon_alias_sym_defnclass_name,
  [alias_sym_hom_body] = alias_sym_hom_body,
  [anon_alias_sym_id] = anon_alias_sym_id,
  [anon_alias_sym_production_modifier] = anon_alias_sym_production_modifier,
  [anon_alias_sym_production_name] = anon_alias_sym_production_name,
  [anon_alias_sym_q_id] = anon_alias_sym_q_id,
  [anon_alias_sym_rule_name] = anon_alias_sym_rule_name,
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
  [aux_sym_string_desc_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_homomorphism_token1] = {
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
  [anon_sym_IN] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_line_cont] = {
    .visible = true,
    .named = false,
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
    .named = true,
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
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_metavardefn] = {
    .visible = true,
    .named = true,
  },
  [sym__string_desc_list1] = {
    .visible = false,
    .named = true,
  },
  [sym_string_desc] = {
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
  [sym__line_cont] = {
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
  [sym_comprehension_bound] = {
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
  [sym_id] = {
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
  [aux_sym_grammar_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_production_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_desc_list1_repeat1] = {
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
  [4] = {.index = 0, .length = 3},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [10] = {.index = 9, .length = 6},
  [11] = {.index = 15, .length = 4},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 4},
  [16] = {.index = 29, .length = 1},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 3},
  [23] = {.index = 39, .length = 3},
  [24] = {.index = 42, .length = 3},
  [25] = {.index = 45, .length = 4},
  [26] = {.index = 49, .length = 2},
  [27] = {.index = 51, .length = 3},
  [28] = {.index = 54, .length = 3},
  [29] = {.index = 57, .length = 3},
  [30] = {.index = 60, .length = 2},
  [31] = {.index = 62, .length = 4},
  [32] = {.index = 66, .length = 4},
  [33] = {.index = 70, .length = 4},
  [34] = {.index = 74, .length = 3},
  [35] = {.index = 77, .length = 5},
  [37] = {.index = 82, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 3},
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
    {field_class_name, 0},
    {field_namespace_prefix, 2},
  [9] =
    {field_body, 3},
    {field_close, 4},
    {field_hom_inner_block, 3, .inherited = true},
    {field_hom_string, 3, .inherited = true},
    {field_name, 1},
    {field_open, 0},
  [15] =
    {field_hom_inner_block, 0, .inherited = true},
    {field_hom_inner_block, 1, .inherited = true},
    {field_hom_string, 0, .inherited = true},
    {field_hom_string, 1, .inherited = true},
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
    {field_rule_name, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_string,
  },
  [2] = {
    [0] = anon_alias_sym_defnclass_name,
  },
  [3] = {
    [0] = anon_alias_sym_id,
  },
  [9] = {
    [1] = anon_alias_sym_q_id,
  },
  [10] = {
    [3] = alias_sym_hom_body,
  },
  [15] = {
    [0] = anon_alias_sym_production_modifier,
  },
  [17] = {
    [0] = anon_alias_sym_production_name,
  },
  [18] = {
    [0] = anon_alias_sym_defn_name,
  },
  [36] = {
    [0] = anon_alias_sym_rule_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_id, 8,
    sym_id,
    anon_alias_sym_defn_name,
    anon_alias_sym_defnclass_name,
    anon_alias_sym_id,
    anon_alias_sym_production_modifier,
    anon_alias_sym_production_name,
    anon_alias_sym_q_id,
    anon_alias_sym_rule_name,
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
  [34] = 31,
  [35] = 23,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 51,
  [52] = 20,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 49,
  [57] = 45,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 48,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 45,
  [67] = 49,
  [68] = 19,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 64,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 77,
  [81] = 81,
  [82] = 82,
  [83] = 12,
  [84] = 82,
  [85] = 85,
  [86] = 76,
  [87] = 87,
  [88] = 81,
  [89] = 78,
  [90] = 90,
  [91] = 78,
  [92] = 81,
  [93] = 77,
  [94] = 94,
  [95] = 82,
  [96] = 78,
  [97] = 97,
  [98] = 76,
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
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 64,
  [119] = 119,
  [120] = 112,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 119,
  [126] = 112,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 119,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 139,
  [140] = 134,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 136,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 134,
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
  [165] = 165,
  [166] = 78,
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
  [180] = 64,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 78,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 176,
  [189] = 181,
  [190] = 190,
  [191] = 191,
  [192] = 176,
  [193] = 181,
  [194] = 168,
  [195] = 191,
  [196] = 178,
  [197] = 197,
  [198] = 191,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 168,
  [205] = 186,
  [206] = 206,
  [207] = 207,
  [208] = 174,
  [209] = 199,
  [210] = 210,
  [211] = 211,
  [212] = 174,
  [213] = 199,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '%', 118,
        '\'', 125,
        ',', 80,
        '-', 13,
        '.', 14,
        '/', 15,
        ':', 17,
        '<', 16,
        'I', 22,
        '[', 23,
        ']', 24,
        'b', 51,
        'd', 33,
        'e', 38,
        'g', 43,
        'i', 41,
        'm', 34,
        '{', 52,
        '|', 68,
        '}', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == ':') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == '{') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '<') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '<') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '<') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '<') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == '[') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == '{') ADVANCE(110);
      END_STATE();
    case 53:
      if (lookahead == '}') ADVANCE(112);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '%', 118,
        ':', 18,
        'd', 89,
        'e', 94,
        'g', 100,
        'i', 97,
        'm', 90,
        '{', 52,
        '|', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '%', 117,
        '-', 128,
        '.', 129,
        '<', 130,
        'd', 141,
        'e', 146,
        'g', 152,
        'i', 150,
        'm', 142,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'a') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'a') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'a') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'a') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'b') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'd') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'd') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'f') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'm') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'm') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'r') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'v') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'v') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_desc_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_homomorphism_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_hom_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 55},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 54},
  [33] = {.lex_state = 54},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 9, .external_lex_state = 3},
  [43] = {.lex_state = 9, .external_lex_state = 3},
  [44] = {.lex_state = 54},
  [45] = {.lex_state = 9, .external_lex_state = 3},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 0, .external_lex_state = 4},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 54},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 54},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 9, .external_lex_state = 3},
  [77] = {.lex_state = 9, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 9, .external_lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 9, .external_lex_state = 3},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 9, .external_lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 5},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 5},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 54},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 54},
  [170] = {.lex_state = 0, .external_lex_state = 5},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 54},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 67},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 54},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 54},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 54},
  [203] = {.lex_state = 54},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 54},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 54},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
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
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_line_cont] = ACTIONS(1),
    [sym_line_end] = ACTIONS(1),
    [sym_hom_string] = ACTIONS(1),
    [sym_hom_inner_string] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(207),
    [sym__item] = STATE(51),
    [sym_metavardefn] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(51),
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
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(55), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
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
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [48] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_LT_SLASH,
    ACTIONS(40), 1,
      sym_string,
    STATE(55), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(29), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(37), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [96] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(55), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
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
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [144] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(55), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
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
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [192] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(55), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
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
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [240] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(55), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
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
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [288] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(55), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
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
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [336] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(55), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
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
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [384] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(55), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
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
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [432] = 5,
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
  [458] = 3,
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
  [479] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(40), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(86), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [508] = 3,
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
  [529] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(46), 1,
      sym_rule_separator,
    STATE(164), 1,
      sym_dash_line,
    STATE(22), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [562] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(13), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(44), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(96), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [591] = 3,
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
  [612] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(71), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    ACTIONS(108), 10,
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
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_COLON_COLON,
      anon_sym_defn,
    ACTIONS(112), 10,
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
  [678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(60), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [704] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(120), 1,
      anon_sym_LT_SLASH,
    ACTIONS(126), 1,
      sym_string,
    STATE(22), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(123), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [731] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(131), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(135), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(137), 1,
      sym_hom_string,
    STATE(36), 1,
      aux_sym_homomorphism_repeat1,
    STATE(79), 1,
      sym_hom_inner_block,
    STATE(99), 1,
      sym__hom_string,
    ACTIONS(133), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(90), 2,
      sym__hom_element,
      sym_dots,
  [764] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_string_desc_token1,
    STATE(127), 1,
      sym_string_desc,
    STATE(206), 1,
      sym__string_desc_list1,
    ACTIONS(141), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(24), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(39), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(148), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(152), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(33), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(156), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(160), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [883] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_string_desc_token1,
    STATE(127), 1,
      sym_string_desc,
    STATE(206), 1,
      sym__string_desc_list1,
    ACTIONS(164), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(24), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(73), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [933] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(135), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(137), 1,
      sym_hom_string,
    ACTIONS(171), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(35), 1,
      aux_sym_homomorphism_repeat1,
    STATE(79), 1,
      sym_hom_inner_block,
    STATE(99), 1,
      sym__hom_string,
    ACTIONS(133), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(90), 2,
      sym__hom_element,
      sym_dots,
  [966] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(175), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [989] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(179), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1012] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(135), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(137), 1,
      sym_hom_string,
    ACTIONS(181), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(23), 1,
      aux_sym_homomorphism_repeat1,
    STATE(79), 1,
      sym_hom_inner_block,
    STATE(99), 1,
      sym__hom_string,
    ACTIONS(133), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(90), 2,
      sym__hom_element,
      sym_dots,
  [1045] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(135), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(137), 1,
      sym_hom_string,
    ACTIONS(183), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(36), 1,
      aux_sym_homomorphism_repeat1,
    STATE(79), 1,
      sym_hom_inner_block,
    STATE(99), 1,
      sym__hom_string,
    ACTIONS(133), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(90), 2,
      sym__hom_element,
      sym_dots,
  [1078] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(187), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(193), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(196), 1,
      sym_hom_string,
    STATE(36), 1,
      aux_sym_homomorphism_repeat1,
    STATE(79), 1,
      sym_hom_inner_block,
    STATE(99), 1,
      sym__hom_string,
    ACTIONS(190), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(90), 2,
      sym__hom_element,
      sym_dots,
  [1111] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(201), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1134] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_string_desc_token1,
    STATE(127), 1,
      sym_string_desc,
    STATE(206), 1,
      sym__string_desc_list1,
    ACTIONS(205), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(29), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(209), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(213), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(211), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(220), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1228] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(222), 1,
      sym_string,
    ACTIONS(224), 1,
      sym_line_end,
    STATE(12), 1,
      sym__line_end,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(45), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1254] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(222), 1,
      sym_string,
    ACTIONS(226), 1,
      sym_line_end,
    STATE(83), 1,
      sym__line_end,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(45), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(86), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    ACTIONS(234), 1,
      sym_string,
    ACTIONS(237), 1,
      sym_line_end,
    ACTIONS(231), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(45), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1325] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(239), 1,
      sym_string,
    STATE(14), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1348] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LT_SLASH,
    ACTIONS(245), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(247), 1,
      sym_hom_inner_string,
    STATE(107), 1,
      sym_dots,
    STATE(190), 1,
      sym__hom_inner,
    ACTIONS(243), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(75), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1375] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(251), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(255), 1,
      sym_string,
    ACTIONS(253), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(56), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      sym_string,
    ACTIONS(253), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1421] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(263), 1,
      sym_string,
    ACTIONS(253), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(49), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1444] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(65), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1486] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COLON_COLON,
    ACTIONS(269), 1,
      anon_sym_LT_SLASH,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(63), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(275), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(239), 1,
      sym_string,
    STATE(17), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1551] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(259), 1,
      sym_string,
    ACTIONS(277), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1574] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_LT_SLASH,
    ACTIONS(282), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(287), 1,
      sym_string,
    ACTIONS(284), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_SLASH,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(292), 1,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(72), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(294), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(70), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(296), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1675] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(302), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(304), 1,
      sym_string,
    ACTIONS(253), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(67), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1698] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_SLASH,
    ACTIONS(306), 1,
      anon_sym_COLON_COLON,
    ACTIONS(308), 1,
      sym_string,
    ACTIONS(271), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(66), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(310), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1738] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      anon_sym_grammar,
    ACTIONS(319), 1,
      anon_sym_embed,
    ACTIONS(322), 1,
      anon_sym_defns,
    ACTIONS(325), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(65), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COLON_COLON,
    ACTIONS(328), 1,
      anon_sym_LT_SLASH,
    ACTIONS(334), 1,
      sym_string,
    ACTIONS(331), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(66), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1786] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LT_SLASH,
    ACTIONS(259), 1,
      sym_string,
    ACTIONS(337), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      aux_sym_string_desc_token1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(59), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(339), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_defn,
    STATE(70), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(341), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(70), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(346), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1883] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LT_SLASH,
    ACTIONS(308), 1,
      sym_string,
    ACTIONS(348), 1,
      anon_sym_COLON_COLON,
    ACTIONS(271), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(66), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 3,
      anon_sym_COLON_COLON,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(310), 5,
      anon_sym_COLON_COLON_EQ,
      anon_sym_SLASH_GT,
      aux_sym_string_desc_token1,
      anon_sym_DOT_DOT_DOT_DOT,
      anon_sym_SQUOTE,
  [1922] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_hom_inner_string,
    ACTIONS(352), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
    ACTIONS(350), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [1942] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(357), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(359), 1,
      sym_hom_inner_string,
    STATE(113), 1,
      sym_dots,
    ACTIONS(243), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_line_end,
    ACTIONS(361), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_line_end,
    ACTIONS(365), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(369), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(373), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2058] = 3,
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
  [2072] = 3,
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
  [2086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(383), 1,
      anon_sym_COLON_COLON,
    ACTIONS(385), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(387), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2154] = 3,
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
  [2168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_line_end,
    ACTIONS(377), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_line_end,
    ACTIONS(371), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2244] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(397), 1,
      anon_sym_COLON_COLON,
    ACTIONS(399), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(85), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(401), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON_COLON,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    STATE(157), 1,
      sym_id,
    STATE(104), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
    ACTIONS(411), 1,
      aux_sym_string_desc_token1,
    STATE(157), 1,
      sym_id,
    STATE(101), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_SLASH_GT,
    ACTIONS(420), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(156), 1,
      sym_dots,
    ACTIONS(418), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    ACTIONS(422), 1,
      anon_sym_COLON_COLON,
    STATE(157), 1,
      sym_id,
    STATE(101), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2367] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    ACTIONS(424), 1,
      anon_sym_COLON_COLON,
    STATE(157), 1,
      sym_id,
    STATE(101), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    ACTIONS(426), 1,
      anon_sym_COLON_COLON,
    STATE(157), 1,
      sym_id,
    STATE(105), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(428), 1,
      sym_hom_inner_string,
    STATE(111), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(430), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    STATE(94), 1,
      sym_defnclass,
    STATE(167), 1,
      sym_id,
    STATE(185), 1,
      sym_defnclass_name,
  [2445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(94), 1,
      sym_embed,
    STATE(54), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_hom_inner_string,
    ACTIONS(432), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_string_desc_token1,
    ACTIONS(436), 1,
      sym_string,
    STATE(160), 1,
      sym_id,
    STATE(176), 1,
      sym_comprehension_bound,
  [2489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(438), 1,
      sym_hom_inner_string,
    STATE(116), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2503] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      sym_namespace_prefix,
    STATE(138), 1,
      sym_id,
  [2519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(446), 1,
      sym_hom_inner_string,
    STATE(130), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_hom_inner_string,
    ACTIONS(448), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COLON_COLON,
    ACTIONS(452), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym__string_desc_list1_repeat1,
  [2563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      anon_sym_by,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_IN,
  [2573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_string_desc_token1,
    ACTIONS(457), 1,
      sym_string,
    STATE(160), 1,
      sym_id,
    STATE(193), 1,
      sym_comprehension_bound,
  [2589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_string_desc_token1,
    ACTIONS(459), 1,
      sym_string,
    STATE(160), 1,
      sym_id,
    STATE(192), 1,
      sym_comprehension_bound,
  [2605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(461), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    STATE(138), 1,
      sym_id,
    STATE(172), 1,
      sym_namespace_prefix,
  [2635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(463), 1,
      anon_sym_by,
    STATE(108), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    STATE(131), 1,
      sym_namespace_prefix,
    STATE(138), 1,
      sym_id,
  [2665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_string_desc_token1,
    ACTIONS(465), 1,
      sym_string,
    STATE(160), 1,
      sym_id,
    STATE(189), 1,
      sym_comprehension_bound,
  [2681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_string_desc_token1,
    ACTIONS(467), 1,
      sym_string,
    STATE(160), 1,
      sym_id,
    STATE(188), 1,
      sym_comprehension_bound,
  [2697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON_COLON,
    ACTIONS(471), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym__string_desc_list1_repeat1,
  [2713] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    STATE(138), 1,
      sym_id,
    STATE(175), 1,
      sym_namespace_prefix,
  [2729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_COLON_COLON,
    ACTIONS(477), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(117), 1,
      aux_sym__string_desc_list1_repeat1,
  [2745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_hom_inner_string,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(481), 1,
      anon_sym_by,
    STATE(121), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_string_desc_token1,
    ACTIONS(483), 1,
      sym_string,
    STATE(160), 1,
      sym_id,
    STATE(181), 1,
      sym_comprehension_bound,
  [2789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_string_desc_token1,
    STATE(25), 1,
      sym_production_name,
    STATE(61), 1,
      sym_id,
  [2802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    STATE(160), 1,
      sym_id,
    STATE(168), 1,
      sym_comprehension_bound,
  [2815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
    STATE(171), 1,
      sym_id,
  [2828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    STATE(160), 1,
      sym_id,
    STATE(191), 1,
      sym_comprehension_bound,
  [2841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    STATE(160), 1,
      sym_id,
    STATE(198), 1,
      sym_comprehension_bound,
  [2854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COLON_COLON,
    ACTIONS(452), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    STATE(160), 1,
      sym_id,
    STATE(194), 1,
      sym_comprehension_bound,
  [2887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_string_desc_token1,
    STATE(27), 1,
      sym_production_name,
    STATE(61), 1,
      sym_id,
  [2900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    STATE(202), 1,
      sym_defn_name,
    STATE(203), 1,
      sym_id,
  [2922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    STATE(203), 1,
      sym_id,
    STATE(210), 1,
      sym_defn_name,
  [2935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    STATE(160), 1,
      sym_id,
    STATE(195), 1,
      sym_comprehension_bound,
  [2957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    STATE(160), 1,
      sym_id,
    STATE(201), 1,
      sym_comprehension_bound,
  [2970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    STATE(160), 1,
      sym_id,
    STATE(179), 1,
      sym_comprehension_bound,
  [2983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_string_desc_token1,
    STATE(127), 1,
      sym_string_desc,
    STATE(182), 1,
      sym__string_desc_list1,
  [2996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_string_desc_token1,
    STATE(154), 1,
      sym_rule_name,
    STATE(183), 1,
      sym_id,
  [3009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_string_desc_token1,
    STATE(160), 1,
      sym_id,
    STATE(204), 1,
      sym_comprehension_bound,
  [3022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_string_desc_token1,
    STATE(37), 1,
      sym_production_name,
    STATE(61), 1,
      sym_id,
  [3035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_string_desc_token1,
    STATE(26), 1,
      sym_production_name,
    STATE(61), 1,
      sym_id,
  [3048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_line_end,
    STATE(102), 1,
      sym__line_end,
  [3058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_line_end,
    STATE(4), 1,
      sym__line_end,
  [3068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    STATE(187), 1,
      sym_id,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_COLON_COLON,
      aux_sym_string_desc_token1,
  [3086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_desc_token1,
    STATE(103), 1,
      sym_id,
  [3096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_line_cont,
    STATE(150), 1,
      sym__line_cont,
  [3106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_SLASH_GT,
    ACTIONS(509), 1,
      anon_sym_IN,
  [3116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_line_end,
    STATE(10), 1,
      sym__line_end,
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_string_desc_token1,
    STATE(139), 1,
      sym_string_desc,
  [3136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_line_end,
    STATE(5), 1,
      sym__line_end,
  [3146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_line_cont,
    STATE(169), 1,
      sym__line_cont,
  [3156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_line_end,
    STATE(2), 1,
      sym__line_end,
  [3166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      sym_hom_inner_string,
      anon_sym_RBRACK_RBRACK,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_COLON_COLON,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SLASH_GT,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COLON_COLON,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_line_cont,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_COLON_COLON_EQ,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_COLON_COLON,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SLASH_SLASH,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON_COLON_EQ,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_SLASH_GT,
  [3244] = 2,
    ACTIONS(539), 1,
      aux_sym_dash_line_token1,
    ACTIONS(541), 1,
      sym_comment,
  [3251] = 2,
    ACTIONS(541), 1,
      sym_comment,
    ACTIONS(543), 1,
      aux_sym_homomorphism_token1,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SLASH_GT,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_line_end,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_SLASH_GT,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COLON_COLON_EQ,
  [3286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_line_end,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_string_desc_token1,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COLON_COLON,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_hom_name,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_SLASH_GT,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH_GT,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SLASH_GT,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACK_RBRACK,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SLASH_GT,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SLASH_GT,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SLASH_GT,
  [3370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SLASH_GT,
  [3377] = 2,
    ACTIONS(541), 1,
      sym_comment,
    ACTIONS(575), 1,
      aux_sym_homomorphism_token1,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACK_RBRACK,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SLASH_GT,
  [3398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SLASH_SLASH,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_COLON_COLON,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_SLASH_GT,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COLON_COLON,
  [3426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON_COLON,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SLASH_GT,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_hom_name,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
  [3454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SLASH_SLASH,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SLASH_SLASH,
  [3475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COLON_COLON,
  [3482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACK_RBRACK,
  [3489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SLASH_SLASH,
  [3496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH_SLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 336,
  [SMALL_STATE(10)] = 384,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 458,
  [SMALL_STATE(13)] = 479,
  [SMALL_STATE(14)] = 508,
  [SMALL_STATE(15)] = 529,
  [SMALL_STATE(16)] = 562,
  [SMALL_STATE(17)] = 591,
  [SMALL_STATE(18)] = 612,
  [SMALL_STATE(19)] = 638,
  [SMALL_STATE(20)] = 658,
  [SMALL_STATE(21)] = 678,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 731,
  [SMALL_STATE(24)] = 764,
  [SMALL_STATE(25)] = 791,
  [SMALL_STATE(26)] = 814,
  [SMALL_STATE(27)] = 837,
  [SMALL_STATE(28)] = 860,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 910,
  [SMALL_STATE(31)] = 933,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 989,
  [SMALL_STATE(34)] = 1012,
  [SMALL_STATE(35)] = 1045,
  [SMALL_STATE(36)] = 1078,
  [SMALL_STATE(37)] = 1111,
  [SMALL_STATE(38)] = 1134,
  [SMALL_STATE(39)] = 1161,
  [SMALL_STATE(40)] = 1184,
  [SMALL_STATE(41)] = 1206,
  [SMALL_STATE(42)] = 1228,
  [SMALL_STATE(43)] = 1254,
  [SMALL_STATE(44)] = 1280,
  [SMALL_STATE(45)] = 1302,
  [SMALL_STATE(46)] = 1325,
  [SMALL_STATE(47)] = 1348,
  [SMALL_STATE(48)] = 1375,
  [SMALL_STATE(49)] = 1398,
  [SMALL_STATE(50)] = 1421,
  [SMALL_STATE(51)] = 1444,
  [SMALL_STATE(52)] = 1469,
  [SMALL_STATE(53)] = 1486,
  [SMALL_STATE(54)] = 1509,
  [SMALL_STATE(55)] = 1528,
  [SMALL_STATE(56)] = 1551,
  [SMALL_STATE(57)] = 1574,
  [SMALL_STATE(58)] = 1597,
  [SMALL_STATE(59)] = 1620,
  [SMALL_STATE(60)] = 1639,
  [SMALL_STATE(61)] = 1658,
  [SMALL_STATE(62)] = 1675,
  [SMALL_STATE(63)] = 1698,
  [SMALL_STATE(64)] = 1721,
  [SMALL_STATE(65)] = 1738,
  [SMALL_STATE(66)] = 1763,
  [SMALL_STATE(67)] = 1786,
  [SMALL_STATE(68)] = 1809,
  [SMALL_STATE(69)] = 1826,
  [SMALL_STATE(70)] = 1845,
  [SMALL_STATE(71)] = 1864,
  [SMALL_STATE(72)] = 1883,
  [SMALL_STATE(73)] = 1906,
  [SMALL_STATE(74)] = 1922,
  [SMALL_STATE(75)] = 1942,
  [SMALL_STATE(76)] = 1966,
  [SMALL_STATE(77)] = 1980,
  [SMALL_STATE(78)] = 1994,
  [SMALL_STATE(79)] = 2008,
  [SMALL_STATE(80)] = 2022,
  [SMALL_STATE(81)] = 2034,
  [SMALL_STATE(82)] = 2046,
  [SMALL_STATE(83)] = 2058,
  [SMALL_STATE(84)] = 2072,
  [SMALL_STATE(85)] = 2086,
  [SMALL_STATE(86)] = 2104,
  [SMALL_STATE(87)] = 2116,
  [SMALL_STATE(88)] = 2130,
  [SMALL_STATE(89)] = 2142,
  [SMALL_STATE(90)] = 2154,
  [SMALL_STATE(91)] = 2168,
  [SMALL_STATE(92)] = 2180,
  [SMALL_STATE(93)] = 2194,
  [SMALL_STATE(94)] = 2206,
  [SMALL_STATE(95)] = 2218,
  [SMALL_STATE(96)] = 2230,
  [SMALL_STATE(97)] = 2244,
  [SMALL_STATE(98)] = 2262,
  [SMALL_STATE(99)] = 2274,
  [SMALL_STATE(100)] = 2288,
  [SMALL_STATE(101)] = 2305,
  [SMALL_STATE(102)] = 2322,
  [SMALL_STATE(103)] = 2333,
  [SMALL_STATE(104)] = 2350,
  [SMALL_STATE(105)] = 2367,
  [SMALL_STATE(106)] = 2384,
  [SMALL_STATE(107)] = 2401,
  [SMALL_STATE(108)] = 2415,
  [SMALL_STATE(109)] = 2429,
  [SMALL_STATE(110)] = 2445,
  [SMALL_STATE(111)] = 2459,
  [SMALL_STATE(112)] = 2473,
  [SMALL_STATE(113)] = 2489,
  [SMALL_STATE(114)] = 2503,
  [SMALL_STATE(115)] = 2519,
  [SMALL_STATE(116)] = 2533,
  [SMALL_STATE(117)] = 2547,
  [SMALL_STATE(118)] = 2563,
  [SMALL_STATE(119)] = 2573,
  [SMALL_STATE(120)] = 2589,
  [SMALL_STATE(121)] = 2605,
  [SMALL_STATE(122)] = 2619,
  [SMALL_STATE(123)] = 2635,
  [SMALL_STATE(124)] = 2649,
  [SMALL_STATE(125)] = 2665,
  [SMALL_STATE(126)] = 2681,
  [SMALL_STATE(127)] = 2697,
  [SMALL_STATE(128)] = 2713,
  [SMALL_STATE(129)] = 2729,
  [SMALL_STATE(130)] = 2745,
  [SMALL_STATE(131)] = 2759,
  [SMALL_STATE(132)] = 2773,
  [SMALL_STATE(133)] = 2789,
  [SMALL_STATE(134)] = 2802,
  [SMALL_STATE(135)] = 2815,
  [SMALL_STATE(136)] = 2828,
  [SMALL_STATE(137)] = 2841,
  [SMALL_STATE(138)] = 2854,
  [SMALL_STATE(139)] = 2863,
  [SMALL_STATE(140)] = 2874,
  [SMALL_STATE(141)] = 2887,
  [SMALL_STATE(142)] = 2900,
  [SMALL_STATE(143)] = 2909,
  [SMALL_STATE(144)] = 2922,
  [SMALL_STATE(145)] = 2935,
  [SMALL_STATE(146)] = 2944,
  [SMALL_STATE(147)] = 2957,
  [SMALL_STATE(148)] = 2970,
  [SMALL_STATE(149)] = 2983,
  [SMALL_STATE(150)] = 2996,
  [SMALL_STATE(151)] = 3009,
  [SMALL_STATE(152)] = 3022,
  [SMALL_STATE(153)] = 3035,
  [SMALL_STATE(154)] = 3048,
  [SMALL_STATE(155)] = 3058,
  [SMALL_STATE(156)] = 3068,
  [SMALL_STATE(157)] = 3078,
  [SMALL_STATE(158)] = 3086,
  [SMALL_STATE(159)] = 3096,
  [SMALL_STATE(160)] = 3106,
  [SMALL_STATE(161)] = 3116,
  [SMALL_STATE(162)] = 3126,
  [SMALL_STATE(163)] = 3136,
  [SMALL_STATE(164)] = 3146,
  [SMALL_STATE(165)] = 3156,
  [SMALL_STATE(166)] = 3166,
  [SMALL_STATE(167)] = 3174,
  [SMALL_STATE(168)] = 3181,
  [SMALL_STATE(169)] = 3188,
  [SMALL_STATE(170)] = 3195,
  [SMALL_STATE(171)] = 3202,
  [SMALL_STATE(172)] = 3209,
  [SMALL_STATE(173)] = 3216,
  [SMALL_STATE(174)] = 3223,
  [SMALL_STATE(175)] = 3230,
  [SMALL_STATE(176)] = 3237,
  [SMALL_STATE(177)] = 3244,
  [SMALL_STATE(178)] = 3251,
  [SMALL_STATE(179)] = 3258,
  [SMALL_STATE(180)] = 3265,
  [SMALL_STATE(181)] = 3272,
  [SMALL_STATE(182)] = 3279,
  [SMALL_STATE(183)] = 3286,
  [SMALL_STATE(184)] = 3293,
  [SMALL_STATE(185)] = 3300,
  [SMALL_STATE(186)] = 3307,
  [SMALL_STATE(187)] = 3314,
  [SMALL_STATE(188)] = 3321,
  [SMALL_STATE(189)] = 3328,
  [SMALL_STATE(190)] = 3335,
  [SMALL_STATE(191)] = 3342,
  [SMALL_STATE(192)] = 3349,
  [SMALL_STATE(193)] = 3356,
  [SMALL_STATE(194)] = 3363,
  [SMALL_STATE(195)] = 3370,
  [SMALL_STATE(196)] = 3377,
  [SMALL_STATE(197)] = 3384,
  [SMALL_STATE(198)] = 3391,
  [SMALL_STATE(199)] = 3398,
  [SMALL_STATE(200)] = 3405,
  [SMALL_STATE(201)] = 3412,
  [SMALL_STATE(202)] = 3419,
  [SMALL_STATE(203)] = 3426,
  [SMALL_STATE(204)] = 3433,
  [SMALL_STATE(205)] = 3440,
  [SMALL_STATE(206)] = 3447,
  [SMALL_STATE(207)] = 3454,
  [SMALL_STATE(208)] = 3461,
  [SMALL_STATE(209)] = 3468,
  [SMALL_STATE(210)] = 3475,
  [SMALL_STATE(211)] = 3482,
  [SMALL_STATE(212)] = 3489,
  [SMALL_STATE(213)] = 3496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 33),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(177),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(48),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(96),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 29),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 29),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 28),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 28),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 27),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 27),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 32),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 32),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 35),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 35),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 31),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 31),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 26),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 26),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 34),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 34),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 30),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 30),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 12),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 5, 0, 10),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 5, 0, 10),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 21),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 21),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 16),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 16),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 20),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 20),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 25),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 25),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 19),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 19),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 22),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 22),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 11),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 11), SHIFT_REPEAT(47),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 11), SHIFT_REPEAT(78),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 11), SHIFT_REPEAT(78),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 11), SHIFT_REPEAT(99),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 24),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 24),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 23),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 23),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 13),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 17),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 17),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(58),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 14),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 5, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 5, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 7, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 7, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 6),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 6),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 4, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 6, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 6, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 2, 0, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 2, 0, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 4, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 1, 0, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 1, 0, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 7),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 7),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 6, 0, 37),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 9),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 15),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 36),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 18),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [597] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_line_cont = 0,
  ts_external_token_line_end = 1,
  ts_external_token_hom_string = 2,
  ts_external_token_hom_inner_string = 3,
  ts_external_token_error_sentinel = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_line_cont] = sym_line_cont,
  [ts_external_token_line_end] = sym_line_end,
  [ts_external_token_hom_string] = sym_hom_string,
  [ts_external_token_hom_inner_string] = sym_hom_inner_string,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_line_cont] = true,
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
  [5] = {
    [ts_external_token_line_cont] = true,
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
