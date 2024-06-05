#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 10
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 5
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
  aux_sym_homomorphism_token1 = 19,
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
  sym_element = 51,
  sym_metavardefn = 52,
  sym__id_desc_list1 = 53,
  sym_id_desc = 54,
  sym_comprehension_bound = 55,
  sym_embed = 56,
  sym_homomorphism = 57,
  sym__hom_element = 58,
  sym_hom_inner_block = 59,
  sym__hom_inner = 60,
  sym__line_cont = 61,
  sym__line_end = 62,
  sym__hom_string = 63,
  sym__hom_inner_string = 64,
  sym_dots = 65,
  sym_namespace_prefix = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym__item_repeat1 = 68,
  aux_sym_defnclass_repeat1 = 69,
  aux_sym_defnclass_repeat2 = 70,
  aux_sym_defn_repeat1 = 71,
  aux_sym_defn_repeat2 = 72,
  aux_sym_defn_rule_repeat1 = 73,
  aux_sym_rule_line_repeat1 = 74,
  aux_sym_grammar_rule_repeat1 = 75,
  aux_sym_production_repeat1 = 76,
  aux_sym__id_desc_list1_repeat1 = 77,
  aux_sym_homomorphism_repeat1 = 78,
  aux_sym__hom_inner_repeat1 = 79,
  anon_alias_sym_defn_name = 80,
  anon_alias_sym_defnclass_name = 81,
  anon_alias_sym_element = 82,
  alias_sym_hom_body = 83,
  anon_alias_sym_id = 84,
  anon_alias_sym_production_modifier = 85,
  anon_alias_sym_production_name = 86,
  anon_alias_sym_q_id = 87,
  anon_alias_sym_rule_name = 88,
  anon_alias_sym_symbol = 89,
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
  [aux_sym_homomorphism_token1] = "_hom_name_space",
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
  [sym_line_cont] = "line_cont",
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
  [sym__line_cont] = "_line_cont",
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
  [aux_sym_homomorphism_token1] = aux_sym_homomorphism_token1,
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
  [sym_line_cont] = sym_line_cont,
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
  [sym__line_cont] = sym__line_cont,
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
  [7] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 6},
  [10] = {.index = 15, .length = 4},
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
  [35] = {.index = 74, .length = 3},
  [36] = {.index = 77, .length = 5},
  [38] = {.index = 82, .length = 2},
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
    [0] = anon_alias_sym_defnclass_name,
  },
  [2] = {
    [0] = anon_alias_sym_id,
  },
  [8] = {
    [1] = anon_alias_sym_q_id,
  },
  [9] = {
    [3] = alias_sym_hom_body,
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
  [37] = {
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
  [26] = 11,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 21,
  [53] = 19,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 51,
  [62] = 51,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 46,
  [70] = 67,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 75,
  [78] = 78,
  [79] = 14,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 74,
  [86] = 86,
  [87] = 87,
  [88] = 74,
  [89] = 83,
  [90] = 87,
  [91] = 78,
  [92] = 87,
  [93] = 93,
  [94] = 93,
  [95] = 75,
  [96] = 74,
  [97] = 84,
  [98] = 98,
  [99] = 78,
  [100] = 84,
  [101] = 101,
  [102] = 93,
  [103] = 83,
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
  [134] = 129,
  [135] = 131,
  [136] = 129,
  [137] = 137,
  [138] = 131,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 142,
  [149] = 149,
  [150] = 146,
  [151] = 142,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 146,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 74,
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
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 74,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 175,
  [192] = 192,
  [193] = 193,
  [194] = 185,
  [195] = 175,
  [196] = 170,
  [197] = 193,
  [198] = 185,
  [199] = 199,
  [200] = 200,
  [201] = 199,
  [202] = 193,
  [203] = 170,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 176,
  [212] = 179,
  [213] = 208,
  [214] = 214,
  [215] = 176,
  [216] = 179,
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
        ',', 78,
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
        '|', 66,
        '}', 51,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ':') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == '{') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
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
      if (lookahead == '-') ADVANCE(64);
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
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(79);
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
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(75);
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
      if (lookahead == '{') ADVANCE(80);
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
        '|', 66,
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
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_dash_line_token1);
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_homomorphism_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
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
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(76);
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
      if (lookahead == '-') ADVANCE(64);
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
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(70);
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
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(77);
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
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 8, .external_lex_state = 3},
  [41] = {.lex_state = 8, .external_lex_state = 3},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 52},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 8, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 4},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 52},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 8, .external_lex_state = 3},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 8, .external_lex_state = 3},
  [78] = {.lex_state = 8, .external_lex_state = 3},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 8, .external_lex_state = 3},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 8, .external_lex_state = 3},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 8, .external_lex_state = 3},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 8, .external_lex_state = 3},
  [103] = {.lex_state = 8, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0, .external_lex_state = 4},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 5},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0, .external_lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 52},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 52},
  [178] = {.lex_state = 52},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 52},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 52},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 65},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 52},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0, .external_lex_state = 5},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 52},
  [210] = {.lex_state = 52},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 52},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
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
    [sym_line_cont] = ACTIONS(1),
    [sym_line_end] = ACTIONS(1),
    [sym_hom_string] = ACTIONS(1),
    [sym_hom_inner_string] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(182),
    [sym__item] = STATE(58),
    [sym_metavardefn] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(58),
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
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(5), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(7), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
    ACTIONS(51), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(54), 1,
      anon_sym_LT_SLASH,
    ACTIONS(60), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(8), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(49), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(57), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(47), 4,
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
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(4), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
      aux_sym_rule_line_repeat1,
    STATE(48), 1,
      sym_rule_separator,
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(2), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
  [494] = 11,
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
    STATE(65), 1,
      sym_rule_separator,
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(157), 1,
      sym_dash_line,
    STATE(28), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [531] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_PIPE,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(43), 2,
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
  [560] = 3,
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
  [581] = 7,
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
    ACTIONS(92), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [610] = 3,
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
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(66), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [678] = 3,
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
  [698] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(59), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
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
  [744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
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
  [767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
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
  [790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 2,
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
  [813] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(138), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(141), 1,
      sym_hom_string,
    STATE(25), 1,
      aux_sym_homomorphism_repeat1,
    STATE(101), 1,
      sym_hom_inner_block,
    STATE(104), 1,
      sym__hom_string,
    ACTIONS(135), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 2,
      sym__hom_element,
      sym_dots,
  [846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
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
  [869] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_id,
    STATE(112), 1,
      sym_id_desc,
    STATE(214), 1,
      sym__id_desc_list1,
    ACTIONS(149), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(27), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [896] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(156), 1,
      anon_sym_LT_SLASH,
    ACTIONS(162), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_rule_line_repeat1,
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    STATE(28), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(159), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [927] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(167), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(173), 1,
      sym_hom_string,
    STATE(25), 1,
      aux_sym_homomorphism_repeat1,
    STATE(101), 1,
      sym_hom_inner_block,
    STATE(104), 1,
      sym__hom_string,
    ACTIONS(169), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 2,
      sym__hom_element,
      sym_dots,
  [960] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(173), 1,
      sym_hom_string,
    ACTIONS(175), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(25), 1,
      aux_sym_homomorphism_repeat1,
    STATE(101), 1,
      sym_hom_inner_block,
    STATE(104), 1,
      sym__hom_string,
    ACTIONS(169), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 2,
      sym__hom_element,
      sym_dots,
  [993] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(173), 1,
      sym_hom_string,
    ACTIONS(177), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(30), 1,
      aux_sym_homomorphism_repeat1,
    STATE(101), 1,
      sym_hom_inner_block,
    STATE(104), 1,
      sym__hom_string,
    ACTIONS(169), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 2,
      sym__hom_element,
      sym_dots,
  [1026] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(181), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(185), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1072] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(173), 1,
      sym_hom_string,
    ACTIONS(187), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(29), 1,
      aux_sym_homomorphism_repeat1,
    STATE(101), 1,
      sym_hom_inner_block,
    STATE(104), 1,
      sym__hom_string,
    ACTIONS(169), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 2,
      sym__hom_element,
      sym_dots,
  [1105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(22), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(191), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(195), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1151] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_id,
    STATE(112), 1,
      sym_id_desc,
    STATE(214), 1,
      sym__id_desc_list1,
    ACTIONS(199), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(27), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1178] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_id,
    STATE(112), 1,
      sym_id_desc,
    STATE(214), 1,
      sym__id_desc_list1,
    ACTIONS(205), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(37), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1205] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(36), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(209), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1228] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(211), 1,
      sym_line_end,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(78), 1,
      sym_dots,
    STATE(79), 1,
      sym__line_end,
    STATE(82), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1258] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    ACTIONS(213), 1,
      sym_line_end,
    STATE(14), 1,
      sym__line_end,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1288] = 5,
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
  [1310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_PIPE,
    STATE(42), 2,
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
    STATE(42), 2,
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
  [1354] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      anon_sym_grammar,
    ACTIONS(231), 1,
      anon_sym_embed,
    ACTIONS(234), 1,
      anon_sym_defns,
    ACTIONS(237), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(45), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1379] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LT_SLASH,
    ACTIONS(243), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(248), 1,
      sym_string,
    STATE(99), 1,
      sym_dots,
    STATE(46), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(245), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(60), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1423] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(16), 1,
      sym_rule_line,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1469] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COLON_COLON,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      sym_string,
    STATE(91), 1,
      sym_dots,
    STATE(64), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(259), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1494] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT_SLASH,
    ACTIONS(265), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      sym_string,
    STATE(99), 1,
      sym_dots,
    STATE(68), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(267), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1519] = 3,
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
  [1536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 3,
      anon_sym_metavar,
      anon_sym_indexvar,
      sym_id,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1553] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(271), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      sym_dots,
    STATE(69), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(259), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1578] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LT_SLASH,
    ACTIONS(279), 1,
      sym_string,
    ACTIONS(282), 1,
      sym_line_end,
    STATE(55), 1,
      aux_sym_rule_line_repeat1,
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    ACTIONS(276), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1605] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_LT_SLASH,
    ACTIONS(288), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(290), 1,
      sym_hom_inner_string,
    STATE(123), 1,
      sym_dots,
    STATE(186), 1,
      sym__hom_inner,
    ACTIONS(286), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [1632] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(292), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      sym_dots,
    STATE(54), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(259), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1657] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(45), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(71), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(296), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1720] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT_SLASH,
    ACTIONS(269), 1,
      sym_string,
    ACTIONS(300), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym_dots,
    STATE(70), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(267), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1745] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT_SLASH,
    ACTIONS(269), 1,
      sym_string,
    ACTIONS(302), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym_dots,
    STATE(67), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(267), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1770] = 3,
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
  [1787] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      sym_string,
    ACTIONS(308), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      sym_dots,
    STATE(69), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(259), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1812] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(17), 1,
      sym_rule_line,
    STATE(41), 1,
      aux_sym_rule_line_repeat1,
    STATE(78), 1,
      sym_dots,
    STATE(82), 1,
      sym_element,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_defn,
    STATE(71), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(310), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1858] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT_SLASH,
    ACTIONS(269), 1,
      sym_string,
    ACTIONS(312), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym_dots,
    STATE(46), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(267), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1883] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT_SLASH,
    ACTIONS(269), 1,
      sym_string,
    ACTIONS(314), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym_dots,
    STATE(46), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(267), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1908] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COLON_COLON,
    ACTIONS(316), 1,
      anon_sym_LT_SLASH,
    ACTIONS(322), 1,
      sym_string,
    STATE(91), 1,
      sym_dots,
    STATE(69), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(319), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1933] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LT_SLASH,
    ACTIONS(269), 1,
      sym_string,
    ACTIONS(325), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym_dots,
    STATE(46), 2,
      sym_element,
      aux_sym_defn_repeat1,
    ACTIONS(267), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
  [1958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_defn,
    STATE(71), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(327), 6,
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
    ACTIONS(288), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(339), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(341), 1,
      sym_hom_inner_string,
    STATE(116), 1,
      sym_dots,
    ACTIONS(286), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_line_end,
    ACTIONS(343), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      anon_sym_COLON_COLON,
    ACTIONS(351), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(81), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_line_end,
    ACTIONS(347), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_line_end,
    ACTIONS(355), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2093] = 3,
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
  [2107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_line_end,
    ACTIONS(363), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_line_end,
    ACTIONS(369), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2189] = 3,
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
  [2203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_line_end,
    ACTIONS(377), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(345), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2339] = 3,
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
  [2353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2377] = 3,
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
  [2391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_line_end,
    ACTIONS(381), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_line_end,
    ACTIONS(367), 5,
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
  [2433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2444] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_SLASH_GT,
    ACTIONS(405), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(206), 1,
      sym_dots,
    ACTIONS(403), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_hom_inner_string,
    ACTIONS(407), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COLON_COLON,
    ACTIONS(411), 1,
      sym_id,
    STATE(110), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_id,
    ACTIONS(413), 1,
      anon_sym_COLON_COLON,
    STATE(113), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_id,
    ACTIONS(415), 1,
      anon_sym_COLON_COLON,
    STATE(114), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(80), 1,
      sym_embed,
    STATE(49), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_COLON_COLON,
    ACTIONS(419), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym__id_desc_list1_repeat1,
  [2547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_id,
    ACTIONS(423), 1,
      anon_sym_COLON_COLON,
    STATE(114), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    ACTIONS(427), 1,
      sym_id,
    STATE(114), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_hom_inner_string,
    ACTIONS(430), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(432), 1,
      sym_hom_inner_string,
    STATE(119), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(434), 1,
      anon_sym_by,
    STATE(121), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_COLON_COLON,
    ACTIONS(438), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(120), 1,
      aux_sym__id_desc_list1_repeat1,
  [2633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_hom_inner_string,
    ACTIONS(440), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(72), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym__id_desc_list1_repeat1,
  [2663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(449), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(451), 1,
      anon_sym_by,
    STATE(125), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(453), 1,
      sym_hom_inner_string,
    STATE(107), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(457), 1,
      sym_hom_inner_string,
    STATE(115), 2,
      sym__hom_inner_string,
      aux_sym__hom_inner_repeat1,
  [2719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(459), 1,
      anon_sym_by,
    STATE(11), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [2744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_id,
    STATE(189), 1,
      sym_namespace_prefix,
  [2766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(469), 1,
      sym_string,
    STATE(191), 1,
      sym_comprehension_bound,
  [2779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(473), 1,
      sym_string,
    STATE(170), 1,
      sym_comprehension_bound,
  [2801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_id,
    STATE(190), 1,
      sym_namespace_prefix,
  [2814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_id,
    STATE(122), 1,
      sym_namespace_prefix,
  [2827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(475), 1,
      sym_string,
    STATE(195), 1,
      sym_comprehension_bound,
  [2840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(477), 1,
      sym_string,
    STATE(196), 1,
      sym_comprehension_bound,
  [2853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(479), 1,
      sym_string,
    STATE(175), 1,
      sym_comprehension_bound,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_id,
    ACTIONS(483), 1,
      sym_string,
    STATE(203), 1,
      sym_comprehension_bound,
  [2888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      sym_id,
    STATE(117), 1,
      sym_namespace_prefix,
  [2901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_id,
    STATE(112), 1,
      sym_id_desc,
    STATE(205), 1,
      sym__id_desc_list1,
  [2914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_id,
    STATE(80), 1,
      sym_defnclass,
    STATE(209), 1,
      sym_defnclass_name,
  [2927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_id,
    STATE(202), 1,
      sym_comprehension_bound,
  [2937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(39), 1,
      sym_production_name,
  [2947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_line_end,
    STATE(6), 1,
      sym__line_end,
  [2957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(33), 1,
      sym_production_name,
  [2967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_id,
    STATE(198), 1,
      sym_comprehension_bound,
  [2977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_line_end,
    STATE(3), 1,
      sym__line_end,
  [2987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_id,
    STATE(197), 1,
      sym_comprehension_bound,
  [2997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_id,
    STATE(126), 1,
      sym_id_desc,
  [3007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_id,
    STATE(194), 1,
      sym_comprehension_bound,
  [3017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_id,
    STATE(193), 1,
      sym_comprehension_bound,
  [3027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_line_end,
    STATE(10), 1,
      sym__line_end,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_line_end,
    STATE(9), 1,
      sym__line_end,
  [3047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_SQUOTE,
    ACTIONS(503), 1,
      sym_id,
  [3057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_id,
    STATE(180), 1,
      sym_comprehension_bound,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_id,
    STATE(185), 1,
      sym_comprehension_bound,
  [3077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym_line_cont,
    STATE(204), 1,
      sym__line_cont,
  [3087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(24), 1,
      sym_production_name,
  [3097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_line_cont,
    STATE(162), 1,
      sym__line_cont,
  [3107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_COLON_COLON,
      sym_id,
  [3115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SLASH_GT,
    ACTIONS(513), 1,
      anon_sym_IN,
  [3125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_id,
    STATE(164), 1,
      sym_rule_name,
  [3135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_id,
    STATE(172), 1,
      sym_comprehension_bound,
  [3145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_line_end,
    STATE(105), 1,
      sym__line_end,
  [3155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_id,
    STATE(192), 1,
      sym_defn_name,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_id,
    STATE(178), 1,
      sym_defn_name,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_id,
    STATE(35), 1,
      sym_production_name,
  [3185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 2,
      sym_hom_inner_string,
      anon_sym_RBRACK_RBRACK,
  [3193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RBRACK_RBRACK,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_SLASH_GT,
  [3207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COLON_COLON,
  [3214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_SLASH_GT,
  [3221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACK_RBRACK,
  [3228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_id,
  [3235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SLASH_GT,
  [3242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_SLASH_SLASH,
  [3249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COLON_COLON,
  [3256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COLON_COLON,
  [3263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_SLASH_SLASH,
  [3270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_SLASH_GT,
  [3277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_line_end,
  [3284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
  [3291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_SLASH_GT,
  [3298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON_COLON,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_SLASH_GT,
  [3312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RBRACK_RBRACK,
  [3319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_id,
  [3326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_SQUOTE,
  [3333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_COLON_COLON_EQ,
  [3340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COLON_COLON_EQ,
  [3347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SLASH_GT,
  [3354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COLON_COLON,
  [3361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_SLASH_GT,
  [3368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SLASH_GT,
  [3375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SLASH_GT,
  [3382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_SLASH_GT,
  [3389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SLASH_GT,
  [3396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_SLASH_GT,
  [3403] = 2,
    ACTIONS(579), 1,
      aux_sym_homomorphism_token1,
    ACTIONS(581), 1,
      sym_comment,
  [3410] = 2,
    ACTIONS(581), 1,
      sym_comment,
    ACTIONS(583), 1,
      aux_sym_dash_line_token1,
  [3417] = 2,
    ACTIONS(581), 1,
      sym_comment,
    ACTIONS(585), 1,
      aux_sym_homomorphism_token1,
  [3424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH_GT,
  [3431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SLASH_GT,
  [3438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COLON_COLON,
  [3445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_COLON_COLON_EQ,
  [3452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_id,
  [3459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_line_cont,
  [3466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_hom_name,
  [3473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COLON_COLON,
  [3480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COLON_COLON,
  [3487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SLASH_SLASH,
  [3494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SLASH_SLASH,
  [3501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_hom_name,
  [3508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COLON_COLON,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SLASH_SLASH,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
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
  [SMALL_STATE(14)] = 560,
  [SMALL_STATE(15)] = 581,
  [SMALL_STATE(16)] = 610,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 678,
  [SMALL_STATE(20)] = 698,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 744,
  [SMALL_STATE(23)] = 767,
  [SMALL_STATE(24)] = 790,
  [SMALL_STATE(25)] = 813,
  [SMALL_STATE(26)] = 846,
  [SMALL_STATE(27)] = 869,
  [SMALL_STATE(28)] = 896,
  [SMALL_STATE(29)] = 927,
  [SMALL_STATE(30)] = 960,
  [SMALL_STATE(31)] = 993,
  [SMALL_STATE(32)] = 1026,
  [SMALL_STATE(33)] = 1049,
  [SMALL_STATE(34)] = 1072,
  [SMALL_STATE(35)] = 1105,
  [SMALL_STATE(36)] = 1128,
  [SMALL_STATE(37)] = 1151,
  [SMALL_STATE(38)] = 1178,
  [SMALL_STATE(39)] = 1205,
  [SMALL_STATE(40)] = 1228,
  [SMALL_STATE(41)] = 1258,
  [SMALL_STATE(42)] = 1288,
  [SMALL_STATE(43)] = 1310,
  [SMALL_STATE(44)] = 1332,
  [SMALL_STATE(45)] = 1354,
  [SMALL_STATE(46)] = 1379,
  [SMALL_STATE(47)] = 1404,
  [SMALL_STATE(48)] = 1423,
  [SMALL_STATE(49)] = 1450,
  [SMALL_STATE(50)] = 1469,
  [SMALL_STATE(51)] = 1494,
  [SMALL_STATE(52)] = 1519,
  [SMALL_STATE(53)] = 1536,
  [SMALL_STATE(54)] = 1553,
  [SMALL_STATE(55)] = 1578,
  [SMALL_STATE(56)] = 1605,
  [SMALL_STATE(57)] = 1632,
  [SMALL_STATE(58)] = 1657,
  [SMALL_STATE(59)] = 1682,
  [SMALL_STATE(60)] = 1701,
  [SMALL_STATE(61)] = 1720,
  [SMALL_STATE(62)] = 1745,
  [SMALL_STATE(63)] = 1770,
  [SMALL_STATE(64)] = 1787,
  [SMALL_STATE(65)] = 1812,
  [SMALL_STATE(66)] = 1839,
  [SMALL_STATE(67)] = 1858,
  [SMALL_STATE(68)] = 1883,
  [SMALL_STATE(69)] = 1908,
  [SMALL_STATE(70)] = 1933,
  [SMALL_STATE(71)] = 1958,
  [SMALL_STATE(72)] = 1977,
  [SMALL_STATE(73)] = 1997,
  [SMALL_STATE(74)] = 2021,
  [SMALL_STATE(75)] = 2035,
  [SMALL_STATE(76)] = 2047,
  [SMALL_STATE(77)] = 2065,
  [SMALL_STATE(78)] = 2079,
  [SMALL_STATE(79)] = 2093,
  [SMALL_STATE(80)] = 2107,
  [SMALL_STATE(81)] = 2119,
  [SMALL_STATE(82)] = 2137,
  [SMALL_STATE(83)] = 2151,
  [SMALL_STATE(84)] = 2163,
  [SMALL_STATE(85)] = 2177,
  [SMALL_STATE(86)] = 2189,
  [SMALL_STATE(87)] = 2203,
  [SMALL_STATE(88)] = 2215,
  [SMALL_STATE(89)] = 2227,
  [SMALL_STATE(90)] = 2239,
  [SMALL_STATE(91)] = 2253,
  [SMALL_STATE(92)] = 2265,
  [SMALL_STATE(93)] = 2277,
  [SMALL_STATE(94)] = 2289,
  [SMALL_STATE(95)] = 2301,
  [SMALL_STATE(96)] = 2313,
  [SMALL_STATE(97)] = 2327,
  [SMALL_STATE(98)] = 2339,
  [SMALL_STATE(99)] = 2353,
  [SMALL_STATE(100)] = 2365,
  [SMALL_STATE(101)] = 2377,
  [SMALL_STATE(102)] = 2391,
  [SMALL_STATE(103)] = 2405,
  [SMALL_STATE(104)] = 2419,
  [SMALL_STATE(105)] = 2433,
  [SMALL_STATE(106)] = 2444,
  [SMALL_STATE(107)] = 2461,
  [SMALL_STATE(108)] = 2475,
  [SMALL_STATE(109)] = 2489,
  [SMALL_STATE(110)] = 2503,
  [SMALL_STATE(111)] = 2517,
  [SMALL_STATE(112)] = 2531,
  [SMALL_STATE(113)] = 2547,
  [SMALL_STATE(114)] = 2561,
  [SMALL_STATE(115)] = 2575,
  [SMALL_STATE(116)] = 2589,
  [SMALL_STATE(117)] = 2603,
  [SMALL_STATE(118)] = 2617,
  [SMALL_STATE(119)] = 2633,
  [SMALL_STATE(120)] = 2647,
  [SMALL_STATE(121)] = 2663,
  [SMALL_STATE(122)] = 2677,
  [SMALL_STATE(123)] = 2691,
  [SMALL_STATE(124)] = 2705,
  [SMALL_STATE(125)] = 2719,
  [SMALL_STATE(126)] = 2733,
  [SMALL_STATE(127)] = 2744,
  [SMALL_STATE(128)] = 2753,
  [SMALL_STATE(129)] = 2766,
  [SMALL_STATE(130)] = 2779,
  [SMALL_STATE(131)] = 2788,
  [SMALL_STATE(132)] = 2801,
  [SMALL_STATE(133)] = 2814,
  [SMALL_STATE(134)] = 2827,
  [SMALL_STATE(135)] = 2840,
  [SMALL_STATE(136)] = 2853,
  [SMALL_STATE(137)] = 2866,
  [SMALL_STATE(138)] = 2875,
  [SMALL_STATE(139)] = 2888,
  [SMALL_STATE(140)] = 2901,
  [SMALL_STATE(141)] = 2914,
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
  [SMALL_STATE(161)] = 3115,
  [SMALL_STATE(162)] = 3125,
  [SMALL_STATE(163)] = 3135,
  [SMALL_STATE(164)] = 3145,
  [SMALL_STATE(165)] = 3155,
  [SMALL_STATE(166)] = 3165,
  [SMALL_STATE(167)] = 3175,
  [SMALL_STATE(168)] = 3185,
  [SMALL_STATE(169)] = 3193,
  [SMALL_STATE(170)] = 3200,
  [SMALL_STATE(171)] = 3207,
  [SMALL_STATE(172)] = 3214,
  [SMALL_STATE(173)] = 3221,
  [SMALL_STATE(174)] = 3228,
  [SMALL_STATE(175)] = 3235,
  [SMALL_STATE(176)] = 3242,
  [SMALL_STATE(177)] = 3249,
  [SMALL_STATE(178)] = 3256,
  [SMALL_STATE(179)] = 3263,
  [SMALL_STATE(180)] = 3270,
  [SMALL_STATE(181)] = 3277,
  [SMALL_STATE(182)] = 3284,
  [SMALL_STATE(183)] = 3291,
  [SMALL_STATE(184)] = 3298,
  [SMALL_STATE(185)] = 3305,
  [SMALL_STATE(186)] = 3312,
  [SMALL_STATE(187)] = 3319,
  [SMALL_STATE(188)] = 3326,
  [SMALL_STATE(189)] = 3333,
  [SMALL_STATE(190)] = 3340,
  [SMALL_STATE(191)] = 3347,
  [SMALL_STATE(192)] = 3354,
  [SMALL_STATE(193)] = 3361,
  [SMALL_STATE(194)] = 3368,
  [SMALL_STATE(195)] = 3375,
  [SMALL_STATE(196)] = 3382,
  [SMALL_STATE(197)] = 3389,
  [SMALL_STATE(198)] = 3396,
  [SMALL_STATE(199)] = 3403,
  [SMALL_STATE(200)] = 3410,
  [SMALL_STATE(201)] = 3417,
  [SMALL_STATE(202)] = 3424,
  [SMALL_STATE(203)] = 3431,
  [SMALL_STATE(204)] = 3438,
  [SMALL_STATE(205)] = 3445,
  [SMALL_STATE(206)] = 3452,
  [SMALL_STATE(207)] = 3459,
  [SMALL_STATE(208)] = 3466,
  [SMALL_STATE(209)] = 3473,
  [SMALL_STATE(210)] = 3480,
  [SMALL_STATE(211)] = 3487,
  [SMALL_STATE(212)] = 3494,
  [SMALL_STATE(213)] = 3501,
  [SMALL_STATE(214)] = 3508,
  [SMALL_STATE(215)] = 3515,
  [SMALL_STATE(216)] = 3522,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 32),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 34),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 34),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 33),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 33),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 36),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 36),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 8, 0, 26),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 8, 0, 26),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 28),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 28),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(200),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(74),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 30),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 30),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 29),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 29),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 31),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 31),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 35),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 35),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 11),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 5, 0, 9),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 5, 0, 9),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 22),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 22),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 19),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 19),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 17),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 17),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 10),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 10), SHIFT_REPEAT(56),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 10), SHIFT_REPEAT(96),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 10), SHIFT_REPEAT(96),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 10), SHIFT_REPEAT(104),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 25),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 25),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 24),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 24),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 20),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 20),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 23),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 23),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 21),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 21),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 12),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 16),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 16),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 14),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(57),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_desc, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_desc, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 27),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_line_repeat1, 1, 0, 27),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 7, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 13),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 13),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 6, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 5),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 7, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 6),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 6),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 6, 0, 38),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_desc_list1, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__id_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 8),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 15),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 18),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 37),
  [547] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dash_line, 2, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
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
