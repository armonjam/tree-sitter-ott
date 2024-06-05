module.exports = grammar({
  name: 'ott',

  extras: $ => [/\s/, $.comment],

  externals: $ => [
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
      field('element', repeat($.element)),
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
      '::',
      field('rule_name', $.rule_name),
      $._line_end,
    ),

    rule_name: $ => alias($.id, 'rule_name'),

    dash_line: _ => seq(
      token(prec(2, '----')),
      token.immediate(repeat('-')),
    ),

    rule_line: $ => seq(
      repeat1(alias($.element, 'element')),
      $._line_end,
    ),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % grammar_rule
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    grammar_rule: $ => seq(
      $._id_desc_list1,
      '::',
      $.namespace_prefix,
      '::=',
      repeat($.homomorphism),
      repeat($.production),
    ),

    production: $ => seq(
      '|',
      field('element', repeat($.element)),
      '::',
      field('modifier', repeat($.production_mod)),
      '::',
      field('production_name', $.production_name),
      // TODO: bindspecs,
      field('homomorphism', repeat($.homomorphism)),
    ),

    production_mod: $ => alias($.id, 'production_modifier'),
    production_name: $ => alias($.id, 'production_name'),

    element: $ => choice(
      alias($.string, 'symbol'),
      $.dots,
      seq('</', repeat($.element), '//', $.comprehension_bound, '/>'),
      seq('</', repeat($.element), '//', $.string, '//', $.comprehension_bound, '/>'),
    ),

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % metavardefn
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    /// metavar a, b {{ tex gg |- \ell }} ::=
    metavardefn: $ => seq(
      choice('metavar', 'indexvar'),
      $._id_desc_list1,
      '::=',
      repeat($.homomorphism),
    ),

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % id_desc_list
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    _id_desc_list1: $ => seq(
      $.id_desc,
      repeat(seq(',', $.id_desc))
    ),
    id_desc: $ => seq($.id, repeat($.homomorphism)),

    comprehension_bound: $ =>
      // TODO: are `id`s okay here?
      seq($.id, optional(seq('IN', $.id, optional(seq($.dots, $.id)))),),


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
      // NOTE: that _hom_inner_string is not required for all of these, just the ones
      // that appear at the end of the rule. But to stay consistent we use it everywhere
      // here.
      repeat1($._hom_inner_string),
      seq(repeat($._hom_inner_string), $.dots, repeat($._hom_inner_string)),
      seq('</', repeat($._hom_inner_string), '//', $.comprehension_bound, '/>'),
    ),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % other
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    _line_end: $ => alias($.line_end, 'line_end'),
    _hom_string: $ => alias($.hom_string, 'hom_string'),
    _hom_inner_string: $ => alias($.hom_inner_string, 'hom_inner_string'),
    comment: _ => /%.*/,
    dots: _ => choice(
      '..',
      '...',
      '....',
    ),
    namespace_prefix: $ => choice(
      alias($.id, 'id'),
      seq("\'", optional(alias($.id, 'q_id')), "\'"),
    ),
    // TODO: change to use allowed range of identifiers
    id: _ => /[a-zA-Z\d_]+/,
    // TODO: I think `string` conflicts with stuff in queries/highlights.scm
    // so we might wanna change the name here.
    string: _ => /\S+/,
  }
});
