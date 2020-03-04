module.exports = grammar({
  name: 'outline',

  extras: $ => [],
  inline: $ => [$._children],

  externals: $ => [
    $._start,
    $._indent,
    $._dedent,
    $._newline,
  ],

  rules: {
    outline: $ => seq(
      repeat($._newline),
      $._start,
      repeat($.item)
    ),

    item: $ => seq(
      /\S/,
      /.*/,
      optional($._newline),
      optional($._children),
    ),

    _children: $ => seq(
      seq(
        $._indent,
        repeat($.item),
        $._dedent,
      )
    )
  }
});