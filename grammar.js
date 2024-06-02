module.exports = grammar({
  name: 'ott',

  extras: $ => [/\s/, $.comment],

  //word: $ => $.id,

  rules: {
    // main:
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
      field('class_name', $.string),
      '::',
      field('namespace_prefix', $.namespace_prefix),
      '::=',
      field('homomorphism', repeat($.homomorphism)),
      field('definition', repeat($.defn)),
    ),

    defn: $ => seq(
      token(prec(10, 'defn')),
      repeat($.element),
      '::',
      repeat($.id),
      '::',
      $.id,   // TODO: replace id
      '::',
      $.namespace_prefix,
      repeat($.homomorphism),
      'by',
      '\n',
      repeat($.defn_rule),
    ),

    defn_rule: $ => seq(
      field('premise', repeat($.rule_line)),
      field('separator', $.rule_separator),
      // TODO: requires a newline after the conclusion and so EOF is not supported
      field('conclusion', $.rule_line),
    ),

    rule_separator: $ => seq(
      field('line', $.dash_line),
      '::',
      field('rule_name', $.string),
      '\n',
    ),

    dash_line: _ => seq(
      token(prec(2, '----')),
      token.immediate(repeat('-')),
    ),

    rule_line: $ => seq(
      repeat1(alias($.element, 'element')),
      '\n'
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
      field('modifier', repeat($.id)),  // TODO: instead of id, use a choice
      '::',
      field('production_name', $.string),
      // TODO: bindspecs,
      field('homomorphism', repeat($.homomorphism)),
    ),

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
    //id_desc_list: $ => optional($._id_desc_list1),
    id_desc: $ => seq($.id, repeat($.homomorphism)),

    /// i IN 1 .. n
    comprehension_bound: $ =>
      seq($.id, optional(seq('IN', $.id, optional(seq($.dots, $.id)))),),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % embed
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // TODO: use specialized homomorphisms like in the specification
    embed: $ => repeat1($.homomorphism),


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % homomorphism
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    // TODO: replace with external parser
    homomorphism: $ => seq(
      field('open', '{{'),
      field('name', $.hom_name),
      field('body', $.hom_body),
      field('close', token(prec(1, '}}'))),
    ),

    hom_name: _ => choice(
      'tex',
      'tex-preamble',
      // TODO: add more hom names
    ),

    hom_body: $ => repeat1(
      alias($.string, 'hom_string')
    ),

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % other
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    comment: _ => token(prec(100, seq(
      '%',
      // TODO: is prec necessary?
      token.immediate(prec(101, /.*/)),
    ))),
    dots: _ => choice(
      '..',
      '...',
      '....',
    ),
    label: $ => alias($.id, 'label'),
    namespace_prefix: $ => choice(
      alias($.id, 'id'),
      seq("\'", optional(alias($.id, 'q_id')), "\'"),
    ),
    id: _ => /[a-zA-Z\d_]+/,
    string: _ => /\S+/,
  }
});
