module.exports = grammar({
  name: 'ott',

  extras: $ => [/\s/, $.comment],

  externals: $ => [
    $.line_cont,
    $.line_end,
    $.hom_string,
    $.hom_inner_string,
    $.error_sentinel,
  ],

  rules: {
    source_file: $ => repeat($._item),

    _item: $ => choice(
      $.metavardefn,
      seq(token(prec(10, 'grammar')), repeat($.grammar_rule)),
      seq(token(prec(10, 'embed')), $.embed),
      seq(token(prec(10, 'defns')), $.defnclass),
      // TODO: ...
    ),

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % defnclass
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

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
      token(prec(10, 'defn')),
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
      token(prec(2, '----')),
      token.immediate(repeat('-')),
    ),

    rule_line: $ => seq(
      repeat1($._element),
      $._line_end,
    ),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % grammar_rule
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

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

    production_mod: $ => alias(/[a-zA-Z\d_]+/, 'production_modifier'),
    production_name: $ => alias($.id, 'production_name'),

    _element: $ => choice(
      $.string,
      $.dots,
      seq('</', repeat($._element), '//', $.comprehension_bound, '/>'),
      seq('</', repeat($._element), '//', $.string, '//', $.comprehension_bound, '/>'),
    ),

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % metavardefn
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    metavardefn: $ => seq(
      choice('metavar', 'indexvar'),
      $._string_desc_list1,
      '::=',
      repeat($.homomorphism),
    ),

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % string_desc_list
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

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
      alias(/\s+/, '_hom_name_space'),
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
      repeat1($._hom_inner_string),
      seq(repeat($._hom_inner_string), $.dots, repeat($._hom_inner_string)),
      seq('</', repeat($._hom_inner_string), '//', $.comprehension_bound, '/>'),
    ),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % other
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    _line_cont: $ => alias($.line_cont, 'line_cont'),
    _line_end: $ => alias($.line_end, 'line_end'),
    _hom_string: $ => alias($.hom_string, 'hom_string'),
    _hom_inner_string: $ => alias($.hom_inner_string, $.string),

    comprehension_bound: $ =>
      seq($._comprehension_string, optional(seq('IN', $._comprehension_string, optional(seq($.dots, $._comprehension_string)))),),
    _comprehension_string: $ => alias(/[a-zA-Z\d_]+/, $.string),

    comment: _ => /%.*/,
    dots: _ => choice(
      '..',
      '...',
      '....',
    ),
    namespace_prefix: $ => choice(
      $._namespace_prefix_string,
      seq("\'", optional($._namespace_prefix_string), "\'"),
    ),
    _namespace_prefix_string: _ => /[a-zA-Z\d_\-]+/,
    // TODO: change to use allowed range of identifiers
    id: _ => /[a-zA-Z\d_]+/,
    string: _ => /\S+/,
  }
});
