#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 218
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 5
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 12
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
  anon_sym_RBRACE_RBRACE = 19,
  sym_hom_name = 20,
  anon_sym_LBRACK_LBRACK = 21,
  anon_sym_RBRACK_RBRACK = 22,
  anon_sym_IN = 23,
  anon_sym_SQUOTE = 24,
  sym__namespace_prefix_string = 25,
  anon_sym_DOT_DOT = 26,
  anon_sym_DOT_DOT_DOT = 27,
  anon_sym_DOT_DOT_DOT_DOT = 28,
  sym_string = 29,
  sym_comment = 30,
  sym__whitespace = 31,
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
  sym_comprehension_bound = 61,
  sym__comprehension_string = 62,
  sym_namespace_prefix = 63,
  sym_dots = 64,
  sym_id = 65,
  sym__line_cont = 66,
  sym__line_end = 67,
  sym__hom_string = 68,
  sym__hom_inner_string = 69,
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
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_hom_name] = "hom_name",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_IN] = "IN",
  [anon_sym_SQUOTE] = "'",
  [sym__namespace_prefix_string] = "_namespace_prefix_string",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT_DOT_DOT] = "....",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
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
  [sym_comprehension_bound] = "comprehension_bound",
  [sym__comprehension_string] = "_comprehension_string",
  [sym_namespace_prefix] = "namespace_prefix",
  [sym_dots] = "dots",
  [sym_id] = "defnclass_name",
  [sym__line_cont] = "_line_cont",
  [sym__line_end] = "_line_end",
  [sym__hom_string] = "_hom_string",
  [sym__hom_inner_string] = "_hom_inner_string",
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
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_hom_name] = sym_hom_name,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__namespace_prefix_string] = sym__namespace_prefix_string,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT_DOT,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
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
  [sym_comprehension_bound] = sym_comprehension_bound,
  [sym__comprehension_string] = sym__comprehension_string,
  [sym_namespace_prefix] = sym_namespace_prefix,
  [sym_dots] = sym_dots,
  [sym_id] = sym_id,
  [sym__line_cont] = sym__line_cont,
  [sym__line_end] = sym__line_end,
  [sym__hom_string] = sym__hom_string,
  [sym__hom_inner_string] = sym__hom_inner_string,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__namespace_prefix_string] = {
    .visible = false,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
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
  [sym_comprehension_bound] = {
    .visible = true,
    .named = true,
  },
  [sym__comprehension_string] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_dots] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = false,
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
  [15] = {.index = 30, .length = 2},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 2},
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
    {field_definition_name, 4},
    {field_namespace_prefix, 6},
  [51] =
    {field_definition_name, 4},
    {field_definition_rule, 9},
    {field_namespace_prefix, 6},
  [54] =
    {field_definition_name, 4},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [57] =
    {field_definition_name, 5},
    {field_element, 2},
    {field_namespace_prefix, 7},
  [60] =
    {field_conclusion, 1},
    {field_separator, 0},
  [62] =
    {field_definition_name, 4},
    {field_definition_rule, 10},
    {field_homomorphism, 7},
    {field_namespace_prefix, 6},
  [66] =
    {field_definition_name, 5},
    {field_definition_rule, 10},
    {field_element, 2},
    {field_namespace_prefix, 7},
  [70] =
    {field_definition_name, 5},
    {field_element, 2},
    {field_homomorphism, 8},
    {field_namespace_prefix, 7},
  [74] =
    {field_conclusion, 2},
    {field_premise, 0},
    {field_separator, 1},
  [77] =
    {field_definition_name, 5},
    {field_definition_rule, 11},
    {field_element, 2},
    {field_homomorphism, 8},
    {field_namespace_prefix, 7},
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
  [18] = {
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
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 30,
  [39] = 11,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 20,
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
  [57] = 57,
  [58] = 58,
  [59] = 19,
  [60] = 60,
  [61] = 47,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 50,
  [66] = 47,
  [67] = 67,
  [68] = 68,
  [69] = 50,
  [70] = 70,
  [71] = 71,
  [72] = 62,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 15,
  [82] = 82,
  [83] = 80,
  [84] = 84,
  [85] = 85,
  [86] = 80,
  [87] = 87,
  [88] = 84,
  [89] = 79,
  [90] = 90,
  [91] = 78,
  [92] = 78,
  [93] = 80,
  [94] = 76,
  [95] = 95,
  [96] = 96,
  [97] = 79,
  [98] = 84,
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
  [113] = 110,
  [114] = 114,
  [115] = 102,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 110,
  [124] = 124,
  [125] = 102,
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
  [137] = 136,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 136,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 144,
  [150] = 150,
  [151] = 144,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 80,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 45,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 80,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 190,
  [194] = 186,
  [195] = 183,
  [196] = 192,
  [197] = 190,
  [198] = 186,
  [199] = 183,
  [200] = 174,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 192,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 185,
  [210] = 210,
  [211] = 211,
  [212] = 205,
  [213] = 191,
  [214] = 214,
  [215] = 215,
  [216] = 205,
  [217] = 191,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '%', 159,
        '\'', 116,
        ',', 109,
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
        '|', 68,
        '}', 52,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == ':') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == ':') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == '{') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(158);
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
      if (lookahead == '.') ADVANCE(118);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(98);
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
      if (lookahead == 'd') ADVANCE(58);
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
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(106);
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
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(110);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(111);
      END_STATE();
    case 53:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '%', 159,
        ',', 109,
        ':', 17,
        'd', 77,
        'e', 82,
        'g', 88,
        'i', 85,
        'm', 78,
        '{', 51,
        '|', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '%', 159,
        ':', 18,
        'd', 77,
        'e', 82,
        'g', 88,
        'i', 85,
        'm', 78,
        '{', 51,
        '|', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '%', 157,
        '-', 126,
        '.', 127,
        '<', 128,
        'd', 139,
        'e', 144,
        'g', 150,
        'i', 148,
        'm', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (lookahead != 0) ADVANCE(158);
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
          lookahead != ' ') ADVANCE(158);
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
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'b') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'f') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'x') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
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
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__namespace_prefix_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
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
          lookahead != ' ') ADVANCE(158);
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
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(160);
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
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 53},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 53},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 53},
  [43] = {.lex_state = 9, .external_lex_state = 3},
  [44] = {.lex_state = 9, .external_lex_state = 3},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 0, .external_lex_state = 4},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 53},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 9, .external_lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 9, .external_lex_state = 3},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 9, .external_lex_state = 3},
  [89] = {.lex_state = 9, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 9, .external_lex_state = 3},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 9, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 4},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 5},
  [156] = {.lex_state = 0, .external_lex_state = 5},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 54},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 54},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 54},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 0, .external_lex_state = 5},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 67},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 54},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 54},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 54},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 54},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 54},
  [215] = {.lex_state = 54},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_cont] = ACTIONS(1),
    [sym_line_end] = ACTIONS(1),
    [sym_hom_string] = ACTIONS(1),
    [sym_hom_inner_string] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(172),
    [sym__item] = STATE(54),
    [sym_metavardefn] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(54),
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
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_comment,
    STATE(48), 1,
      sym_rule_separator,
    STATE(156), 1,
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
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [48] = 12,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_comment,
    STATE(48), 1,
      sym_rule_separator,
    STATE(156), 1,
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
    ACTIONS(31), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [96] = 12,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_comment,
    STATE(48), 1,
      sym_rule_separator,
    STATE(156), 1,
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
    ACTIONS(35), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [144] = 12,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_comment,
    STATE(48), 1,
      sym_rule_separator,
    STATE(156), 1,
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
    ACTIONS(39), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [192] = 12,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(48), 1,
      anon_sym_LT_SLASH,
    ACTIONS(54), 1,
      sym_string,
    STATE(48), 1,
      sym_rule_separator,
    STATE(156), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(14), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(43), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(51), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [240] = 12,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_comment,
    STATE(48), 1,
      sym_rule_separator,
    STATE(156), 1,
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
    ACTIONS(59), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [288] = 12,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_comment,
    STATE(48), 1,
      sym_rule_separator,
    STATE(156), 1,
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
    ACTIONS(63), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [336] = 12,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_comment,
    STATE(48), 1,
      sym_rule_separator,
    STATE(156), 1,
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
    ACTIONS(67), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [384] = 12,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_comment,
    STATE(48), 1,
      sym_rule_separator,
    STATE(156), 1,
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
    ACTIONS(71), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(75), 4,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [458] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(82), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [479] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(86), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [500] = 9,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_comment,
    STATE(52), 1,
      sym_rule_separator,
    STATE(156), 1,
      sym_dash_line,
    STATE(33), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [533] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(90), 8,
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
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(42), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(96), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [583] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(40), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(102), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [612] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_defn,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(39), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(55), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 4,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_defn,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(64), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(122), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(126), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [750] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(37), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(130), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
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
  [796] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
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
  [819] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(142), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(148), 1,
      sym_hom_string,
    STATE(38), 1,
      aux_sym_homomorphism_repeat1,
    STATE(90), 1,
      sym_hom_inner_block,
    STATE(95), 1,
      sym__hom_string,
    ACTIONS(144), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(87), 2,
      sym__hom_element,
      sym_dots,
  [852] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(152), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(156), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [898] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(148), 1,
      sym_hom_string,
    ACTIONS(158), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(32), 1,
      aux_sym_homomorphism_repeat1,
    STATE(90), 1,
      sym_hom_inner_block,
    STATE(95), 1,
      sym__hom_string,
    ACTIONS(144), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(87), 2,
      sym__hom_element,
      sym_dots,
  [931] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(148), 1,
      sym_hom_string,
    ACTIONS(160), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(30), 1,
      aux_sym_homomorphism_repeat1,
    STATE(90), 1,
      sym_hom_inner_block,
    STATE(95), 1,
      sym__hom_string,
    ACTIONS(144), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(87), 2,
      sym__hom_element,
      sym_dots,
  [964] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(164), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(170), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(173), 1,
      sym_hom_string,
    STATE(32), 1,
      aux_sym_homomorphism_repeat1,
    STATE(90), 1,
      sym_hom_inner_block,
    STATE(95), 1,
      sym__hom_string,
    ACTIONS(167), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(87), 2,
      sym__hom_element,
      sym_dots,
  [997] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(178), 1,
      anon_sym_LT_SLASH,
    ACTIONS(184), 1,
      sym_string,
    STATE(33), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(181), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(44), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1024] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_production_mod_token1,
    STATE(119), 1,
      sym_string_desc,
    STATE(173), 1,
      sym__string_desc_list1,
    ACTIONS(191), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(36), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1051] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_production_mod_token1,
    STATE(119), 1,
      sym_string_desc,
    STATE(173), 1,
      sym__string_desc_list1,
    ACTIONS(198), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(35), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1078] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_production_mod_token1,
    STATE(119), 1,
      sym_string_desc,
    STATE(173), 1,
      sym__string_desc_list1,
    ACTIONS(202), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(35), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(206), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1128] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(148), 1,
      sym_hom_string,
    ACTIONS(208), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(32), 1,
      aux_sym_homomorphism_repeat1,
    STATE(90), 1,
      sym_hom_inner_block,
    STATE(95), 1,
      sym__hom_string,
    ACTIONS(144), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(87), 2,
      sym__hom_element,
      sym_dots,
  [1161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_defn,
    ACTIONS(210), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(39), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(215), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(222), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(102), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1250] = 7,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_string,
    ACTIONS(226), 1,
      sym_line_end,
    STATE(15), 1,
      sym__line_end,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(63), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1276] = 7,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_string,
    ACTIONS(228), 1,
      sym_line_end,
    STATE(81), 1,
      sym__line_end,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(63), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(230), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_defn,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_LBRACE_LBRACE,
  [1337] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(240), 1,
      sym_string,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(69), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1360] = 6,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_string,
    STATE(13), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1383] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LT_SLASH,
    ACTIONS(248), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(250), 1,
      sym_hom_inner_string,
    STATE(106), 1,
      sym_dots,
    STATE(179), 1,
      sym__hom_inner,
    ACTIONS(246), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1410] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(252), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      sym_string,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(62), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1433] = 7,
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
    STATE(51), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1458] = 6,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_string,
    STATE(12), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(43), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1481] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COLON_COLON,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    ACTIONS(276), 1,
      sym_string,
    ACTIONS(274), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(71), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1504] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(51), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_defn,
    STATE(57), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1548] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    ACTIONS(282), 1,
      anon_sym_COLON_COLON,
    ACTIONS(284), 1,
      sym_string,
    ACTIONS(274), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(67), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_defn,
    STATE(57), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(286), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(68), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(291), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_defn,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_LBRACE_LBRACE,
  [1626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(293), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1643] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(299), 1,
      sym_string,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(50), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1666] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_LT_SLASH,
    ACTIONS(304), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(309), 1,
      sym_string,
    ACTIONS(306), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(62), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1689] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LT_SLASH,
    ACTIONS(318), 1,
      sym_string,
    ACTIONS(321), 1,
      sym_line_end,
    ACTIONS(315), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(63), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_defn,
    STATE(57), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(323), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1731] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(254), 1,
      sym_string,
    ACTIONS(325), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(62), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1754] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(327), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(329), 1,
      sym_string,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(65), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1777] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    ACTIONS(331), 1,
      anon_sym_COLON_COLON,
    ACTIONS(333), 1,
      sym_string,
    ACTIONS(274), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(72), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(335), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1819] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LT_SLASH,
    ACTIONS(254), 1,
      sym_string,
    ACTIONS(337), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(238), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(62), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(339), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1861] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    ACTIONS(333), 1,
      sym_string,
    ACTIONS(341), 1,
      anon_sym_COLON_COLON,
    ACTIONS(274), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(72), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1884] = 6,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COLON_COLON,
    ACTIONS(343), 1,
      anon_sym_LT_SLASH,
    ACTIONS(349), 1,
      sym_string,
    ACTIONS(346), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(72), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1907] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(352), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(354), 1,
      sym_hom_inner_string,
    STATE(127), 1,
      sym_dots,
    ACTIONS(246), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_hom_inner_string,
    ACTIONS(358), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
    ACTIONS(356), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1963] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(363), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1975] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(363), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1987] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(365), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1999] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(367), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2011] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_line_end,
    ACTIONS(369), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2025] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(90), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(373), 1,
      anon_sym_COLON_COLON,
    ACTIONS(375), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(96), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(371), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2071] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(379), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2097] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(369), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2109] = 3,
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
  [2123] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_line_end,
    ACTIONS(377), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2137] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_line_end,
    ACTIONS(367), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2151] = 3,
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
  [2165] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym_line_end,
    ACTIONS(365), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2179] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(365), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2191] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(369), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2203] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_line_end,
    ACTIONS(363), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(399), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2231] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
    ACTIONS(405), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2249] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(367), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2261] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SLASH_GT,
    ACTIONS(411), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(154), 1,
      sym_dots,
    ACTIONS(409), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(413), 3,
      anon_sym_SLASH_GT,
      anon_sym_IN,
      anon_sym_DOT_DOT_DOT_DOT,
  [2303] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(417), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2314] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(421), 1,
      sym_string,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(196), 1,
      sym_comprehension_bound,
  [2330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COLON_COLON,
    ACTIONS(425), 1,
      aux_sym_production_mod_token1,
    STATE(107), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(429), 1,
      sym_hom_inner_string,
    STATE(116), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_hom_inner_string,
    ACTIONS(431), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(433), 1,
      sym_hom_inner_string,
    STATE(122), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    ACTIONS(437), 1,
      aux_sym_production_mod_token1,
    STATE(107), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON_COLON,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym__string_desc_list1_repeat1,
  [2416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(75), 1,
      sym_embed,
    STATE(70), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2430] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(447), 1,
      sym_string,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(190), 1,
      sym_comprehension_bound,
  [2446] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_production_mod_token1,
    STATE(75), 1,
      sym_defnclass,
    STATE(211), 1,
      sym_id,
    STATE(214), 1,
      sym_defnclass_name,
  [2462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_production_mod_token1,
    ACTIONS(451), 1,
      anon_sym_COLON_COLON,
    STATE(107), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2476] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(453), 1,
      sym_string,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(193), 1,
      sym_comprehension_bound,
  [2492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_production_mod_token1,
    ACTIONS(455), 1,
      anon_sym_COLON_COLON,
    STATE(103), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2506] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(457), 1,
      sym_string,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(192), 1,
      sym_comprehension_bound,
  [2522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_hom_inner_string,
    ACTIONS(459), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2536] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COLON_COLON,
    ACTIONS(463), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym__string_desc_list1_repeat1,
  [2552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(467), 1,
      anon_sym_by,
    STATE(39), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_COLON_COLON,
    ACTIONS(471), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(117), 1,
      aux_sym__string_desc_list1_repeat1,
  [2582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(473), 1,
      anon_sym_by,
    STATE(118), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(475), 1,
      anon_sym_by,
    STATE(39), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_hom_inner_string,
    ACTIONS(477), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(74), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2624] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(479), 1,
      sym_string,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(197), 1,
      sym_comprehension_bound,
  [2640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      aux_sym_production_mod_token1,
    ACTIONS(481), 1,
      anon_sym_COLON_COLON,
    STATE(112), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2654] = 5,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_production_mod_token1,
    ACTIONS(483), 1,
      sym_string,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(204), 1,
      sym_comprehension_bound,
  [2670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(485), 1,
      anon_sym_by,
    STATE(121), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(487), 1,
      sym_hom_inner_string,
    STATE(105), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym__namespace_prefix_string,
    STATE(171), 1,
      sym_namespace_prefix,
  [2711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym__namespace_prefix_string,
    STATE(126), 1,
      sym_namespace_prefix,
  [2733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_production_mod_token1,
    STATE(184), 1,
      sym_defn_name,
    STATE(215), 1,
      sym_id,
  [2746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_production_mod_token1,
    STATE(22), 1,
      sym_production_name,
    STATE(60), 1,
      sym_id,
  [2759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_production_mod_token1,
    STATE(24), 1,
      sym_production_name,
    STATE(60), 1,
      sym_id,
  [2772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym__namespace_prefix_string,
    STATE(120), 1,
      sym_namespace_prefix,
  [2785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(202), 1,
      sym_comprehension_bound,
  [2798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(199), 1,
      sym_comprehension_bound,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(183), 1,
      sym_comprehension_bound,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(207), 1,
      sym_comprehension_bound,
  [2846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      sym__namespace_prefix_string,
    STATE(178), 1,
      sym_namespace_prefix,
  [2859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_production_mod_token1,
    STATE(28), 1,
      sym_production_name,
    STATE(60), 1,
      sym_id,
  [2881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(195), 1,
      sym_comprehension_bound,
  [2894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(186), 1,
      sym_comprehension_bound,
  [2907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_production_mod_token1,
    STATE(157), 1,
      sym_rule_name,
    STATE(167), 1,
      sym_id,
  [2920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_production_mod_token1,
    STATE(187), 1,
      sym_defn_name,
    STATE(215), 1,
      sym_id,
  [2933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON_COLON,
    ACTIONS(442), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(119), 1,
      sym_string_desc,
    STATE(210), 1,
      sym__string_desc_list1,
  [2957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(194), 1,
      sym_comprehension_bound,
  [2970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_production_mod_token1,
    STATE(29), 1,
      sym_production_name,
    STATE(60), 1,
      sym_id,
  [2983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(158), 1,
      sym__comprehension_string,
    STATE(198), 1,
      sym_comprehension_bound,
  [2996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(99), 1,
      sym__comprehension_string,
  [3006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_line_end,
    STATE(2), 1,
      sym__line_end,
  [3016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym_production_mod_token1,
    STATE(182), 1,
      sym__comprehension_string,
  [3026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_line_cont,
    STATE(145), 1,
      sym__line_cont,
  [3036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_line_cont,
    STATE(170), 1,
      sym__line_cont,
  [3046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_line_end,
    STATE(101), 1,
      sym__line_end,
  [3056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_SLASH_GT,
    ACTIONS(515), 1,
      anon_sym_IN,
  [3066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_line_end,
    STATE(7), 1,
      sym__line_end,
  [3076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      sym__namespace_prefix_string,
  [3086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      sym_hom_inner_string,
      anon_sym_RBRACK_RBRACK,
  [3094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_line_end,
    STATE(8), 1,
      sym__line_end,
  [3104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_line_end,
    STATE(10), 1,
      sym__line_end,
  [3114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_production_mod_token1,
    STATE(147), 1,
      sym_string_desc,
  [3124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_COLON_COLON,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_line_end,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_line_end,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON_COLON,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COLON_COLON_EQ,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COLON_COLON,
  [3188] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym__whitespace,
  [3195] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym__whitespace,
  [3202] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym__whitespace,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_line_cont,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON_COLON_EQ,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RBRACK_RBRACK,
  [3230] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym__whitespace,
  [3237] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym_dash_line_token1,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH_GT,
  [3251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SLASH_GT,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON_COLON,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_hom_name,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COLON_COLON,
  [3286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_production_mod_token1,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RBRACK_RBRACK,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SLASH_GT,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SLASH_SLASH,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_SLASH_GT,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_SLASH_GT,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH_GT,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SLASH_GT,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SLASH_GT,
  [3370] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__whitespace,
  [3377] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym__whitespace,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SLASH_GT,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACK_RBRACK,
  [3398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SLASH_GT,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SLASH_SLASH,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SLASH_GT,
  [3426] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym__whitespace,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_hom_name,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_COLON_COLON_EQ,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_COLON_COLON,
  [3454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_SLASH,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SLASH_SLASH,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_COLON_COLON,
  [3475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_COLON_COLON,
  [3482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SLASH_SLASH,
  [3489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
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
  [SMALL_STATE(19)] = 638,
  [SMALL_STATE(20)] = 658,
  [SMALL_STATE(21)] = 678,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 727,
  [SMALL_STATE(24)] = 750,
  [SMALL_STATE(25)] = 773,
  [SMALL_STATE(26)] = 796,
  [SMALL_STATE(27)] = 819,
  [SMALL_STATE(28)] = 852,
  [SMALL_STATE(29)] = 875,
  [SMALL_STATE(30)] = 898,
  [SMALL_STATE(31)] = 931,
  [SMALL_STATE(32)] = 964,
  [SMALL_STATE(33)] = 997,
  [SMALL_STATE(34)] = 1024,
  [SMALL_STATE(35)] = 1051,
  [SMALL_STATE(36)] = 1078,
  [SMALL_STATE(37)] = 1105,
  [SMALL_STATE(38)] = 1128,
  [SMALL_STATE(39)] = 1161,
  [SMALL_STATE(40)] = 1184,
  [SMALL_STATE(41)] = 1206,
  [SMALL_STATE(42)] = 1228,
  [SMALL_STATE(43)] = 1250,
  [SMALL_STATE(44)] = 1276,
  [SMALL_STATE(45)] = 1302,
  [SMALL_STATE(46)] = 1320,
  [SMALL_STATE(47)] = 1337,
  [SMALL_STATE(48)] = 1360,
  [SMALL_STATE(49)] = 1383,
  [SMALL_STATE(50)] = 1410,
  [SMALL_STATE(51)] = 1433,
  [SMALL_STATE(52)] = 1458,
  [SMALL_STATE(53)] = 1481,
  [SMALL_STATE(54)] = 1504,
  [SMALL_STATE(55)] = 1529,
  [SMALL_STATE(56)] = 1548,
  [SMALL_STATE(57)] = 1571,
  [SMALL_STATE(58)] = 1590,
  [SMALL_STATE(59)] = 1609,
  [SMALL_STATE(60)] = 1626,
  [SMALL_STATE(61)] = 1643,
  [SMALL_STATE(62)] = 1666,
  [SMALL_STATE(63)] = 1689,
  [SMALL_STATE(64)] = 1712,
  [SMALL_STATE(65)] = 1731,
  [SMALL_STATE(66)] = 1754,
  [SMALL_STATE(67)] = 1777,
  [SMALL_STATE(68)] = 1800,
  [SMALL_STATE(69)] = 1819,
  [SMALL_STATE(70)] = 1842,
  [SMALL_STATE(71)] = 1861,
  [SMALL_STATE(72)] = 1884,
  [SMALL_STATE(73)] = 1907,
  [SMALL_STATE(74)] = 1931,
  [SMALL_STATE(75)] = 1951,
  [SMALL_STATE(76)] = 1963,
  [SMALL_STATE(77)] = 1975,
  [SMALL_STATE(78)] = 1987,
  [SMALL_STATE(79)] = 1999,
  [SMALL_STATE(80)] = 2011,
  [SMALL_STATE(81)] = 2025,
  [SMALL_STATE(82)] = 2039,
  [SMALL_STATE(83)] = 2057,
  [SMALL_STATE(84)] = 2071,
  [SMALL_STATE(85)] = 2083,
  [SMALL_STATE(86)] = 2097,
  [SMALL_STATE(87)] = 2109,
  [SMALL_STATE(88)] = 2123,
  [SMALL_STATE(89)] = 2137,
  [SMALL_STATE(90)] = 2151,
  [SMALL_STATE(91)] = 2165,
  [SMALL_STATE(92)] = 2179,
  [SMALL_STATE(93)] = 2191,
  [SMALL_STATE(94)] = 2203,
  [SMALL_STATE(95)] = 2217,
  [SMALL_STATE(96)] = 2231,
  [SMALL_STATE(97)] = 2249,
  [SMALL_STATE(98)] = 2261,
  [SMALL_STATE(99)] = 2273,
  [SMALL_STATE(100)] = 2290,
  [SMALL_STATE(101)] = 2303,
  [SMALL_STATE(102)] = 2314,
  [SMALL_STATE(103)] = 2330,
  [SMALL_STATE(104)] = 2344,
  [SMALL_STATE(105)] = 2358,
  [SMALL_STATE(106)] = 2372,
  [SMALL_STATE(107)] = 2386,
  [SMALL_STATE(108)] = 2400,
  [SMALL_STATE(109)] = 2416,
  [SMALL_STATE(110)] = 2430,
  [SMALL_STATE(111)] = 2446,
  [SMALL_STATE(112)] = 2462,
  [SMALL_STATE(113)] = 2476,
  [SMALL_STATE(114)] = 2492,
  [SMALL_STATE(115)] = 2506,
  [SMALL_STATE(116)] = 2522,
  [SMALL_STATE(117)] = 2536,
  [SMALL_STATE(118)] = 2552,
  [SMALL_STATE(119)] = 2566,
  [SMALL_STATE(120)] = 2582,
  [SMALL_STATE(121)] = 2596,
  [SMALL_STATE(122)] = 2610,
  [SMALL_STATE(123)] = 2624,
  [SMALL_STATE(124)] = 2640,
  [SMALL_STATE(125)] = 2654,
  [SMALL_STATE(126)] = 2670,
  [SMALL_STATE(127)] = 2684,
  [SMALL_STATE(128)] = 2698,
  [SMALL_STATE(129)] = 2711,
  [SMALL_STATE(130)] = 2720,
  [SMALL_STATE(131)] = 2733,
  [SMALL_STATE(132)] = 2746,
  [SMALL_STATE(133)] = 2759,
  [SMALL_STATE(134)] = 2772,
  [SMALL_STATE(135)] = 2785,
  [SMALL_STATE(136)] = 2798,
  [SMALL_STATE(137)] = 2811,
  [SMALL_STATE(138)] = 2824,
  [SMALL_STATE(139)] = 2833,
  [SMALL_STATE(140)] = 2846,
  [SMALL_STATE(141)] = 2859,
  [SMALL_STATE(142)] = 2868,
  [SMALL_STATE(143)] = 2881,
  [SMALL_STATE(144)] = 2894,
  [SMALL_STATE(145)] = 2907,
  [SMALL_STATE(146)] = 2920,
  [SMALL_STATE(147)] = 2933,
  [SMALL_STATE(148)] = 2944,
  [SMALL_STATE(149)] = 2957,
  [SMALL_STATE(150)] = 2970,
  [SMALL_STATE(151)] = 2983,
  [SMALL_STATE(152)] = 2996,
  [SMALL_STATE(153)] = 3006,
  [SMALL_STATE(154)] = 3016,
  [SMALL_STATE(155)] = 3026,
  [SMALL_STATE(156)] = 3036,
  [SMALL_STATE(157)] = 3046,
  [SMALL_STATE(158)] = 3056,
  [SMALL_STATE(159)] = 3066,
  [SMALL_STATE(160)] = 3076,
  [SMALL_STATE(161)] = 3086,
  [SMALL_STATE(162)] = 3094,
  [SMALL_STATE(163)] = 3104,
  [SMALL_STATE(164)] = 3114,
  [SMALL_STATE(165)] = 3124,
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
  [SMALL_STATE(213)] = 3461,
  [SMALL_STATE(214)] = 3468,
  [SMALL_STATE(215)] = 3475,
  [SMALL_STATE(216)] = 3482,
  [SMALL_STATE(217)] = 3489,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 30),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, 0, 32),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, 0, 32),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 29),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 29),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 28),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 28),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(181),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(61),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(44),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 26),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 26),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 25),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 25),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 24),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 24),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 23),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 23),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 9),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 5, 0, 7),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 5, 0, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 16),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 16),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 20),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 20),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 13),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 19),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 19),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 22),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 22),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 21),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 21),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 17),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(49),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(83),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(83),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(95),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 15),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 15),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 11),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(208),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 14),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 14),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 10),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 5, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 6, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 5, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 4, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 1, 0, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 1, 0, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 7, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 7, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 5, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 6, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 5),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 5),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_desc, 2, 0, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 2, 0, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 6, 0, 34),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 12),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 33),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [539] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 18),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
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
