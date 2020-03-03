module.exports = grammar({
  name: 'outline',

  extras: $ => [],
  inline: $ => [],

  externals: $ => [
    $._start,
    $._indent,
    $._dedent,
    $._newline,
  ],

  rules: {
    outline: $ => seq(repeat($._newline), $._start, repeat($.item)),

    item: $ => seq(
      $.text,
      optional(seq(
        $._indent,
        repeat($.item),
        $._dedent,
      )),
    ),

    text: $ => seq(/\S/, /.*/, optional($._newline)),
  }
});
