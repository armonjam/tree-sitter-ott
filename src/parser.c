#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 5
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 20
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
  anon_sym_DASH_DASH_DASH_DASH = 8,
  aux_sym_dash_line_token1 = 9,
  anon_sym_PIPE = 10,
  aux_sym_production_mod_token1 = 11,
  anon_sym_LT_SLASH = 12,
  anon_sym_SLASH_SLASH = 13,
  anon_sym_SLASH_GT = 14,
  anon_sym_metavar = 15,
  anon_sym_indexvar = 16,
  anon_sym_COMMA = 17,
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
  sym__namespace_prefix_string = 30,
  sym_string = 31,
  sym_line_cont = 32,
  sym_line_end = 33,
  sym_hom_string = 34,
  sym_hom_inner_string = 35,
  sym_error_sentinel = 36,
  sym_source_file = 37,
  sym__item = 38,
  sym_defnclass = 39,
  sym_defnclass_name = 40,
  sym_defn = 41,
  sym_defn_name = 42,
  sym_defn_rule = 43,
  sym_rule_separator = 44,
  sym_rule_name = 45,
  sym_dash_line = 46,
  sym_rule_line = 47,
  sym_grammar_rule = 48,
  sym_production = 49,
  sym_production_mod = 50,
  sym_production_name = 51,
  sym__element = 52,
  sym_metavardefn = 53,
  sym__string_desc_list1 = 54,
  sym_string_desc = 55,
  sym_embed = 56,
  sym_homomorphism = 57,
  sym__hom_element = 58,
  sym_hom_inner_block = 59,
  sym__hom_inner = 60,
  sym__line_cont = 61,
  sym__line_end = 62,
  sym__hom_string = 63,
  sym__hom_inner_string = 64,
  sym_comprehension_bound = 65,
  sym__comprehension_string = 66,
  sym_dots = 67,
  sym_namespace_prefix = 68,
  sym_id = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym__item_repeat1 = 71,
  aux_sym_defnclass_repeat1 = 72,
  aux_sym_defnclass_repeat2 = 73,
  aux_sym_defn_repeat1 = 74,
  aux_sym_defn_repeat2 = 75,
  aux_sym_defn_rule_repeat1 = 76,
  aux_sym_grammar_rule_repeat1 = 77,
  aux_sym_production_repeat1 = 78,
  aux_sym__string_desc_list1_repeat1 = 79,
  aux_sym_homomorphism_repeat1 = 80,
  aux_sym__hom_inner_repeat1 = 81,
  anon_alias_sym_defn_name = 82,
  alias_sym_hom_body = 83,
  anon_alias_sym_production_modifier = 84,
  anon_alias_sym_production_name = 85,
  anon_alias_sym_rule_name = 86,
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
  [aux_sym_production_mod_token1] = "production_mod_token1",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_metavar] = "metavar",
  [anon_sym_indexvar] = "indexvar",
  [anon_sym_COMMA] = ",",
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
  [sym__namespace_prefix_string] = "_namespace_prefix_string",
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
  [sym__comprehension_string] = "_comprehension_string",
  [sym_dots] = "dots",
  [sym_namespace_prefix] = "namespace_prefix",
  [sym_id] = "defnclass_name",
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
  [alias_sym_hom_body] = "hom_body",
  [anon_alias_sym_production_modifier] = "production_modifier",
  [anon_alias_sym_production_name] = "production_name",
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
  [aux_sym_production_mod_token1] = aux_sym_production_mod_token1,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_metavar] = anon_sym_metavar,
  [anon_sym_indexvar] = anon_sym_indexvar,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__namespace_prefix_string] = sym__namespace_prefix_string,
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
  [sym__comprehension_string] = sym__comprehension_string,
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
  [alias_sym_hom_body] = alias_sym_hom_body,
  [anon_alias_sym_production_modifier] = anon_alias_sym_production_modifier,
  [anon_alias_sym_production_name] = anon_alias_sym_production_name,
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
  [aux_sym_production_mod_token1] = {
    .visible = false,
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
  [sym__namespace_prefix_string] = {
    .visible = false,
    .named = true,
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
  [sym__comprehension_string] = {
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
  [sym_id] = {
    .visible = true,
    .named = false,
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
  [alias_sym_hom_body] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_production_modifier] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_production_name] = {
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
  [2] = {.index = 0, .length = 3},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 6},
  [8] = {.index = 15, .length = 4},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 3},
  [11] = {.index = 25, .length = 4},
  [13] = {.index = 29, .length = 1},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 2},
  [19] = {.index = 36, .length = 3},
  [20] = {.index = 39, .length = 3},
  [21] = {.index = 42, .length = 3},
  [22] = {.index = 45, .length = 4},
  [23] = {.index = 49, .length = 2},
  [24] = {.index = 51, .length = 3},
  [25] = {.index = 54, .length = 3},
  [26] = {.index = 57, .length = 3},
  [27] = {.index = 60, .length = 2},
  [28] = {.index = 62, .length = 4},
  [29] = {.index = 66, .length = 4},
  [30] = {.index = 70, .length = 4},
  [31] = {.index = 74, .length = 3},
  [32] = {.index = 77, .length = 5},
  [34] = {.index = 82, .length = 2},
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
  [7] = {
    [3] = alias_sym_hom_body,
  },
  [12] = {
    [0] = anon_alias_sym_production_modifier,
  },
  [14] = {
    [0] = anon_alias_sym_production_name,
  },
  [15] = {
    [0] = anon_alias_sym_defn_name,
  },
  [33] = {
    [0] = anon_alias_sym_rule_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_id, 4,
    sym_id,
    anon_alias_sym_defn_name,
    anon_alias_sym_production_name,
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 11,
  [39] = 32,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 46,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 51,
  [62] = 62,
  [63] = 63,
  [64] = 51,
  [65] = 58,
  [66] = 58,
  [67] = 18,
  [68] = 68,
  [69] = 21,
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
  [81] = 15,
  [82] = 80,
  [83] = 79,
  [84] = 84,
  [85] = 85,
  [86] = 79,
  [87] = 87,
  [88] = 84,
  [89] = 78,
  [90] = 75,
  [91] = 91,
  [92] = 75,
  [93] = 79,
  [94] = 84,
  [95] = 95,
  [96] = 96,
  [97] = 78,
  [98] = 80,
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
  [111] = 106,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 108,
  [119] = 119,
  [120] = 106,
  [121] = 121,
  [122] = 108,
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
  [146] = 137,
  [147] = 147,
  [148] = 142,
  [149] = 149,
  [150] = 142,
  [151] = 137,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 79,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 43,
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
  [180] = 167,
  [181] = 181,
  [182] = 182,
  [183] = 79,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 185,
  [188] = 188,
  [189] = 189,
  [190] = 166,
  [191] = 185,
  [192] = 188,
  [193] = 167,
  [194] = 166,
  [195] = 186,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 188,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 171,
  [205] = 205,
  [206] = 206,
  [207] = 198,
  [208] = 201,
  [209] = 209,
  [210] = 210,
  [211] = 198,
  [212] = 201,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '%', 117,
        '\'', 124,
        ',', 108,
        '-', 13,
        '.', 14,
        '/', 15,
        ':', 17,
        '<', 16,
        'I', 21,
        '[', 22,
        ']', 23,
        'b', 50,
        'd', 32,
        'e', 37,
        'g', 42,
        'i', 40,
        'm', 33,
        '{', 51,
        '|', 67,
        '}', 52,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == ':') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(117);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == '{') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '<') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '<') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '<') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '<') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == '[') ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(111);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '%', 117,
        ':', 18,
        'd', 76,
        'e', 81,
        'g', 87,
        'i', 84,
        'm', 77,
        '{', 51,
        '|', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '%', 116,
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
          lookahead == ' ') SKIP(54);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'b') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'f') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 's') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'x') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_homomorphism_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_hom_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__namespace_prefix_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(65);
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
      if (lookahead == '.') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(61);
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
      if (lookahead == 'd') ADVANCE(57);
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
      if (lookahead == 'n') ADVANCE(63);
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
      if (lookahead == 'r') ADVANCE(56);
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
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(107);
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
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 54},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 54},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 53},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 53},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 53},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 9, .external_lex_state = 3},
  [43] = {.lex_state = 53},
  [44] = {.lex_state = 9, .external_lex_state = 3},
  [45] = {.lex_state = 53},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0, .external_lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 53},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 9, .external_lex_state = 3},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 53},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 53},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 9, .external_lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 9, .external_lex_state = 3},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 9, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 9, .external_lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 9, .external_lex_state = 3},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0, .external_lex_state = 4},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 5},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 5},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 53},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 53},
  [173] = {.lex_state = 53},
  [174] = {.lex_state = 53},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 66},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 53},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0, .external_lex_state = 5},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 53},
  [197] = {.lex_state = 53},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 53},
  [203] = {.lex_state = 53},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 3},
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
    [sym_source_file] = STATE(209),
    [sym__item] = STATE(68),
    [sym_metavardefn] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(68),
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
    STATE(56), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(3), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(42), 3,
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
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(42), 3,
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
    STATE(56), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(31), 4,
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
    STATE(56), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [192] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(46), 1,
      anon_sym_LT_SLASH,
    ACTIONS(52), 1,
      sym_string,
    STATE(56), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(39), 4,
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
    STATE(56), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(42), 3,
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
    STATE(56), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(5), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(42), 3,
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
    STATE(56), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(42), 3,
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
    STATE(56), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(9), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
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
    STATE(42), 3,
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
  [479] = 3,
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
  [500] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(62), 1,
      sym_rule_separator,
    STATE(165), 1,
      sym_dash_line,
    STATE(37), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [533] = 3,
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
  [554] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(94), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [583] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(45), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(100), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [612] = 3,
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
  [632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_defn,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(60), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [658] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_defn,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(47), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [684] = 3,
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
  [704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(35), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(120), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(124), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [750] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      aux_sym_production_mod_token1,
    STATE(109), 1,
      sym_string_desc,
    STATE(184), 1,
      sym__string_desc_list1,
    ACTIONS(130), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(36), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(134), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [800] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(27), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(138), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(142), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(29), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(146), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(150), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [892] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(154), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(158), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(160), 1,
      sym_hom_string,
    STATE(34), 1,
      aux_sym_homomorphism_repeat1,
    STATE(91), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(156), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(96), 2,
      sym__hom_element,
      sym_dots,
  [925] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym_production_mod_token1,
    STATE(109), 1,
      sym_string_desc,
    STATE(184), 1,
      sym__string_desc_list1,
    ACTIONS(167), 2,
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
  [952] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(158), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(160), 1,
      sym_hom_string,
    ACTIONS(169), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(30), 1,
      aux_sym_homomorphism_repeat1,
    STATE(91), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(156), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(96), 2,
      sym__hom_element,
      sym_dots,
  [985] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(158), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(160), 1,
      sym_hom_string,
    ACTIONS(171), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(34), 1,
      aux_sym_homomorphism_repeat1,
    STATE(91), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(156), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(96), 2,
      sym__hom_element,
      sym_dots,
  [1018] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(175), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(181), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(184), 1,
      sym_hom_string,
    STATE(34), 1,
      aux_sym_homomorphism_repeat1,
    STATE(91), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(178), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(96), 2,
      sym__hom_element,
      sym_dots,
  [1051] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(189), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1074] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      aux_sym_production_mod_token1,
    STATE(109), 1,
      sym_string_desc,
    STATE(184), 1,
      sym__string_desc_list1,
    ACTIONS(193), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(31), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1101] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(197), 1,
      anon_sym_LT_SLASH,
    ACTIONS(203), 1,
      sym_string,
    STATE(37), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(200), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(42), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(73), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1151] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(158), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(160), 1,
      sym_hom_string,
    ACTIONS(209), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(33), 1,
      aux_sym_homomorphism_repeat1,
    STATE(91), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(156), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(96), 2,
      sym__hom_element,
      sym_dots,
  [1184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    STATE(40), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(216), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(211), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(40), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(220), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(218), 4,
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
    STATE(81), 1,
      sym__line_end,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(65), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(226), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1272] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(222), 1,
      sym_string,
    ACTIONS(230), 1,
      sym_line_end,
    STATE(15), 1,
      sym__line_end,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(65), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(40), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(94), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(234), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 1,
      sym_string,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(61), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_defn,
    STATE(70), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1362] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(242), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(244), 1,
      sym_string,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(64), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1385] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LT_SLASH,
    ACTIONS(250), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(252), 1,
      sym_hom_inner_string,
    STATE(117), 1,
      sym_dots,
    STATE(175), 1,
      sym__hom_inner,
    ACTIONS(248), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1412] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      anon_sym_grammar,
    ACTIONS(259), 1,
      anon_sym_embed,
    ACTIONS(262), 1,
      anon_sym_defns,
    ACTIONS(265), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(50), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1437] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(268), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(270), 1,
      sym_string,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(66), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      sym_string,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(51), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(71), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1519] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COLON_COLON,
    ACTIONS(284), 1,
      anon_sym_LT_SLASH,
    ACTIONS(288), 1,
      sym_string,
    ACTIONS(286), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(63), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(290), 1,
      sym_string,
    STATE(13), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(292), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LT_SLASH,
    ACTIONS(302), 1,
      sym_string,
    ACTIONS(299), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(58), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1607] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LT_SLASH,
    ACTIONS(305), 1,
      anon_sym_COLON_COLON,
    ACTIONS(307), 1,
      sym_string,
    ACTIONS(286), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(72), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_defn,
    STATE(70), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(309), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1649] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(270), 1,
      sym_string,
    ACTIONS(311), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(66), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(290), 1,
      sym_string,
    STATE(12), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LT_SLASH,
    ACTIONS(313), 1,
      anon_sym_COLON_COLON,
    ACTIONS(315), 1,
      sym_string,
    ACTIONS(286), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(58), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1718] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LT_SLASH,
    ACTIONS(270), 1,
      sym_string,
    ACTIONS(317), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(66), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1741] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LT_SLASH,
    ACTIONS(325), 1,
      sym_string,
    ACTIONS(328), 1,
      sym_line_end,
    ACTIONS(322), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(65), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1764] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(330), 1,
      anon_sym_LT_SLASH,
    ACTIONS(336), 1,
      sym_string,
    ACTIONS(333), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(66), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1804] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(50), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1846] = 4,
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
  [1865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(346), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1884] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LT_SLASH,
    ACTIONS(315), 1,
      sym_string,
    ACTIONS(348), 1,
      anon_sym_COLON_COLON,
    ACTIONS(286), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(58), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1907] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(350), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(352), 1,
      sym_hom_inner_string,
    STATE(112), 1,
      sym_dots,
    ACTIONS(248), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_hom_inner_string,
    ACTIONS(356), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
    ACTIONS(354), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [1951] = 3,
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
  [1965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(365), 1,
      anon_sym_COLON_COLON,
    ACTIONS(367), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [1983] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(369), 1,
      anon_sym_COLON_COLON,
    ACTIONS(371), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(76), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_line_end,
    ACTIONS(373), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2039] = 3,
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
  [2053] = 3,
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
  [2067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(383), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_line_end,
    ACTIONS(385), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(389), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(393), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_line_end,
    ACTIONS(377), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(397), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2235] = 3,
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
  [2249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(407), 3,
      anon_sym_SLASH_GT,
      anon_sym_IN,
      anon_sym_DOT_DOT_DOT_DOT,
  [2297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SLASH_GT,
    ACTIONS(415), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(157), 1,
      sym_dots,
    ACTIONS(413), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_hom_inner_string,
    ACTIONS(417), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COLON_COLON,
    ACTIONS(421), 1,
      aux_sym_production_mod_token1,
    STATE(104), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_production_mod_token1,
    ACTIONS(423), 1,
      anon_sym_COLON_COLON,
    STATE(121), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym__string_desc_list1_repeat1,
  [2372] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_production_mod_token1,
    ACTIONS(433), 1,
      sym_string,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(185), 1,
      sym_comprehension_bound,
  [2388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_production_mod_token1,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(121), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_production_mod_token1,
    ACTIONS(437), 1,
      sym_string,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(192), 1,
      sym_comprehension_bound,
  [2418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_COLON_COLON,
    ACTIONS(441), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(105), 1,
      aux_sym__string_desc_list1_repeat1,
  [2434] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_production_mod_token1,
    STATE(85), 1,
      sym_defnclass,
    STATE(172), 1,
      sym_defnclass_name,
    STATE(197), 1,
      sym_id,
  [2450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_production_mod_token1,
    ACTIONS(445), 1,
      sym_string,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(191), 1,
      sym_comprehension_bound,
  [2466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(447), 1,
      sym_hom_inner_string,
    STATE(113), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_hom_inner_string,
    ACTIONS(449), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_hom_inner_string,
    ACTIONS(451), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COLON_COLON,
    ACTIONS(455), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym__string_desc_list1_repeat1,
  [2524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(462), 1,
      sym_hom_inner_string,
    STATE(102), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_production_mod_token1,
    ACTIONS(464), 1,
      sym_string,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(188), 1,
      sym_comprehension_bound,
  [2568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(468), 1,
      sym_hom_inner_string,
    STATE(114), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_production_mod_token1,
    ACTIONS(470), 1,
      sym_string,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(187), 1,
      sym_comprehension_bound,
  [2598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_COLON_COLON,
    ACTIONS(474), 1,
      aux_sym_production_mod_token1,
    STATE(121), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2612] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_production_mod_token1,
    ACTIONS(477), 1,
      sym_string,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(200), 1,
      sym_comprehension_bound,
  [2628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      anon_sym_by,
    STATE(116), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(481), 1,
      anon_sym_by,
    STATE(125), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(483), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(85), 1,
      sym_embed,
    STATE(57), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_production_mod_token1,
    ACTIONS(485), 1,
      anon_sym_COLON_COLON,
    STATE(107), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_COLON_COLON,
    ACTIONS(455), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym__namespace_prefix_string,
    STATE(181), 1,
      sym_namespace_prefix,
  [2731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym__namespace_prefix_string,
    STATE(123), 1,
      sym_namespace_prefix,
  [2753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym__namespace_prefix_string,
    STATE(178), 1,
      sym_namespace_prefix,
  [2766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_production_mod_token1,
    STATE(22), 1,
      sym_production_name,
    STATE(53), 1,
      sym_id,
  [2779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_production_mod_token1,
    STATE(26), 1,
      sym_production_name,
    STATE(53), 1,
      sym_id,
  [2801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(166), 1,
      sym_comprehension_bound,
  [2814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(205), 1,
      sym_comprehension_bound,
  [2827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(182), 1,
      sym_comprehension_bound,
  [2840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym__namespace_prefix_string,
    STATE(124), 1,
      sym_namespace_prefix,
  [2853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_production_mod_token1,
    STATE(202), 1,
      sym_id,
    STATE(203), 1,
      sym_defn_name,
  [2866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(167), 1,
      sym_comprehension_bound,
  [2879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_production_mod_token1,
    STATE(28), 1,
      sym_production_name,
    STATE(53), 1,
      sym_id,
  [2892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_production_mod_token1,
    STATE(23), 1,
      sym_production_name,
    STATE(53), 1,
      sym_id,
  [2905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym_production_mod_token1,
    STATE(161), 1,
      sym_rule_name,
    STATE(168), 1,
      sym_id,
  [2918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(190), 1,
      sym_comprehension_bound,
  [2931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_production_mod_token1,
    STATE(109), 1,
      sym_string_desc,
    STATE(210), 1,
      sym__string_desc_list1,
  [2944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(180), 1,
      sym_comprehension_bound,
  [2957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym_production_mod_token1,
    STATE(173), 1,
      sym_defn_name,
    STATE(202), 1,
      sym_id,
  [2970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(193), 1,
      sym_comprehension_bound,
  [2983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(163), 1,
      sym__comprehension_string,
    STATE(194), 1,
      sym_comprehension_bound,
  [2996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_line_cont,
    STATE(145), 1,
      sym__line_cont,
  [3006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_line_end,
    STATE(7), 1,
      sym__line_end,
  [3016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(101), 1,
      sym__comprehension_string,
  [3026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
  [3034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_production_mod_token1,
    STATE(128), 1,
      sym_string_desc,
  [3044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_production_mod_token1,
    STATE(179), 1,
      sym__comprehension_string,
  [3054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      sym__namespace_prefix_string,
  [3064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      sym_hom_inner_string,
      anon_sym_RBRACK_RBRACK,
  [3072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_line_end,
    STATE(2), 1,
      sym__line_end,
  [3082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_line_end,
    STATE(99), 1,
      sym__line_end,
  [3092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_line_end,
    STATE(8), 1,
      sym__line_end,
  [3102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SLASH_GT,
    ACTIONS(521), 1,
      anon_sym_IN,
  [3112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_line_end,
    STATE(10), 1,
      sym__line_end,
  [3122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_line_cont,
    STATE(196), 1,
      sym__line_cont,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_SLASH_GT,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_SLASH_GT,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_line_end,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_line_end,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_COLON_COLON,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_hom_name,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COLON_COLON,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COLON_COLON,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COLON_COLON,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACK_RBRACK,
  [3202] = 2,
    ACTIONS(545), 1,
      aux_sym_dash_line_token1,
    ACTIONS(547), 1,
      sym_comment,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON_COLON_EQ,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_SLASH_GT,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SLASH_GT,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON_COLON_EQ,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH_GT,
  [3251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      aux_sym_production_mod_token1,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COLON_COLON,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SLASH_GT,
  [3272] = 2,
    ACTIONS(547), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym_homomorphism_token1,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
  [3286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SLASH_GT,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_line_cont,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SLASH_GT,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SLASH_GT,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SLASH_GT,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SLASH_GT,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SLASH_GT,
  [3335] = 2,
    ACTIONS(547), 1,
      sym_comment,
    ACTIONS(583), 1,
      aux_sym_homomorphism_token1,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_COLON_COLON,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COLON_COLON,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SLASH_SLASH,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RBRACK_RBRACK,
  [3370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SLASH_GT,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_SLASH_SLASH,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COLON_COLON,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_COLON_COLON,
  [3398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_hom_name,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SLASH_GT,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACK_RBRACK,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SLASH_SLASH,
  [3426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SLASH_SLASH,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      ts_builtin_sym_end,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_COLON_COLON_EQ,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_SLASH_SLASH,
  [3454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
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
  [SMALL_STATE(14)] = 500,
  [SMALL_STATE(15)] = 533,
  [SMALL_STATE(16)] = 554,
  [SMALL_STATE(17)] = 583,
  [SMALL_STATE(18)] = 612,
  [SMALL_STATE(19)] = 632,
  [SMALL_STATE(20)] = 658,
  [SMALL_STATE(21)] = 684,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 727,
  [SMALL_STATE(24)] = 750,
  [SMALL_STATE(25)] = 777,
  [SMALL_STATE(26)] = 800,
  [SMALL_STATE(27)] = 823,
  [SMALL_STATE(28)] = 846,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 892,
  [SMALL_STATE(31)] = 925,
  [SMALL_STATE(32)] = 952,
  [SMALL_STATE(33)] = 985,
  [SMALL_STATE(34)] = 1018,
  [SMALL_STATE(35)] = 1051,
  [SMALL_STATE(36)] = 1074,
  [SMALL_STATE(37)] = 1101,
  [SMALL_STATE(38)] = 1128,
  [SMALL_STATE(39)] = 1151,
  [SMALL_STATE(40)] = 1184,
  [SMALL_STATE(41)] = 1206,
  [SMALL_STATE(42)] = 1228,
  [SMALL_STATE(43)] = 1254,
  [SMALL_STATE(44)] = 1272,
  [SMALL_STATE(45)] = 1298,
  [SMALL_STATE(46)] = 1320,
  [SMALL_STATE(47)] = 1343,
  [SMALL_STATE(48)] = 1362,
  [SMALL_STATE(49)] = 1385,
  [SMALL_STATE(50)] = 1412,
  [SMALL_STATE(51)] = 1437,
  [SMALL_STATE(52)] = 1460,
  [SMALL_STATE(53)] = 1483,
  [SMALL_STATE(54)] = 1500,
  [SMALL_STATE(55)] = 1519,
  [SMALL_STATE(56)] = 1542,
  [SMALL_STATE(57)] = 1565,
  [SMALL_STATE(58)] = 1584,
  [SMALL_STATE(59)] = 1607,
  [SMALL_STATE(60)] = 1630,
  [SMALL_STATE(61)] = 1649,
  [SMALL_STATE(62)] = 1672,
  [SMALL_STATE(63)] = 1695,
  [SMALL_STATE(64)] = 1718,
  [SMALL_STATE(65)] = 1741,
  [SMALL_STATE(66)] = 1764,
  [SMALL_STATE(67)] = 1787,
  [SMALL_STATE(68)] = 1804,
  [SMALL_STATE(69)] = 1829,
  [SMALL_STATE(70)] = 1846,
  [SMALL_STATE(71)] = 1865,
  [SMALL_STATE(72)] = 1884,
  [SMALL_STATE(73)] = 1907,
  [SMALL_STATE(74)] = 1931,
  [SMALL_STATE(75)] = 1951,
  [SMALL_STATE(76)] = 1965,
  [SMALL_STATE(77)] = 1983,
  [SMALL_STATE(78)] = 2001,
  [SMALL_STATE(79)] = 2015,
  [SMALL_STATE(80)] = 2027,
  [SMALL_STATE(81)] = 2039,
  [SMALL_STATE(82)] = 2053,
  [SMALL_STATE(83)] = 2067,
  [SMALL_STATE(84)] = 2081,
  [SMALL_STATE(85)] = 2095,
  [SMALL_STATE(86)] = 2107,
  [SMALL_STATE(87)] = 2119,
  [SMALL_STATE(88)] = 2133,
  [SMALL_STATE(89)] = 2145,
  [SMALL_STATE(90)] = 2157,
  [SMALL_STATE(91)] = 2169,
  [SMALL_STATE(92)] = 2183,
  [SMALL_STATE(93)] = 2195,
  [SMALL_STATE(94)] = 2209,
  [SMALL_STATE(95)] = 2221,
  [SMALL_STATE(96)] = 2235,
  [SMALL_STATE(97)] = 2249,
  [SMALL_STATE(98)] = 2261,
  [SMALL_STATE(99)] = 2273,
  [SMALL_STATE(100)] = 2284,
  [SMALL_STATE(101)] = 2297,
  [SMALL_STATE(102)] = 2314,
  [SMALL_STATE(103)] = 2328,
  [SMALL_STATE(104)] = 2342,
  [SMALL_STATE(105)] = 2356,
  [SMALL_STATE(106)] = 2372,
  [SMALL_STATE(107)] = 2388,
  [SMALL_STATE(108)] = 2402,
  [SMALL_STATE(109)] = 2418,
  [SMALL_STATE(110)] = 2434,
  [SMALL_STATE(111)] = 2450,
  [SMALL_STATE(112)] = 2466,
  [SMALL_STATE(113)] = 2480,
  [SMALL_STATE(114)] = 2494,
  [SMALL_STATE(115)] = 2508,
  [SMALL_STATE(116)] = 2524,
  [SMALL_STATE(117)] = 2538,
  [SMALL_STATE(118)] = 2552,
  [SMALL_STATE(119)] = 2568,
  [SMALL_STATE(120)] = 2582,
  [SMALL_STATE(121)] = 2598,
  [SMALL_STATE(122)] = 2612,
  [SMALL_STATE(123)] = 2628,
  [SMALL_STATE(124)] = 2642,
  [SMALL_STATE(125)] = 2656,
  [SMALL_STATE(126)] = 2670,
  [SMALL_STATE(127)] = 2684,
  [SMALL_STATE(128)] = 2698,
  [SMALL_STATE(129)] = 2709,
  [SMALL_STATE(130)] = 2718,
  [SMALL_STATE(131)] = 2731,
  [SMALL_STATE(132)] = 2740,
  [SMALL_STATE(133)] = 2753,
  [SMALL_STATE(134)] = 2766,
  [SMALL_STATE(135)] = 2779,
  [SMALL_STATE(136)] = 2788,
  [SMALL_STATE(137)] = 2801,
  [SMALL_STATE(138)] = 2814,
  [SMALL_STATE(139)] = 2827,
  [SMALL_STATE(140)] = 2840,
  [SMALL_STATE(141)] = 2853,
  [SMALL_STATE(142)] = 2866,
  [SMALL_STATE(143)] = 2879,
  [SMALL_STATE(144)] = 2892,
  [SMALL_STATE(145)] = 2905,
  [SMALL_STATE(146)] = 2918,
  [SMALL_STATE(147)] = 2931,
  [SMALL_STATE(148)] = 2944,
  [SMALL_STATE(149)] = 2957,
  [SMALL_STATE(150)] = 2970,
  [SMALL_STATE(151)] = 2983,
  [SMALL_STATE(152)] = 2996,
  [SMALL_STATE(153)] = 3006,
  [SMALL_STATE(154)] = 3016,
  [SMALL_STATE(155)] = 3026,
  [SMALL_STATE(156)] = 3034,
  [SMALL_STATE(157)] = 3044,
  [SMALL_STATE(158)] = 3054,
  [SMALL_STATE(159)] = 3064,
  [SMALL_STATE(160)] = 3072,
  [SMALL_STATE(161)] = 3082,
  [SMALL_STATE(162)] = 3092,
  [SMALL_STATE(163)] = 3102,
  [SMALL_STATE(164)] = 3112,
  [SMALL_STATE(165)] = 3122,
  [SMALL_STATE(166)] = 3132,
  [SMALL_STATE(167)] = 3139,
  [SMALL_STATE(168)] = 3146,
  [SMALL_STATE(169)] = 3153,
  [SMALL_STATE(170)] = 3160,
  [SMALL_STATE(171)] = 3167,
  [SMALL_STATE(172)] = 3174,
  [SMALL_STATE(173)] = 3181,
  [SMALL_STATE(174)] = 3188,
  [SMALL_STATE(175)] = 3195,
  [SMALL_STATE(176)] = 3202,
  [SMALL_STATE(177)] = 3209,
  [SMALL_STATE(178)] = 3216,
  [SMALL_STATE(179)] = 3223,
  [SMALL_STATE(180)] = 3230,
  [SMALL_STATE(181)] = 3237,
  [SMALL_STATE(182)] = 3244,
  [SMALL_STATE(183)] = 3251,
  [SMALL_STATE(184)] = 3258,
  [SMALL_STATE(185)] = 3265,
  [SMALL_STATE(186)] = 3272,
  [SMALL_STATE(187)] = 3279,
  [SMALL_STATE(188)] = 3286,
  [SMALL_STATE(189)] = 3293,
  [SMALL_STATE(190)] = 3300,
  [SMALL_STATE(191)] = 3307,
  [SMALL_STATE(192)] = 3314,
  [SMALL_STATE(193)] = 3321,
  [SMALL_STATE(194)] = 3328,
  [SMALL_STATE(195)] = 3335,
  [SMALL_STATE(196)] = 3342,
  [SMALL_STATE(197)] = 3349,
  [SMALL_STATE(198)] = 3356,
  [SMALL_STATE(199)] = 3363,
  [SMALL_STATE(200)] = 3370,
  [SMALL_STATE(201)] = 3377,
  [SMALL_STATE(202)] = 3384,
  [SMALL_STATE(203)] = 3391,
  [SMALL_STATE(204)] = 3398,
  [SMALL_STATE(205)] = 3405,
  [SMALL_STATE(206)] = 3412,
  [SMALL_STATE(207)] = 3419,
  [SMALL_STATE(208)] = 3426,
  [SMALL_STATE(209)] = 3433,
  [SMALL_STATE(210)] = 3440,
  [SMALL_STATE(211)] = 3447,
  [SMALL_STATE(212)] = 3454,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 30),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 32),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 32),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 29),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 29),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 28),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 28),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(176),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(48),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 26),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 26),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 25),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 25),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 24),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 24),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 23),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 23),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 5, 0, 7),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 5, 0, 7),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 6),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 9),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 17),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 13),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 13),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 16),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 16),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 18),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 18),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 20),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 20),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 21),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 21),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 22),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 22),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(49),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(83),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(83),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(91),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 19),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 19),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 11),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 14),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 14),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 10),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 7, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 7, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 2, 0, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 2, 0, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 1, 0, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 1, 0, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 5, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 5, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 6, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 6, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 6, 0, 34),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 12),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 33),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 15),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [611] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
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
