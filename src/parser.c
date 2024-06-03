#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 10
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 3
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
  sym_hom_name = 21,
  anon_sym_LBRACK_LBRACK = 22,
  anon_sym_RBRACK_RBRACK = 23,
  sym_comment = 24,
  anon_sym_DOT_DOT = 25,
  anon_sym_DOT_DOT_DOT = 26,
  anon_sym_DOT_DOT_DOT_DOT = 27,
  anon_sym_SQUOTE = 28,
  sym_id = 29,
  sym_string = 30,
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
  sym__hom_string = 59,
  sym__hom_inner_string = 60,
  sym_dots = 61,
  sym_namespace_prefix = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym__item_repeat1 = 64,
  aux_sym_defnclass_repeat1 = 65,
  aux_sym_defnclass_repeat2 = 66,
  aux_sym_defn_repeat1 = 67,
  aux_sym_defn_repeat2 = 68,
  aux_sym_defn_rule_repeat1 = 69,
  aux_sym_rule_line_repeat1 = 70,
  aux_sym_grammar_rule_repeat1 = 71,
  aux_sym_production_repeat1 = 72,
  aux_sym__id_desc_list1_repeat1 = 73,
  aux_sym_homomorphism_repeat1 = 74,
  aux_sym__hom_inner_repeat1 = 75,
  anon_alias_sym_defn_name = 76,
  anon_alias_sym_defnclass_name = 77,
  anon_alias_sym_element = 78,
  alias_sym_hom_body = 79,
  anon_alias_sym_id = 80,
  anon_alias_sym_production_modifier = 81,
  anon_alias_sym_production_name = 82,
  anon_alias_sym_q_id = 83,
  anon_alias_sym_rule_name = 84,
  anon_alias_sym_symbol = 85,
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 25,
  [35] = 35,
  [36] = 31,
  [37] = 37,
  [38] = 11,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 45,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 20,
  [54] = 21,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 50,
  [62] = 45,
  [63] = 63,
  [64] = 51,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 47,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 75,
  [80] = 80,
  [81] = 81,
  [82] = 76,
  [83] = 76,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 74,
  [88] = 78,
  [89] = 76,
  [90] = 84,
  [91] = 85,
  [92] = 86,
  [93] = 75,
  [94] = 78,
  [95] = 95,
  [96] = 96,
  [97] = 12,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 84,
  [102] = 85,
  [103] = 86,
  [104] = 74,
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
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 127,
  [139] = 139,
  [140] = 127,
  [141] = 135,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 142,
  [147] = 143,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 143,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 142,
  [158] = 158,
  [159] = 159,
  [160] = 76,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
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
  [183] = 76,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 177,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 163,
  [193] = 177,
  [194] = 189,
  [195] = 190,
  [196] = 170,
  [197] = 163,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 190,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 175,
  [208] = 178,
  [209] = 189,
  [210] = 210,
  [211] = 175,
  [212] = 178,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      ADVANCE_MAP(
        '%', 87,
        '\'', 94,
        ',', 79,
        '-', 12,
        '.', 13,
        '/', 14,
        ':', 16,
        '<', 15,
        'I', 20,
        '[', 21,
        ']', 22,
        'b', 49,
        'd', 31,
        'e', 36,
        'g', 41,
        'i', 39,
        'm', 32,
        '{', 50,
        '|', 67,
        '}', 51,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '%') ADVANCE(86);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ':') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == '{') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(86);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(86);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(86);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(86);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == '[') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == '{') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == '}') ADVANCE(82);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      ADVANCE_MAP(
        '%', 87,
        ':', 17,
        'd', 103,
        'e', 108,
        'g', 114,
        'i', 111,
        'm', 104,
        '{', 50,
        '|', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      ADVANCE_MAP(
        '%', 86,
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
          lookahead == ' ') SKIP(53);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_embed);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_defns);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(64);
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
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_hom_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'v') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'x') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 52},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
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
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 52},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 52},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 66},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 52},
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
    [sym_hom_string] = ACTIONS(1),
    [sym_hom_inner_string] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(174),
    [sym__item] = STATE(55),
    [sym_metavardefn] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(55),
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
    STATE(44), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
      sym_dash_line,
    STATE(10), 2,
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
    STATE(44), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
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
    STATE(44), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
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
    STATE(44), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
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
    STATE(44), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
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
    STATE(44), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(15), 2,
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
    STATE(44), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
      sym_dash_line,
    STATE(5), 2,
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
    STATE(44), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
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
    STATE(44), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
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
  [494] = 3,
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
  [515] = 3,
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
  [536] = 3,
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
  [557] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(58), 1,
      sym_rule_separator,
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(198), 1,
      sym_dash_line,
    STATE(22), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [594] = 7,
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
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(40), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(100), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [652] = 6,
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
    STATE(67), 2,
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
    STATE(61), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    STATE(22), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(123), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_id,
    STATE(121), 1,
      sym_id_desc,
    STATE(165), 1,
      sym__id_desc_list1,
    ACTIONS(131), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(138), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [825] = 10,
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
    STATE(31), 1,
      aux_sym_homomorphism_repeat1,
    STATE(80), 1,
      sym_hom_inner_block,
    STATE(81), 1,
      sym__hom_string,
    ACTIONS(144), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_element,
      sym_dots,
  [858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
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
  [881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
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
  [904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
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
  [927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(27), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(164), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(168), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [973] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(148), 1,
      sym_hom_string,
    ACTIONS(170), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(35), 1,
      aux_sym_homomorphism_repeat1,
    STATE(80), 1,
      sym_hom_inner_block,
    STATE(81), 1,
      sym__hom_string,
    ACTIONS(144), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_element,
      sym_dots,
  [1006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(174), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(172), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(178), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(176), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1052] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(148), 1,
      sym_hom_string,
    ACTIONS(180), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(36), 1,
      aux_sym_homomorphism_repeat1,
    STATE(80), 1,
      sym_hom_inner_block,
    STATE(81), 1,
      sym__hom_string,
    ACTIONS(144), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_element,
      sym_dots,
  [1085] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(184), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(190), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(193), 1,
      sym_hom_string,
    STATE(35), 1,
      aux_sym_homomorphism_repeat1,
    STATE(80), 1,
      sym_hom_inner_block,
    STATE(81), 1,
      sym__hom_string,
    ACTIONS(187), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_element,
      sym_dots,
  [1118] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(148), 1,
      sym_hom_string,
    ACTIONS(196), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(35), 1,
      aux_sym_homomorphism_repeat1,
    STATE(80), 1,
      sym_hom_inner_block,
    STATE(81), 1,
      sym__hom_string,
    ACTIONS(144), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_element,
      sym_dots,
  [1151] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_id,
    STATE(121), 1,
      sym_id_desc,
    STATE(165), 1,
      sym__id_desc_list1,
    ACTIONS(200), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(23), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(38), 2,
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
  [1201] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_id,
    STATE(121), 1,
      sym_id_desc,
    STATE(165), 1,
      sym__id_desc_list1,
    ACTIONS(209), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(37), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(42), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(94), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(42), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(213), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(211), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    STATE(42), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(220), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1294] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COLON_COLON,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
    ACTIONS(228), 1,
      sym_string,
    STATE(79), 1,
      sym_dots,
    STATE(57), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(226), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1319] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(14), 1,
      sym_rule_line,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1346] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LT_SLASH,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      sym_string,
    STATE(93), 1,
      sym_dots,
    STATE(51), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(234), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1371] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LT_SLASH,
    ACTIONS(242), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(244), 1,
      sym_hom_inner_string,
    STATE(123), 1,
      sym_dots,
    STATE(166), 1,
      sym__hom_inner,
    ACTIONS(240), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1398] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      sym_string,
    ACTIONS(246), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym_dots,
    STATE(45), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(234), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1423] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      sym_string,
    ACTIONS(248), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym_dots,
    STATE(51), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(234), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1448] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      sym_string,
    ACTIONS(250), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym_dots,
    STATE(48), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(234), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1473] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1500] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    ACTIONS(259), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      sym_string,
    STATE(93), 1,
      sym_dots,
    STATE(51), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(261), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(267), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1544] = 3,
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
  [1561] = 3,
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
  [1578] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(60), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1603] = 8,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(273), 1,
      anon_sym_LT_SLASH,
    ACTIONS(279), 1,
      sym_string,
    STATE(56), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    ACTIONS(276), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1630] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
    ACTIONS(228), 1,
      sym_string,
    ACTIONS(282), 1,
      anon_sym_COLON_COLON,
    STATE(79), 1,
      sym_dots,
    STATE(64), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(226), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1655] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(13), 1,
      sym_rule_line,
    STATE(50), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(284), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1701] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      anon_sym_grammar,
    ACTIONS(291), 1,
      anon_sym_embed,
    ACTIONS(294), 1,
      anon_sym_defns,
    ACTIONS(297), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(60), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1726] = 8,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LF,
    STATE(56), 1,
      aux_sym_rule_line_repeat1,
    STATE(75), 1,
      sym_dots,
    STATE(100), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1753] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      sym_string,
    ACTIONS(302), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym_dots,
    STATE(51), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(234), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(304), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1795] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COLON_COLON,
    ACTIONS(308), 1,
      anon_sym_LT_SLASH,
    ACTIONS(314), 1,
      sym_string,
    STATE(79), 1,
      sym_dots,
    STATE(64), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(311), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_defn,
    STATE(65), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(317), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1839] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
    ACTIONS(228), 1,
      sym_string,
    ACTIONS(322), 1,
      anon_sym_COLON_COLON,
    STATE(79), 1,
      sym_dots,
    STATE(70), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(226), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(65), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(52), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(326), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1902] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      sym_string,
    ACTIONS(328), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym_dots,
    STATE(62), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(234), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1927] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
    ACTIONS(228), 1,
      sym_string,
    ACTIONS(330), 1,
      anon_sym_COLON_COLON,
    STATE(79), 1,
      sym_dots,
    STATE(64), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(226), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(65), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(332), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1971] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(334), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(336), 1,
      sym_hom_inner_string,
    STATE(114), 1,
      sym_dots,
    ACTIONS(240), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_hom_inner_string,
    ACTIONS(340), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
    ACTIONS(338), 3,
      anon_sym_SLASH_SLASH,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2027] = 3,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2041] = 3,
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
  [2055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(355), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(361), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(365), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2121] = 3,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(353), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2147] = 3,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2161] = 3,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2175] = 3,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(379), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2189] = 3,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(345), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2203] = 3,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(359), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(385), 1,
      anon_sym_COLON_COLON,
    ACTIONS(387), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(99), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2319] = 3,
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
  [2333] = 3,
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
  [2347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(393), 1,
      anon_sym_COLON_COLON,
    ACTIONS(395), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2365] = 3,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(399), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2438] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SLASH_GT,
    ACTIONS(407), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(185), 1,
      sym_dots,
    ACTIONS(405), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
    ACTIONS(411), 1,
      sym_id,
    STATE(107), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_COLON_COLON,
    ACTIONS(416), 1,
      sym_id,
    STATE(110), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_hom_inner_string,
    ACTIONS(418), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_id,
    ACTIONS(420), 1,
      anon_sym_COLON_COLON,
    STATE(107), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_hom_inner_string,
    ACTIONS(422), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_id,
    ACTIONS(424), 1,
      anon_sym_COLON_COLON,
    STATE(120), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(428), 1,
      sym_hom_inner_string,
    STATE(122), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(430), 1,
      sym_hom_inner_string,
    STATE(109), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(96), 1,
      sym_embed,
    STATE(59), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COLON_COLON,
    ACTIONS(434), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym__id_desc_list1_repeat1,
  [2597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COLON_COLON,
    ACTIONS(440), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym__id_desc_list1_repeat1,
  [2613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(445), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(447), 1,
      anon_sym_by,
    STATE(125), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_id,
    ACTIONS(449), 1,
      anon_sym_COLON_COLON,
    STATE(107), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_COLON_COLON,
    ACTIONS(453), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(116), 1,
      aux_sym__id_desc_list1_repeat1,
  [2671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_hom_inner_string,
    ACTIONS(455), 1,
      anon_sym_SLASH_SLASH,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(457), 1,
      sym_hom_inner_string,
    STATE(111), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(459), 1,
      anon_sym_by,
    STATE(118), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(461), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_id,
    STATE(96), 1,
      sym_defnclass,
    STATE(179), 1,
      sym_defnclass_name,
  [2740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_id,
    ACTIONS(467), 1,
      sym_string,
    STATE(197), 1,
      sym_comprehension_bound,
  [2753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      sym_id,
    STATE(124), 1,
      sym_namespace_prefix,
  [2766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COLON_COLON,
    ACTIONS(440), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_id,
    STATE(121), 1,
      sym_id_desc,
    STATE(162), 1,
      sym__id_desc_list1,
  [2817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      sym_id,
    STATE(191), 1,
      sym_namespace_prefix,
  [2830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_id,
    ACTIONS(481), 1,
      sym_string,
    STATE(177), 1,
      sym_comprehension_bound,
  [2843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      sym_id,
    STATE(119), 1,
      sym_namespace_prefix,
  [2856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_id,
    ACTIONS(483), 1,
      sym_string,
    STATE(193), 1,
      sym_comprehension_bound,
  [2869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_id,
    ACTIONS(485), 1,
      sym_string,
    STATE(192), 1,
      sym_comprehension_bound,
  [2882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      sym_id,
    STATE(210), 1,
      sym_namespace_prefix,
  [2895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_id,
    ACTIONS(487), 1,
      sym_string,
    STATE(163), 1,
      sym_comprehension_bound,
  [2908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_id,
    ACTIONS(489), 1,
      sym_string,
    STATE(188), 1,
      sym_comprehension_bound,
  [2921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(189), 1,
      sym_comprehension_bound,
  [2931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(190), 1,
      sym_comprehension_bound,
  [2941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(28), 1,
      sym_production_name,
  [2951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_id,
    STATE(130), 1,
      sym_id_desc,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(194), 1,
      sym_comprehension_bound,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(195), 1,
      sym_comprehension_bound,
  [2981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(171), 1,
      sym_comprehension_bound,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(33), 1,
      sym_production_name,
  [3001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_COLON_COLON,
      sym_id,
  [3009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_id,
    STATE(169), 1,
      sym_defn_name,
  [3019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_id,
    STATE(164), 1,
      sym_rule_name,
  [3029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(203), 1,
      sym_comprehension_bound,
  [3039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(205), 1,
      sym_comprehension_bound,
  [3049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_SLASH_GT,
    ACTIONS(503), 1,
      anon_sym_IN,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_SQUOTE,
    ACTIONS(507), 1,
      sym_id,
  [3069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(209), 1,
      sym_comprehension_bound,
  [3079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_id,
    STATE(186), 1,
      sym_defn_name,
  [3089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(24), 1,
      sym_production_name,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 2,
      sym_hom_inner_string,
      anon_sym_RBRACK_RBRACK,
  [3107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_id,
    STATE(29), 1,
      sym_production_name,
  [3117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COLON_COLON_EQ,
  [3124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SLASH_GT,
  [3131] = 2,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LF,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_COLON_COLON,
  [3145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RBRACK_RBRACK,
  [3152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COLON_COLON,
  [3166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_COLON_COLON,
  [3173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_hom_name,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_SLASH_GT,
  [3187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACK_RBRACK,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_id,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
  [3208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SLASH_SLASH,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COLON_COLON,
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SLASH_GT,
  [3229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_SLASH_SLASH,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COLON_COLON,
  [3243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_COLON_COLON,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COLON_COLON,
  [3257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COLON_COLON,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_id,
  [3271] = 2,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LF,
  [3278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_id,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON_COLON,
  [3292] = 2,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LF,
  [3299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH_GT,
  [3306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SLASH_GT,
  [3313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SLASH_GT,
  [3320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COLON_COLON_EQ,
  [3327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
  [3334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SLASH_GT,
  [3341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SLASH_GT,
  [3348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SLASH_GT,
  [3355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      sym_hom_name,
  [3362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SLASH_GT,
  [3369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COLON_COLON,
  [3376] = 2,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(581), 1,
      aux_sym_dash_line_token1,
  [3383] = 2,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LF,
  [3390] = 2,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LF,
  [3397] = 2,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LF,
  [3404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SLASH_GT,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_SLASH_GT,
  [3418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SLASH_GT,
  [3425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACK_RBRACK,
  [3432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SLASH_SLASH,
  [3446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SLASH_GT,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COLON_COLON_EQ,
  [3460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SLASH_SLASH,
  [3467] = 2,
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
  [SMALL_STATE(13)] = 515,
  [SMALL_STATE(14)] = 536,
  [SMALL_STATE(15)] = 557,
  [SMALL_STATE(16)] = 594,
  [SMALL_STATE(17)] = 623,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 678,
  [SMALL_STATE(20)] = 704,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 744,
  [SMALL_STATE(23)] = 775,
  [SMALL_STATE(24)] = 802,
  [SMALL_STATE(25)] = 825,
  [SMALL_STATE(26)] = 858,
  [SMALL_STATE(27)] = 881,
  [SMALL_STATE(28)] = 904,
  [SMALL_STATE(29)] = 927,
  [SMALL_STATE(30)] = 950,
  [SMALL_STATE(31)] = 973,
  [SMALL_STATE(32)] = 1006,
  [SMALL_STATE(33)] = 1029,
  [SMALL_STATE(34)] = 1052,
  [SMALL_STATE(35)] = 1085,
  [SMALL_STATE(36)] = 1118,
  [SMALL_STATE(37)] = 1151,
  [SMALL_STATE(38)] = 1178,
  [SMALL_STATE(39)] = 1201,
  [SMALL_STATE(40)] = 1228,
  [SMALL_STATE(41)] = 1250,
  [SMALL_STATE(42)] = 1272,
  [SMALL_STATE(43)] = 1294,
  [SMALL_STATE(44)] = 1319,
  [SMALL_STATE(45)] = 1346,
  [SMALL_STATE(46)] = 1371,
  [SMALL_STATE(47)] = 1398,
  [SMALL_STATE(48)] = 1423,
  [SMALL_STATE(49)] = 1448,
  [SMALL_STATE(50)] = 1473,
  [SMALL_STATE(51)] = 1500,
  [SMALL_STATE(52)] = 1525,
  [SMALL_STATE(53)] = 1544,
  [SMALL_STATE(54)] = 1561,
  [SMALL_STATE(55)] = 1578,
  [SMALL_STATE(56)] = 1603,
  [SMALL_STATE(57)] = 1630,
  [SMALL_STATE(58)] = 1655,
  [SMALL_STATE(59)] = 1682,
  [SMALL_STATE(60)] = 1701,
  [SMALL_STATE(61)] = 1726,
  [SMALL_STATE(62)] = 1753,
  [SMALL_STATE(63)] = 1778,
  [SMALL_STATE(64)] = 1795,
  [SMALL_STATE(65)] = 1820,
  [SMALL_STATE(66)] = 1839,
  [SMALL_STATE(67)] = 1864,
  [SMALL_STATE(68)] = 1883,
  [SMALL_STATE(69)] = 1902,
  [SMALL_STATE(70)] = 1927,
  [SMALL_STATE(71)] = 1952,
  [SMALL_STATE(72)] = 1971,
  [SMALL_STATE(73)] = 1995,
  [SMALL_STATE(74)] = 2015,
  [SMALL_STATE(75)] = 2027,
  [SMALL_STATE(76)] = 2041,
  [SMALL_STATE(77)] = 2055,
  [SMALL_STATE(78)] = 2069,
  [SMALL_STATE(79)] = 2081,
  [SMALL_STATE(80)] = 2093,
  [SMALL_STATE(81)] = 2107,
  [SMALL_STATE(82)] = 2121,
  [SMALL_STATE(83)] = 2135,
  [SMALL_STATE(84)] = 2147,
  [SMALL_STATE(85)] = 2161,
  [SMALL_STATE(86)] = 2175,
  [SMALL_STATE(87)] = 2189,
  [SMALL_STATE(88)] = 2203,
  [SMALL_STATE(89)] = 2217,
  [SMALL_STATE(90)] = 2229,
  [SMALL_STATE(91)] = 2241,
  [SMALL_STATE(92)] = 2253,
  [SMALL_STATE(93)] = 2265,
  [SMALL_STATE(94)] = 2277,
  [SMALL_STATE(95)] = 2289,
  [SMALL_STATE(96)] = 2307,
  [SMALL_STATE(97)] = 2319,
  [SMALL_STATE(98)] = 2333,
  [SMALL_STATE(99)] = 2347,
  [SMALL_STATE(100)] = 2365,
  [SMALL_STATE(101)] = 2379,
  [SMALL_STATE(102)] = 2391,
  [SMALL_STATE(103)] = 2403,
  [SMALL_STATE(104)] = 2415,
  [SMALL_STATE(105)] = 2427,
  [SMALL_STATE(106)] = 2438,
  [SMALL_STATE(107)] = 2455,
  [SMALL_STATE(108)] = 2469,
  [SMALL_STATE(109)] = 2483,
  [SMALL_STATE(110)] = 2497,
  [SMALL_STATE(111)] = 2511,
  [SMALL_STATE(112)] = 2525,
  [SMALL_STATE(113)] = 2539,
  [SMALL_STATE(114)] = 2553,
  [SMALL_STATE(115)] = 2567,
  [SMALL_STATE(116)] = 2581,
  [SMALL_STATE(117)] = 2597,
  [SMALL_STATE(118)] = 2613,
  [SMALL_STATE(119)] = 2627,
  [SMALL_STATE(120)] = 2641,
  [SMALL_STATE(121)] = 2655,
  [SMALL_STATE(122)] = 2671,
  [SMALL_STATE(123)] = 2685,
  [SMALL_STATE(124)] = 2699,
  [SMALL_STATE(125)] = 2713,
  [SMALL_STATE(126)] = 2727,
  [SMALL_STATE(127)] = 2740,
  [SMALL_STATE(128)] = 2753,
  [SMALL_STATE(129)] = 2766,
  [SMALL_STATE(130)] = 2775,
  [SMALL_STATE(131)] = 2786,
  [SMALL_STATE(132)] = 2795,
  [SMALL_STATE(133)] = 2804,
  [SMALL_STATE(134)] = 2817,
  [SMALL_STATE(135)] = 2830,
  [SMALL_STATE(136)] = 2843,
  [SMALL_STATE(137)] = 2856,
  [SMALL_STATE(138)] = 2869,
  [SMALL_STATE(139)] = 2882,
  [SMALL_STATE(140)] = 2895,
  [SMALL_STATE(141)] = 2908,
  [SMALL_STATE(142)] = 2921,
  [SMALL_STATE(143)] = 2931,
  [SMALL_STATE(144)] = 2941,
  [SMALL_STATE(145)] = 2951,
  [SMALL_STATE(146)] = 2961,
  [SMALL_STATE(147)] = 2971,
  [SMALL_STATE(148)] = 2981,
  [SMALL_STATE(149)] = 2991,
  [SMALL_STATE(150)] = 3001,
  [SMALL_STATE(151)] = 3009,
  [SMALL_STATE(152)] = 3019,
  [SMALL_STATE(153)] = 3029,
  [SMALL_STATE(154)] = 3039,
  [SMALL_STATE(155)] = 3049,
  [SMALL_STATE(156)] = 3059,
  [SMALL_STATE(157)] = 3069,
  [SMALL_STATE(158)] = 3079,
  [SMALL_STATE(159)] = 3089,
  [SMALL_STATE(160)] = 3099,
  [SMALL_STATE(161)] = 3107,
  [SMALL_STATE(162)] = 3117,
  [SMALL_STATE(163)] = 3124,
  [SMALL_STATE(164)] = 3131,
  [SMALL_STATE(165)] = 3138,
  [SMALL_STATE(166)] = 3145,
  [SMALL_STATE(167)] = 3152,
  [SMALL_STATE(168)] = 3159,
  [SMALL_STATE(169)] = 3166,
  [SMALL_STATE(170)] = 3173,
  [SMALL_STATE(171)] = 3180,
  [SMALL_STATE(172)] = 3187,
  [SMALL_STATE(173)] = 3194,
  [SMALL_STATE(174)] = 3201,
  [SMALL_STATE(175)] = 3208,
  [SMALL_STATE(176)] = 3215,
  [SMALL_STATE(177)] = 3222,
  [SMALL_STATE(178)] = 3229,
  [SMALL_STATE(179)] = 3236,
  [SMALL_STATE(180)] = 3243,
  [SMALL_STATE(181)] = 3250,
  [SMALL_STATE(182)] = 3257,
  [SMALL_STATE(183)] = 3264,
  [SMALL_STATE(184)] = 3271,
  [SMALL_STATE(185)] = 3278,
  [SMALL_STATE(186)] = 3285,
  [SMALL_STATE(187)] = 3292,
  [SMALL_STATE(188)] = 3299,
  [SMALL_STATE(189)] = 3306,
  [SMALL_STATE(190)] = 3313,
  [SMALL_STATE(191)] = 3320,
  [SMALL_STATE(192)] = 3327,
  [SMALL_STATE(193)] = 3334,
  [SMALL_STATE(194)] = 3341,
  [SMALL_STATE(195)] = 3348,
  [SMALL_STATE(196)] = 3355,
  [SMALL_STATE(197)] = 3362,
  [SMALL_STATE(198)] = 3369,
  [SMALL_STATE(199)] = 3376,
  [SMALL_STATE(200)] = 3383,
  [SMALL_STATE(201)] = 3390,
  [SMALL_STATE(202)] = 3397,
  [SMALL_STATE(203)] = 3404,
  [SMALL_STATE(204)] = 3411,
  [SMALL_STATE(205)] = 3418,
  [SMALL_STATE(206)] = 3425,
  [SMALL_STATE(207)] = 3432,
  [SMALL_STATE(208)] = 3439,
  [SMALL_STATE(209)] = 3446,
  [SMALL_STATE(210)] = 3453,
  [SMALL_STATE(211)] = 3460,
  [SMALL_STATE(212)] = 3467,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 26),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 37),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 37),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 34),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 34),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 33),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 33),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 32),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 32),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(199),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(47),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(82),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(88),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 30),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 30),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 29),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 29),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 28),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 28),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 36),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 36),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 31),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 31),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 11),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 9),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 7),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 3, 0, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 3, 0, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 24),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 24),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 23),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 22),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 22),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 21),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 21),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 20),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 20),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 19),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 19),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 25),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 25),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 17),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 17),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(46),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(76),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(76),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(81),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 16),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 16),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(66),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 12),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 14),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 13),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 5),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 6),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 13),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 27),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 27),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 4, 0, 38),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 10),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 15),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [533] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 18),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 35),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_hom_string = 0,
  ts_external_token_hom_inner_string = 1,
  ts_external_token_error_sentinel = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_hom_string] = sym_hom_string,
  [ts_external_token_hom_inner_string] = sym_hom_inner_string,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_hom_string] = true,
    [ts_external_token_hom_inner_string] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_hom_string] = true,
  },
  [3] = {
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
