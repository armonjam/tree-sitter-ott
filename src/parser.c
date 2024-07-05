#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 228
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 5
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 7
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
  sym_comment = 29,
  sym_string = 30,
  sym__whitespace = 31,
  sym__line_cont = 32,
  aux_sym__line_end_token1 = 33,
  sym__eof = 34,
  sym_hom_string = 35,
  sym_hom_inner_string_init = 36,
  sym_hom_inner_string_left = 37,
  sym_hom_inner_string_right = 38,
  sym_hom_inner_comp_left = 39,
  sym_error_sentinel = 40,
  sym_source_file = 41,
  sym__item = 42,
  sym_defnclass = 43,
  sym_defnclass_name = 44,
  sym_defn = 45,
  sym_defn_name = 46,
  sym_defn_rule = 47,
  sym_rule_separator = 48,
  sym_rule_name = 49,
  sym_dash_line = 50,
  sym_rule_line = 51,
  sym_grammar_rule = 52,
  sym_production = 53,
  sym_production_mod = 54,
  sym_production_name = 55,
  sym__element = 56,
  sym_metavardefn = 57,
  sym__string_desc_list1 = 58,
  sym_string_desc = 59,
  sym_embed = 60,
  sym_homomorphism = 61,
  sym__hom_element = 62,
  sym_hom_inner_block = 63,
  sym__hom_inner = 64,
  sym_comprehension_bound = 65,
  sym__comprehension_string = 66,
  sym_namespace_prefix = 67,
  sym_dots = 68,
  sym_id = 69,
  sym__line_end = 70,
  sym__hom_string = 71,
  sym__hom_inner_string_init = 72,
  sym__hom_inner_string_left = 73,
  sym__hom_inner_string_right = 74,
  sym__hom_inner_comp_left = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym__item_repeat1 = 77,
  aux_sym_defnclass_repeat1 = 78,
  aux_sym_defnclass_repeat2 = 79,
  aux_sym_defn_repeat1 = 80,
  aux_sym_defn_repeat2 = 81,
  aux_sym_defn_rule_repeat1 = 82,
  aux_sym_grammar_rule_repeat1 = 83,
  aux_sym_production_repeat1 = 84,
  aux_sym__string_desc_list1_repeat1 = 85,
  aux_sym_homomorphism_repeat1 = 86,
  aux_sym__hom_inner_repeat1 = 87,
  aux_sym__hom_inner_repeat2 = 88,
  aux_sym__hom_inner_repeat3 = 89,
  anon_alias_sym_defn_name = 90,
  alias_sym_hom_body = 91,
  anon_alias_sym_production_modifier = 92,
  anon_alias_sym_production_name = 93,
  anon_alias_sym_rule_name = 94,
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
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym__whitespace] = "_whitespace",
  [sym__line_cont] = "_line_cont",
  [aux_sym__line_end_token1] = "_line_end_token1",
  [sym__eof] = "_eof",
  [sym_hom_string] = "hom_string",
  [sym_hom_inner_string_init] = "string",
  [sym_hom_inner_string_left] = "string",
  [sym_hom_inner_string_right] = "string",
  [sym_hom_inner_comp_left] = "string",
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
  [sym__line_end] = "_line_end",
  [sym__hom_string] = "_hom_string",
  [sym__hom_inner_string_init] = "_hom_inner_string_init",
  [sym__hom_inner_string_left] = "_hom_inner_string_left",
  [sym__hom_inner_string_right] = "_hom_inner_string_right",
  [sym__hom_inner_comp_left] = "_hom_inner_comp_left",
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
  [aux_sym__hom_inner_repeat2] = "_hom_inner_repeat2",
  [aux_sym__hom_inner_repeat3] = "_hom_inner_repeat3",
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
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym__whitespace] = sym__whitespace,
  [sym__line_cont] = sym__line_cont,
  [aux_sym__line_end_token1] = aux_sym__line_end_token1,
  [sym__eof] = sym__eof,
  [sym_hom_string] = sym_hom_string,
  [sym_hom_inner_string_init] = sym_string,
  [sym_hom_inner_string_left] = sym_string,
  [sym_hom_inner_string_right] = sym_string,
  [sym_hom_inner_comp_left] = sym_string,
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
  [sym__line_end] = sym__line_end,
  [sym__hom_string] = sym__hom_string,
  [sym__hom_inner_string_init] = sym__hom_inner_string_init,
  [sym__hom_inner_string_left] = sym__hom_inner_string_left,
  [sym__hom_inner_string_right] = sym__hom_inner_string_right,
  [sym__hom_inner_comp_left] = sym__hom_inner_comp_left,
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
  [aux_sym__hom_inner_repeat2] = aux_sym__hom_inner_repeat2,
  [aux_sym__hom_inner_repeat3] = aux_sym__hom_inner_repeat3,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__line_cont] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_end_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_hom_string] = {
    .visible = true,
    .named = false,
  },
  [sym_hom_inner_string_init] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_inner_string_left] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_inner_string_right] = {
    .visible = true,
    .named = true,
  },
  [sym_hom_inner_comp_left] = {
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
  [sym__line_end] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_string] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string_init] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string_left] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_string_right] = {
    .visible = false,
    .named = true,
  },
  [sym__hom_inner_comp_left] = {
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
  [aux_sym__hom_inner_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hom_inner_repeat3] = {
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
  [17] = 16,
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
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 22,
  [39] = 37,
  [40] = 40,
  [41] = 21,
  [42] = 36,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 46,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 50,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 54,
  [62] = 62,
  [63] = 63,
  [64] = 50,
  [65] = 54,
  [66] = 66,
  [67] = 46,
  [68] = 68,
  [69] = 69,
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
  [80] = 79,
  [81] = 79,
  [82] = 76,
  [83] = 83,
  [84] = 75,
  [85] = 85,
  [86] = 11,
  [87] = 76,
  [88] = 75,
  [89] = 74,
  [90] = 74,
  [91] = 75,
  [92] = 78,
  [93] = 93,
  [94] = 78,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 99,
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
  [115] = 114,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 112,
  [120] = 114,
  [121] = 121,
  [122] = 122,
  [123] = 112,
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
  [135] = 130,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 140,
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
  [156] = 140,
  [157] = 155,
  [158] = 153,
  [159] = 159,
  [160] = 160,
  [161] = 153,
  [162] = 138,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 165,
  [171] = 48,
  [172] = 172,
  [173] = 172,
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
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 75,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 75,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 200,
  [203] = 203,
  [204] = 201,
  [205] = 190,
  [206] = 200,
  [207] = 203,
  [208] = 201,
  [209] = 190,
  [210] = 187,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 203,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 195,
  [220] = 220,
  [221] = 221,
  [222] = 199,
  [223] = 216,
  [224] = 224,
  [225] = 225,
  [226] = 199,
  [227] = 216,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '%', 123,
        '\'', 114,
        ',', 107,
        '-', 13,
        '.', 14,
        '/', 15,
        ':', 17,
        '<', 16,
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
      ADVANCE_MAP(
        '\n', 161,
        '\r', 1,
        '%', 122,
        '.', 127,
        '<', 128,
        '\t', 1,
        0x0b, 1,
        '\f', 1,
        ' ', 1,
      );
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == ':') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '<') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(116);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 21:
      if (lookahead == '[') ADVANCE(111);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(112);
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
      if (lookahead == 'd') ADVANCE(57);
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
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(104);
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
      if (lookahead == '{') ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == '}') ADVANCE(109);
      END_STATE();
    case 52:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '%', 123,
        ',', 107,
        ':', 17,
        'd', 75,
        'e', 80,
        'g', 86,
        'i', 83,
        'm', 76,
        '{', 50,
        '|', 66,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '%', 123,
        ',', 107,
        ':', 18,
        'b', 49,
        'd', 31,
        'e', 36,
        'g', 41,
        'i', 39,
        'm', 32,
        '{', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '%', 122,
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
          lookahead == ' ') SKIP(54);
      if (lookahead != 0) ADVANCE(157);
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
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_defn);
      if (lookahead == 's') ADVANCE(58);
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
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'b') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'd') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'f') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'm') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 's') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'v') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (lookahead == 'x') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_production_mod_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_metavar);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_metavar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_indexvar);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_indexvar);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_hom_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__namespace_prefix_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
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
      if (lookahead == '.') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '/') ADVANCE(99);
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
      if (lookahead == 'd') ADVANCE(57);
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
      if (lookahead == 'r') ADVANCE(56);
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
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(106);
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
    case 158:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line_cont);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line_cont);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__line_end_token1);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1);
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
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 53},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 52},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 52},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 1, .external_lex_state = 3},
  [75] = {.lex_state = 1, .external_lex_state = 3},
  [76] = {.lex_state = 1, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 4},
  [78] = {.lex_state = 1, .external_lex_state = 3},
  [79] = {.lex_state = 1, .external_lex_state = 3},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 53},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 53},
  [104] = {.lex_state = 0, .external_lex_state = 5},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 6},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 7},
  [110] = {.lex_state = 0, .external_lex_state = 7},
  [111] = {.lex_state = 0, .external_lex_state = 5},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 7},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0, .external_lex_state = 7},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 53},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 53},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 53},
  [139] = {.lex_state = 1, .external_lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 1, .external_lex_state = 3},
  [144] = {.lex_state = 1, .external_lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 1, .external_lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 53},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 53},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 1, .external_lex_state = 3},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 53},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 7},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 1, .external_lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 53},
  [171] = {.lex_state = 1, .external_lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 159},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 53},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 159},
  [183] = {.lex_state = 53},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 159},
  [186] = {.lex_state = 65},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0, .external_lex_state = 7},
  [192] = {.lex_state = 53},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
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
    [sym__eof] = ACTIONS(1),
    [sym_hom_string] = ACTIONS(1),
    [sym_hom_inner_string_init] = ACTIONS(1),
    [sym_hom_inner_string_left] = ACTIONS(1),
    [sym_hom_inner_string_right] = ACTIONS(1),
    [sym_hom_inner_comp_left] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(220),
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
    STATE(55), 1,
      sym_rule_separator,
    STATE(185), 1,
      sym_dash_line,
    STATE(3), 2,
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
    STATE(32), 3,
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
    STATE(55), 1,
      sym_rule_separator,
    STATE(185), 1,
      sym_dash_line,
    STATE(6), 2,
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
    STATE(32), 3,
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
    STATE(185), 1,
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
    ACTIONS(33), 3,
      anon_sym_defn,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(32), 3,
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
    STATE(55), 1,
      sym_rule_separator,
    STATE(185), 1,
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
    STATE(32), 3,
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
    STATE(55), 1,
      sym_rule_separator,
    STATE(185), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
    STATE(32), 3,
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
    STATE(55), 1,
      sym_rule_separator,
    STATE(185), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
    STATE(32), 3,
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
    STATE(185), 1,
      sym_dash_line,
    STATE(6), 2,
      sym_defn_rule,
      aux_sym_defn_repeat2,
    STATE(12), 2,
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
    STATE(32), 3,
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
    STATE(185), 1,
      sym_dash_line,
    STATE(10), 2,
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
    STATE(32), 3,
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
    STATE(185), 1,
      sym_dash_line,
    STATE(6), 2,
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
    STATE(32), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [432] = 3,
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
  [453] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_string,
    STATE(70), 1,
      sym_rule_separator,
    STATE(185), 1,
      sym_dash_line,
    STATE(40), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(32), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(77), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [507] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(44), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(83), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(89), 8,
      anon_sym_defn,
      anon_sym_LT_SLASH,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(93), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_defn,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(91), 9,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_metavar,
      anon_sym_indexvar,
      anon_sym_COMMA,
  [607] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(47), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(103), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    STATE(63), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [662] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 2,
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
  [688] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(115), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(121), 1,
      sym_hom_string,
    STATE(24), 1,
      aux_sym_homomorphism_repeat1,
    STATE(93), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(117), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(85), 2,
      sym__hom_element,
      sym_dots,
  [721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(129), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [763] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(133), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(139), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(142), 1,
      sym_hom_string,
    STATE(24), 1,
      aux_sym_homomorphism_repeat1,
    STATE(93), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(136), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(85), 2,
      sym__hom_element,
      sym_dots,
  [796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_production_mod_token1,
    STATE(162), 1,
      sym_string_desc,
    STATE(197), 1,
      sym__string_desc_list1,
    ACTIONS(149), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(34), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(153), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(157), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [869] = 7,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(11), 1,
      sym__line_end,
    ACTIONS(163), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(46), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(167), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(171), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [942] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_production_mod_token1,
    STATE(162), 1,
      sym_string_desc,
    STATE(197), 1,
      sym__string_desc_list1,
    ACTIONS(178), 2,
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
  [969] = 7,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_string,
    STATE(86), 1,
      sym__line_end,
    ACTIONS(180), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(46), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(35), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(184), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1019] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_production_mod_token1,
    STATE(162), 1,
      sym_string_desc,
    STATE(197), 1,
      sym__string_desc_list1,
    ACTIONS(188), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(31), 2,
      sym_grammar_rule,
      aux_sym__item_repeat1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1046] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(192), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_defn,
    ACTIONS(194), 10,
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
  [1088] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(121), 1,
      sym_hom_string,
    ACTIONS(198), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(21), 1,
      aux_sym_homomorphism_repeat1,
    STATE(93), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(117), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(85), 2,
      sym__hom_element,
      sym_dots,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_defn,
    ACTIONS(123), 10,
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
  [1140] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(121), 1,
      sym_hom_string,
    ACTIONS(200), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(41), 1,
      aux_sym_homomorphism_repeat1,
    STATE(93), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(117), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(85), 2,
      sym__hom_element,
      sym_dots,
  [1173] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(204), 1,
      anon_sym_LT_SLASH,
    ACTIONS(210), 1,
      sym_string,
    STATE(40), 2,
      sym_rule_line,
      aux_sym_defn_rule_repeat1,
    ACTIONS(207), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(32), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1200] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(121), 1,
      sym_hom_string,
    ACTIONS(213), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(24), 1,
      aux_sym_homomorphism_repeat1,
    STATE(93), 1,
      sym__hom_string,
    STATE(95), 1,
      sym_hom_inner_block,
    ACTIONS(117), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(85), 2,
      sym__hom_element,
      sym_dots,
  [1233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_LBRACE_LBRACE,
  [1252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(23), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(217), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
  [1275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    STATE(45), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(221), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_PIPE,
    STATE(45), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(228), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1319] = 6,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LT_SLASH,
    ACTIONS(236), 1,
      sym_string,
    ACTIONS(239), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(233), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(46), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    STATE(45), 2,
      sym_production,
      aux_sym_grammar_rule_repeat1,
    ACTIONS(83), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_COLON_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COLON_COLON,
    ACTIONS(247), 1,
      anon_sym_LT_SLASH,
    ACTIONS(253), 1,
      sym_string,
    ACTIONS(250), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(49), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    ACTIONS(258), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(262), 1,
      sym_string,
    ACTIONS(260), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(67), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      aux_sym_production_mod_token1,
      anon_sym_metavar,
      anon_sym_indexvar,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_PIPE,
      anon_sym_LBRACE_LBRACE,
  [1465] = 6,
    ACTIONS(3), 1,
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
    STATE(49), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    ACTIONS(278), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(280), 1,
      sym_string,
    ACTIONS(260), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(50), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(282), 1,
      sym_string,
    STATE(13), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(28), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    ACTIONS(284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(286), 1,
      sym_string,
    ACTIONS(274), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(66), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1557] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    ACTIONS(262), 1,
      sym_string,
    ACTIONS(288), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(67), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(69), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1599] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      anon_sym_grammar,
    ACTIONS(297), 1,
      anon_sym_embed,
    ACTIONS(300), 1,
      anon_sym_defns,
    ACTIONS(303), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(59), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    STATE(71), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(306), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(310), 1,
      sym_string,
    ACTIONS(260), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(57), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    ACTIONS(312), 1,
      anon_sym_COLON_COLON,
    ACTIONS(314), 1,
      sym_string,
    ACTIONS(274), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(53), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_defn,
    STATE(71), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1708] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    ACTIONS(262), 1,
      sym_string,
    ACTIONS(318), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(67), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1731] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LT_SLASH,
    ACTIONS(320), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(322), 1,
      sym_string,
    ACTIONS(260), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(64), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1754] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT_SLASH,
    ACTIONS(276), 1,
      sym_string,
    ACTIONS(324), 1,
      anon_sym_COLON_COLON,
    ACTIONS(274), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(49), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1777] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(326), 1,
      anon_sym_LT_SLASH,
    ACTIONS(332), 1,
      sym_string,
    ACTIONS(329), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(67), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1800] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_grammar,
    ACTIONS(9), 1,
      anon_sym_embed,
    ACTIONS(11), 1,
      anon_sym_defns,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_metavar,
      anon_sym_indexvar,
    STATE(59), 3,
      sym__item,
      sym_metavardefn,
      aux_sym_source_file_repeat1,
  [1825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
    ACTIONS(337), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1844] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(282), 1,
      sym_string,
    STATE(15), 1,
      sym_rule_line,
    ACTIONS(23), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(28), 3,
      sym__element,
      sym_dots,
      aux_sym_defn_repeat1,
  [1867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_defn,
    STATE(71), 2,
      sym_defn,
      aux_sym_defnclass_repeat2,
    ACTIONS(339), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [1886] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(348), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(350), 1,
      sym_hom_inner_string_left,
    STATE(160), 1,
      sym_dots,
    ACTIONS(346), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(73), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [1910] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(352), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(354), 1,
      sym_hom_inner_string_left,
    STATE(128), 1,
      sym_dots,
    ACTIONS(346), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [1934] = 3,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(358), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(356), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1949] = 3,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(362), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(360), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1964] = 3,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(366), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(364), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [1979] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_hom_inner_string_left,
    ACTIONS(368), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
    ACTIONS(370), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 2,
      sym__hom_inner_string_left,
      aux_sym__hom_inner_repeat1,
  [1998] = 3,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(377), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(375), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2013] = 3,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(381), 2,
      sym__eof,
      aux_sym__line_end_token1,
    ACTIONS(379), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_grammar,
      anon_sym_embed,
      anon_sym_defns,
      anon_sym_metavar,
      anon_sym_indexvar,
  [2076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2088] = 3,
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
  [2102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(73), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(362), 4,
      sym_hom_string,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LBRACK_LBRACK,
      anon_sym_DOT_DOT_DOT_DOT,
  [2142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 6,
      anon_sym_COLON_COLON,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2190] = 3,
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
  [2204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 6,
      anon_sym_LT_SLASH,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2216] = 3,
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
  [2230] = 3,
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
  [2244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(399), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(16), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(399), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(401), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
    STATE(97), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SLASH_GT,
    ACTIONS(407), 1,
      anon_sym_DOT_DOT_DOT_DOT,
    STATE(174), 1,
      sym_dots,
    ACTIONS(405), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
  [2306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(409), 3,
      anon_sym_SLASH_GT,
      anon_sym_IN,
      anon_sym_DOT_DOT_DOT_DOT,
  [2319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 5,
      anon_sym_LT_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT_DOT,
      sym_string,
  [2330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(401), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
    STATE(98), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(417), 1,
      sym_hom_inner_comp_left,
    STATE(111), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COLON_COLON,
    ACTIONS(421), 1,
      aux_sym_production_mod_token1,
    STATE(105), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LT_SLASH,
    ACTIONS(426), 1,
      sym_hom_inner_string_init,
    STATE(72), 1,
      sym__hom_inner_string_init,
    STATE(176), 1,
      sym__hom_inner,
  [2389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_COLON_COLON,
    ACTIONS(430), 1,
      aux_sym_production_mod_token1,
    STATE(105), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_production_mod_token1,
    ACTIONS(432), 1,
      anon_sym_COLON_COLON,
    STATE(113), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(436), 1,
      sym_hom_inner_string_right,
    STATE(109), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(441), 1,
      sym_hom_inner_string_right,
    STATE(109), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(445), 1,
      sym_hom_inner_comp_left,
    STATE(117), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_production_mod_token1,
    ACTIONS(449), 1,
      sym_string,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(207), 1,
      sym_comprehension_bound,
  [2475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_production_mod_token1,
    ACTIONS(451), 1,
      anon_sym_COLON_COLON,
    STATE(105), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_production_mod_token1,
    ACTIONS(453), 1,
      sym_string,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(206), 1,
      sym_comprehension_bound,
  [2505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_production_mod_token1,
    ACTIONS(455), 1,
      sym_string,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(200), 1,
      sym_comprehension_bound,
  [2521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_production_mod_token1,
    ACTIONS(457), 1,
      anon_sym_COLON_COLON,
    STATE(107), 2,
      sym_production_mod,
      aux_sym_production_repeat1,
  [2535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(461), 1,
      sym_hom_inner_comp_left,
    STATE(117), 2,
      sym__hom_inner_comp_left,
      aux_sym__hom_inner_repeat3,
  [2549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(464), 1,
      anon_sym_by,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_production_mod_token1,
    ACTIONS(466), 1,
      sym_string,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(203), 1,
      sym_comprehension_bound,
  [2579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_production_mod_token1,
    ACTIONS(468), 1,
      sym_string,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(202), 1,
      sym_comprehension_bound,
  [2595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(83), 1,
      sym_embed,
    STATE(51), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_hom_inner_string_right,
    ACTIONS(470), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(109), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym_production_mod_token1,
    ACTIONS(472), 1,
      sym_string,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(215), 1,
      sym_comprehension_bound,
  [2639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_production_mod_token1,
    STATE(83), 1,
      sym_defnclass,
    STATE(193), 1,
      sym_id,
    STATE(194), 1,
      sym_defnclass_name,
  [2655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(476), 1,
      anon_sym_by,
    STATE(118), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(478), 1,
      anon_sym_by,
    STATE(17), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(480), 1,
      anon_sym_by,
    STATE(126), 2,
      sym_homomorphism,
      aux_sym_defnclass_repeat1,
  [2697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_hom_inner_string_right,
    STATE(110), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [2708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(184), 1,
      sym_comprehension_bound,
  [2721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__string_desc_list1_repeat1,
  [2734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      sym__namespace_prefix_string,
    STATE(127), 1,
      sym_namespace_prefix,
  [2747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      sym__namespace_prefix_string,
    STATE(183), 1,
      sym_namespace_prefix,
  [2760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_production_mod_token1,
    STATE(43), 1,
      sym_production_name,
    STATE(52), 1,
      sym_id,
  [2773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON_COLON,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym__string_desc_list1_repeat1,
  [2795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      sym__namespace_prefix_string,
    STATE(178), 1,
      sym_namespace_prefix,
  [2808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
    ACTIONS(492), 1,
      sym__namespace_prefix_string,
    STATE(125), 1,
      sym_namespace_prefix,
  [2821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_COLON_COLON_EQ,
    STATE(130), 1,
      aux_sym__string_desc_list1_repeat1,
  [2834] = 3,
    ACTIONS(159), 1,
      sym_comment,
    STATE(2), 1,
      sym__line_end,
    ACTIONS(500), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(209), 1,
      sym_comprehension_bound,
  [2858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym_production_mod_token1,
    STATE(138), 1,
      sym_string_desc,
    STATE(192), 1,
      sym__string_desc_list1,
  [2871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(190), 1,
      sym_comprehension_bound,
  [2884] = 3,
    ACTIONS(159), 1,
      sym_comment,
    STATE(4), 1,
      sym__line_end,
    ACTIONS(504), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2895] = 3,
    ACTIONS(159), 1,
      sym_comment,
    STATE(5), 1,
      sym__line_end,
    ACTIONS(506), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_production_mod_token1,
    STATE(196), 1,
      sym_defn_name,
    STATE(211), 1,
      sym_id,
  [2919] = 3,
    ACTIONS(159), 1,
      sym_comment,
    STATE(102), 1,
      sym__line_end,
    ACTIONS(508), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [2930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_production_mod_token1,
    STATE(33), 1,
      sym_production_name,
    STATE(52), 1,
      sym_id,
  [2943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(218), 1,
      sym_comprehension_bound,
  [2965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_production_mod_token1,
    STATE(146), 1,
      sym_rule_name,
    STATE(168), 1,
      sym_id,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 3,
      anon_sym_COLON_COLON_EQ,
      anon_sym_by,
      anon_sym_LBRACE_LBRACE,
  [2987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_production_mod_token1,
    STATE(27), 1,
      sym_production_name,
    STATE(52), 1,
      sym_id,
  [3000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(204), 1,
      sym_comprehension_bound,
  [3013] = 3,
    ACTIONS(159), 1,
      sym_comment,
    STATE(9), 1,
      sym__line_end,
    ACTIONS(516), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_COLON_COLON,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym__string_desc_list1_repeat1,
  [3037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(205), 1,
      sym_comprehension_bound,
  [3050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_COLON_COLON_EQ,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__string_desc_list1_repeat1,
  [3063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(208), 1,
      sym_comprehension_bound,
  [3076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_production_mod_token1,
    STATE(29), 1,
      sym_production_name,
    STATE(52), 1,
      sym_id,
  [3089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_hom_inner_string_right,
    STATE(122), 2,
      sym__hom_inner_string_right,
      aux_sym__hom_inner_repeat2,
  [3100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(166), 1,
      sym__comprehension_string,
    STATE(201), 1,
      sym_comprehension_bound,
  [3113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_COLON_COLON,
    STATE(135), 1,
      aux_sym__string_desc_list1_repeat1,
  [3126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_production_mod_token1,
    STATE(211), 1,
      sym_id,
    STATE(212), 1,
      sym_defn_name,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_COLON_COLON,
      aux_sym_production_mod_token1,
  [3147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_COLON_COLON,
      anon_sym_COMMA,
  [3155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_SLASH_GT,
    ACTIONS(532), 1,
      anon_sym_IN,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_SQUOTE,
    ACTIONS(536), 1,
      sym__namespace_prefix_string,
  [3175] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(538), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(100), 1,
      sym__comprehension_string,
  [3193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_COLON_COLON_EQ,
      anon_sym_COMMA,
  [3201] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(241), 2,
      sym__eof,
      aux_sym__line_end_token1,
  [3209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      aux_sym_production_mod_token1,
    STATE(165), 1,
      sym_string_desc,
  [3219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym_production_mod_token1,
    STATE(170), 1,
      sym_string_desc,
  [3229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      aux_sym_production_mod_token1,
    STATE(188), 1,
      sym__comprehension_string,
  [3239] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__line_cont,
  [3246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACK_RBRACK,
  [3253] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym__whitespace,
  [3260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COLON_COLON_EQ,
  [3267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SQUOTE,
  [3274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RBRACK_RBRACK,
  [3281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COLON_COLON,
  [3288] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym__line_cont,
  [3295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COLON_COLON_EQ,
  [3302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_SLASH_GT,
  [3309] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym__line_cont,
  [3316] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(562), 1,
      aux_sym_dash_line_token1,
  [3323] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__whitespace,
  [3330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_SLASH_GT,
  [3337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COLON_COLON,
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_SLASH_GT,
  [3351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_hom_inner_string_right,
  [3358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COLON_COLON_EQ,
  [3365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COLON_COLON,
  [3372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COLON_COLON,
  [3379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_hom_name,
  [3386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_COLON_COLON,
  [3393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COLON_COLON,
  [3400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_production_mod_token1,
  [3407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_SLASH_SLASH,
  [3414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_SLASH_GT,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SLASH_GT,
  [3428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_SLASH_GT,
  [3435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_SLASH_GT,
  [3442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_SLASH_GT,
  [3449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_SLASH_GT,
  [3456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SLASH_GT,
  [3463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_SLASH_GT,
  [3470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_SLASH_GT,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SLASH_GT,
  [3484] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__whitespace,
  [3491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
  [3498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
  [3505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACK_RBRACK,
  [3512] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__whitespace,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_SLASH_GT,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_SLASH_SLASH,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_SLASH_GT,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_hom_name,
  [3554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
  [3561] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym__whitespace,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_SLASH_SLASH,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SLASH_SLASH,
  [3582] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym__whitespace,
  [3589] = 2,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym__whitespace,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_SLASH_SLASH,
  [3603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
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
  [SMALL_STATE(12)] = 453,
  [SMALL_STATE(13)] = 486,
  [SMALL_STATE(14)] = 507,
  [SMALL_STATE(15)] = 536,
  [SMALL_STATE(16)] = 557,
  [SMALL_STATE(17)] = 582,
  [SMALL_STATE(18)] = 607,
  [SMALL_STATE(19)] = 636,
  [SMALL_STATE(20)] = 662,
  [SMALL_STATE(21)] = 688,
  [SMALL_STATE(22)] = 721,
  [SMALL_STATE(23)] = 740,
  [SMALL_STATE(24)] = 763,
  [SMALL_STATE(25)] = 796,
  [SMALL_STATE(26)] = 823,
  [SMALL_STATE(27)] = 846,
  [SMALL_STATE(28)] = 869,
  [SMALL_STATE(29)] = 896,
  [SMALL_STATE(30)] = 919,
  [SMALL_STATE(31)] = 942,
  [SMALL_STATE(32)] = 969,
  [SMALL_STATE(33)] = 996,
  [SMALL_STATE(34)] = 1019,
  [SMALL_STATE(35)] = 1046,
  [SMALL_STATE(36)] = 1069,
  [SMALL_STATE(37)] = 1088,
  [SMALL_STATE(38)] = 1121,
  [SMALL_STATE(39)] = 1140,
  [SMALL_STATE(40)] = 1173,
  [SMALL_STATE(41)] = 1200,
  [SMALL_STATE(42)] = 1233,
  [SMALL_STATE(43)] = 1252,
  [SMALL_STATE(44)] = 1275,
  [SMALL_STATE(45)] = 1297,
  [SMALL_STATE(46)] = 1319,
  [SMALL_STATE(47)] = 1343,
  [SMALL_STATE(48)] = 1365,
  [SMALL_STATE(49)] = 1383,
  [SMALL_STATE(50)] = 1406,
  [SMALL_STATE(51)] = 1429,
  [SMALL_STATE(52)] = 1448,
  [SMALL_STATE(53)] = 1465,
  [SMALL_STATE(54)] = 1488,
  [SMALL_STATE(55)] = 1511,
  [SMALL_STATE(56)] = 1534,
  [SMALL_STATE(57)] = 1557,
  [SMALL_STATE(58)] = 1580,
  [SMALL_STATE(59)] = 1599,
  [SMALL_STATE(60)] = 1624,
  [SMALL_STATE(61)] = 1643,
  [SMALL_STATE(62)] = 1666,
  [SMALL_STATE(63)] = 1689,
  [SMALL_STATE(64)] = 1708,
  [SMALL_STATE(65)] = 1731,
  [SMALL_STATE(66)] = 1754,
  [SMALL_STATE(67)] = 1777,
  [SMALL_STATE(68)] = 1800,
  [SMALL_STATE(69)] = 1825,
  [SMALL_STATE(70)] = 1844,
  [SMALL_STATE(71)] = 1867,
  [SMALL_STATE(72)] = 1886,
  [SMALL_STATE(73)] = 1910,
  [SMALL_STATE(74)] = 1934,
  [SMALL_STATE(75)] = 1949,
  [SMALL_STATE(76)] = 1964,
  [SMALL_STATE(77)] = 1979,
  [SMALL_STATE(78)] = 1998,
  [SMALL_STATE(79)] = 2013,
  [SMALL_STATE(80)] = 2028,
  [SMALL_STATE(81)] = 2040,
  [SMALL_STATE(82)] = 2052,
  [SMALL_STATE(83)] = 2064,
  [SMALL_STATE(84)] = 2076,
  [SMALL_STATE(85)] = 2088,
  [SMALL_STATE(86)] = 2102,
  [SMALL_STATE(87)] = 2116,
  [SMALL_STATE(88)] = 2128,
  [SMALL_STATE(89)] = 2142,
  [SMALL_STATE(90)] = 2154,
  [SMALL_STATE(91)] = 2166,
  [SMALL_STATE(92)] = 2178,
  [SMALL_STATE(93)] = 2190,
  [SMALL_STATE(94)] = 2204,
  [SMALL_STATE(95)] = 2216,
  [SMALL_STATE(96)] = 2230,
  [SMALL_STATE(97)] = 2244,
  [SMALL_STATE(98)] = 2259,
  [SMALL_STATE(99)] = 2274,
  [SMALL_STATE(100)] = 2289,
  [SMALL_STATE(101)] = 2306,
  [SMALL_STATE(102)] = 2319,
  [SMALL_STATE(103)] = 2330,
  [SMALL_STATE(104)] = 2345,
  [SMALL_STATE(105)] = 2359,
  [SMALL_STATE(106)] = 2373,
  [SMALL_STATE(107)] = 2389,
  [SMALL_STATE(108)] = 2403,
  [SMALL_STATE(109)] = 2417,
  [SMALL_STATE(110)] = 2431,
  [SMALL_STATE(111)] = 2445,
  [SMALL_STATE(112)] = 2459,
  [SMALL_STATE(113)] = 2475,
  [SMALL_STATE(114)] = 2489,
  [SMALL_STATE(115)] = 2505,
  [SMALL_STATE(116)] = 2521,
  [SMALL_STATE(117)] = 2535,
  [SMALL_STATE(118)] = 2549,
  [SMALL_STATE(119)] = 2563,
  [SMALL_STATE(120)] = 2579,
  [SMALL_STATE(121)] = 2595,
  [SMALL_STATE(122)] = 2609,
  [SMALL_STATE(123)] = 2623,
  [SMALL_STATE(124)] = 2639,
  [SMALL_STATE(125)] = 2655,
  [SMALL_STATE(126)] = 2669,
  [SMALL_STATE(127)] = 2683,
  [SMALL_STATE(128)] = 2697,
  [SMALL_STATE(129)] = 2708,
  [SMALL_STATE(130)] = 2721,
  [SMALL_STATE(131)] = 2734,
  [SMALL_STATE(132)] = 2747,
  [SMALL_STATE(133)] = 2760,
  [SMALL_STATE(134)] = 2773,
  [SMALL_STATE(135)] = 2782,
  [SMALL_STATE(136)] = 2795,
  [SMALL_STATE(137)] = 2808,
  [SMALL_STATE(138)] = 2821,
  [SMALL_STATE(139)] = 2834,
  [SMALL_STATE(140)] = 2845,
  [SMALL_STATE(141)] = 2858,
  [SMALL_STATE(142)] = 2871,
  [SMALL_STATE(143)] = 2884,
  [SMALL_STATE(144)] = 2895,
  [SMALL_STATE(145)] = 2906,
  [SMALL_STATE(146)] = 2919,
  [SMALL_STATE(147)] = 2930,
  [SMALL_STATE(148)] = 2943,
  [SMALL_STATE(149)] = 2952,
  [SMALL_STATE(150)] = 2965,
  [SMALL_STATE(151)] = 2978,
  [SMALL_STATE(152)] = 2987,
  [SMALL_STATE(153)] = 3000,
  [SMALL_STATE(154)] = 3013,
  [SMALL_STATE(155)] = 3024,
  [SMALL_STATE(156)] = 3037,
  [SMALL_STATE(157)] = 3050,
  [SMALL_STATE(158)] = 3063,
  [SMALL_STATE(159)] = 3076,
  [SMALL_STATE(160)] = 3089,
  [SMALL_STATE(161)] = 3100,
  [SMALL_STATE(162)] = 3113,
  [SMALL_STATE(163)] = 3126,
  [SMALL_STATE(164)] = 3139,
  [SMALL_STATE(165)] = 3147,
  [SMALL_STATE(166)] = 3155,
  [SMALL_STATE(167)] = 3165,
  [SMALL_STATE(168)] = 3175,
  [SMALL_STATE(169)] = 3183,
  [SMALL_STATE(170)] = 3193,
  [SMALL_STATE(171)] = 3201,
  [SMALL_STATE(172)] = 3209,
  [SMALL_STATE(173)] = 3219,
  [SMALL_STATE(174)] = 3229,
  [SMALL_STATE(175)] = 3239,
  [SMALL_STATE(176)] = 3246,
  [SMALL_STATE(177)] = 3253,
  [SMALL_STATE(178)] = 3260,
  [SMALL_STATE(179)] = 3267,
  [SMALL_STATE(180)] = 3274,
  [SMALL_STATE(181)] = 3281,
  [SMALL_STATE(182)] = 3288,
  [SMALL_STATE(183)] = 3295,
  [SMALL_STATE(184)] = 3302,
  [SMALL_STATE(185)] = 3309,
  [SMALL_STATE(186)] = 3316,
  [SMALL_STATE(187)] = 3323,
  [SMALL_STATE(188)] = 3330,
  [SMALL_STATE(189)] = 3337,
  [SMALL_STATE(190)] = 3344,
  [SMALL_STATE(191)] = 3351,
  [SMALL_STATE(192)] = 3358,
  [SMALL_STATE(193)] = 3365,
  [SMALL_STATE(194)] = 3372,
  [SMALL_STATE(195)] = 3379,
  [SMALL_STATE(196)] = 3386,
  [SMALL_STATE(197)] = 3393,
  [SMALL_STATE(198)] = 3400,
  [SMALL_STATE(199)] = 3407,
  [SMALL_STATE(200)] = 3414,
  [SMALL_STATE(201)] = 3421,
  [SMALL_STATE(202)] = 3428,
  [SMALL_STATE(203)] = 3435,
  [SMALL_STATE(204)] = 3442,
  [SMALL_STATE(205)] = 3449,
  [SMALL_STATE(206)] = 3456,
  [SMALL_STATE(207)] = 3463,
  [SMALL_STATE(208)] = 3470,
  [SMALL_STATE(209)] = 3477,
  [SMALL_STATE(210)] = 3484,
  [SMALL_STATE(211)] = 3491,
  [SMALL_STATE(212)] = 3498,
  [SMALL_STATE(213)] = 3505,
  [SMALL_STATE(214)] = 3512,
  [SMALL_STATE(215)] = 3519,
  [SMALL_STATE(216)] = 3526,
  [SMALL_STATE(217)] = 3533,
  [SMALL_STATE(218)] = 3540,
  [SMALL_STATE(219)] = 3547,
  [SMALL_STATE(220)] = 3554,
  [SMALL_STATE(221)] = 3561,
  [SMALL_STATE(222)] = 3568,
  [SMALL_STATE(223)] = 3575,
  [SMALL_STATE(224)] = 3582,
  [SMALL_STATE(225)] = 3589,
  [SMALL_STATE(226)] = 3596,
  [SMALL_STATE(227)] = 3603,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 9, 0, 23),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 9, 0, 23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 24),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 24),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 25),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 25),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 10, 0, 26),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 10, 0, 26),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(54),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(75),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat2, 2, 0, 0), SHIFT_REPEAT(32),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 28),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 28),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 29),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 29),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 11, 0, 30),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 11, 0, 30),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn, 12, 0, 32),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn, 12, 0, 32),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_line, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_line, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 2, 0, 27),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_defn_rule, 3, 0, 31),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 4, 0, 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 9),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 4, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 4, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 19),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 19),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(106),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(88),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(88),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 2, 0, 8), SHIFT_REPEAT(93),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 15),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 15),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 21),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 21),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 4, 0, 13),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 4, 0, 13),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 7, 0, 22),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 7, 0, 22),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__item_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 17),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 17),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__item, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 6, 0, 20),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 6, 0, 20),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_homomorphism, 5, 0, 7),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_homomorphism, 5, 0, 7),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production, 5, 0, 16),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production, 5, 0, 16),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embed, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_name, 1, 0, 14),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_production_name, 1, 0, 14),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 6, 0, 11),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass, 5, 0, 10),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defn_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metavardefn, 5, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defnclass_repeat2, 2, 0, 0), SHIFT_REPEAT(177),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 5, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 5, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dots, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dots, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 4, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 6, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 6, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__element, 7, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 7, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_homomorphism_repeat1, 1, 0, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 5),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_element, 1, 0, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hom_element, 1, 0, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hom_inner_block, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 2, 0, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_desc, 1, 0, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comprehension_string, 1, 0, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_separator, 6, 0, 34),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_production_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat2, 2, 0, 0),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat2, 2, 0, 0), SHIFT_REPEAT(109),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 4, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat3, 2, 0, 0),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hom_inner_repeat3, 2, 0, 0), SHIFT_REPEAT(117),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 2, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 2, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_desc_list1, 1, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_prefix, 3, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_desc_list1_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_mod, 1, 0, 12),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 1, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, 0, 33),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dash_line, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comprehension_bound, 5, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defnclass_name, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defn_name, 1, 0, 18),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hom_inner, 5, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [626] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__eof = 0,
  ts_external_token_hom_string = 1,
  ts_external_token_hom_inner_string_init = 2,
  ts_external_token_hom_inner_string_left = 3,
  ts_external_token_hom_inner_string_right = 4,
  ts_external_token_hom_inner_comp_left = 5,
  ts_external_token_error_sentinel = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_hom_string] = sym_hom_string,
  [ts_external_token_hom_inner_string_init] = sym_hom_inner_string_init,
  [ts_external_token_hom_inner_string_left] = sym_hom_inner_string_left,
  [ts_external_token_hom_inner_string_right] = sym_hom_inner_string_right,
  [ts_external_token_hom_inner_comp_left] = sym_hom_inner_comp_left,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token_hom_string] = true,
    [ts_external_token_hom_inner_string_init] = true,
    [ts_external_token_hom_inner_string_left] = true,
    [ts_external_token_hom_inner_string_right] = true,
    [ts_external_token_hom_inner_comp_left] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_hom_string] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
  },
  [4] = {
    [ts_external_token_hom_inner_string_left] = true,
  },
  [5] = {
    [ts_external_token_hom_inner_comp_left] = true,
  },
  [6] = {
    [ts_external_token_hom_inner_string_init] = true,
  },
  [7] = {
    [ts_external_token_hom_inner_string_right] = true,
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
