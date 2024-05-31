module.exports = grammar({
  name: 'ott',

  extras: $ => [/\s/, $.comment],

  //word: $ => $.id,

  rules: {
    // main:
    source_file: $ => repeat($._item),

    _item: $ => choice(
      $.metavardefn,
      seq('grammar', repeat($.grammar_rule)),
      seq(token(prec(10, 'defns')), $.defnclass),
      // TODO: ...
    ),

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % defnclass
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    defnclass: $ => seq(
      alias($.string, 'class_name'),
      '::',
      alias($.string, 'namespace_prefix'),
      '::=',
      repeat($.homomorphism),
      repeat($.defn),
    ),

    defn: $ => seq(
      'defn',
      repeat($.element),
      '::',
      repeat($.id),
      '::',
      $.string,
      repeat($.homomorphism),
      'by',
      '\n',
      repeat($.defn_rule),
    ),

    defn_rule: $ => seq(
      repeat($.rule_line),
      $.rule_separator,
      // TODO: requires a newline after the conclusion and so EOF is not supported
      $.rule_line,
    ),

    rule_separator: $ => seq(
      token(prec(2, '----')),
      token.immediate(repeat('-')),
      '::',
      alias($.string, 'rule_name'),
      '\n',
    ),

    rule_line: _ => /.*\n/,


    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    // % grammar_rule
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    grammar_rule: $ => seq(
      $._id_desc_list1,
      '::',
      $.string,
      '::=',
      repeat($.homomorphism),
      repeat($.production),
    ),

    production: $ => seq(
      '|',
      repeat($.element),
      '::',
      repeat($.id),
      '::',
      $.string,
      // TODO: bindspecs,
      repeat($.homomorphism),
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
    // % homomorphism
    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    homomorphism: $ => seq(
      '{{',
      alias($.string, 'hom_name'),
      repeat(alias($.string, 'hom_string')),
      token(prec(1, '}}')),
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
    id: _ => /[a-zA-Z\d]+/,
    string: _ => /\S+/,
  }
});
