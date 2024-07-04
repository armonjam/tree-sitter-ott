module.exports = grammar({
  name: 'ott',

  extras: $ => [/\s/, $.comment],

  externals: $ => [
    $.line_cont,
    $._eof,
    $.hom_string,
    $.hom_inner_string_init,
    $.hom_inner_string_left,
    $.hom_inner_string_right,
    $.hom_inner_comp_left,
    $.error_sentinel,
  ],

  rules: {
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % main
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    source_file: $ => repeat($._item),

    _item: $ => choice(
      $.metavardefn,
      seq(token(prec(1, 'grammar')), $._whitespace, repeat($.grammar_rule)),
      seq(token(prec(1, 'embed')), $._whitespace, $.embed),
      seq(token(prec(1, 'defns')), $._whitespace, $.defnclass),
      // TODO: ...
    ),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % definition class
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    defnclass: $ => seq(
      field('class_name', $.defnclass_name),
      '::',
      field('namespace_prefix', $.namespace_prefix),
      '::=',
      field('homomorphism', repeat($.homomorphism)),
      field('definition', repeat($.defn)),
    ),

    defnclass_name: $ => alias($.id, 'defnclass_name'),

    defn: $ => seq(
      token(prec(1, 'defn')),
      $._whitespace,
      field('element', repeat($._element)),
      '::',
      // TODO: Use ids in between here like the spec
      '::',
      field('definition_name', $.defn_name),
      '::',
      field('namespace_prefix', $.namespace_prefix),
      field('homomorphism', repeat($.homomorphism)),
      'by',
      $._line_end,
      field('definition_rule', repeat($.defn_rule)),
    ),

    defn_name: $ => alias($.id, 'defn_name'),

    defn_rule: $ => seq(
      field('premise', repeat($.rule_line)),
      field('separator', $.rule_separator),
      // TODO: requires a newline after the conclusion and so EOF is not supported
      field('conclusion', $.rule_line),
    ),

    rule_separator: $ => seq(
      field('line', $.dash_line),
      $._line_cont,
      '::',
      $._line_cont,
      field('rule_name', $.rule_name),
      $._line_end,
    ),

    rule_name: $ => alias($.id, 'rule_name'),

    dash_line: _ => seq(
      token(prec(1, '----')),
      token.immediate(repeat('-')),
    ),

    rule_line: $ => seq(
      repeat1($._element),
      $._line_end,
    ),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % grammar rule
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    grammar_rule: $ => seq(
      $._string_desc_list1,
      '::',
      $.namespace_prefix,
      '::=',
      repeat($.homomorphism),
      repeat($.production),
    ),

    production: $ => seq(
      // TODO: using bar `|` in  hom_inner causes it to be highlighted, which is undesirable.
      '|',
      field('element', repeat($._element)),
      '::',
      field('modifier', repeat($.production_mod)),
      '::',
      field('production_name', $.production_name),
      // TODO: bindspecs,
      field('homomorphism', repeat($.homomorphism)),
    ),

    production_mod: _ => alias(/[a-zA-Z\d_]+/, 'production_modifier'),
    production_name: $ => alias($.id, 'production_name'),

    _element: $ => choice(
      $.string,
      $.dots,
      seq('</', repeat($._element), '//', $.comprehension_bound, '/>'),
      seq('</', repeat($._element), '//', $.string, '//', $.comprehension_bound, '/>'),
    ),

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % metavariable definition
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    metavardefn: $ => seq(
      choice('metavar', 'indexvar'),
      $._whitespace,
      $._string_desc_list1,
      '::=',
      repeat($.homomorphism),
    ),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % string with homomorphism description
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    _string_desc_list1: $ => seq(
      $.string_desc,
      repeat(seq(',', $.string_desc))
    ),
    string_desc: $ => seq(alias(/[a-zA-Z\d_]+/, $.string), repeat($.homomorphism)),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % embed
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // TODO: use specialized homomorphisms like in the specification
    embed: $ => repeat1($.homomorphism),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % homomorphism
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    homomorphism: $ => seq(
      field('open', '{{'),
      field('name', $.hom_name),
      $._whitespace,
      field('body', alias(repeat($._hom_element), $.hom_body)),
      field('close', '}}'),
    ),

    hom_name: _ => /[a-zA-Z\-]+/,

    _hom_element: $ => choice(
      field('hom_string', $._hom_string),
      field('hom_inner_block', $.hom_inner_block),
      $.dots,
    ),


    hom_inner_block: $ => seq("[[", $._hom_inner, "]]"),

    _hom_inner: $ => choice(
      seq($._hom_inner_string_init, repeat($._hom_inner_string_left), optional(seq($.dots, repeat1($._hom_inner_string_right)))),
      seq('</', repeat($._hom_inner_comp_left), '//', $.comprehension_bound, '/>'),
    ),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % comprehension bound
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    comprehension_bound: $ =>
      seq($._comprehension_string, optional(seq('IN', $._comprehension_string, optional(seq($.dots, $._comprehension_string)))),),
    _comprehension_string: $ => alias(/[a-zA-Z\d_]+/, $.string),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % tokens
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    namespace_prefix: $ => choice(
      $._namespace_prefix_string,
      seq("\'", optional($._namespace_prefix_string), "\'"),
    ),
    _namespace_prefix_string: _ => /[a-zA-Z\d_\-]+/,
    dots: _ => choice(
      '..',
      '...',
      '....',
    ),
    // TODO: change to use allowed range of identifiers
    id: _ => /[a-zA-Z\d_]+/,
    comment: _ => /%.*/,
    string: _ => /\S+/,
    _whitespace: _ => /\s+/,

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % external aliases
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    _line_cont: $ => alias($.line_cont, 'line_cont'),
    _line_end: $ => choice(/\s*(\r?\n)/, $._eof),
    _hom_string: $ => alias($.hom_string, 'hom_string'),
    _hom_inner_string_init: $ => alias($.hom_inner_string_init, $.string),
    _hom_inner_string_left: $ => alias($.hom_inner_string_left, $.string),
    _hom_inner_string_right: $ => alias($.hom_inner_string_right, $.string),
    _hom_inner_comp_left: $ => alias($.hom_inner_comp_left, $.string),
  }
});
