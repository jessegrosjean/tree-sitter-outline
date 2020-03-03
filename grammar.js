module.exports = grammar({
  name: 'outline',

  extras: $ => [],
  inline: $ => [],

  externals: $ => [
    $._indent,
    $._dedent,
    $._newline,
  ],

  rules: {
    outline: $ => seq(optional(/\s*/), repeat($.item)),

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