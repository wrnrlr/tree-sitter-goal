const decimal = /\d(_?\d)*/
const name = /\W\w*/

module.exports = grammar({
  name: 'goal',

  conflicts: $ => [
  ],

  extras: $ => [/\s/],

  rules: {
    // The root rule for the grammar: statements separated by separators
    program: $ => seq($.statement, repeat(seq($.sep, $.statement)), optional($.sep)),

    statement: $ => choice($.expression, $.comment),

    // right-associative binary operations
    expression: $ => choice(
      $.monadic,
      prec(2, seq($.monadic, $.diadic, field('right', $.expression)))
    ),

    primary: $ => choice(
      $.atom,
      $.group
    ),

    atom: $ => choice(
      $.number,
      name,
      $.string,
      $.array,
      $.unparenthesized_array,
      $.lambda,
      $.cond
    ),

    array: $ => prec(2, seq('(', optional($.array_body), ')')),

    group: $ => prec(1, seq('(', $.expression, ')')),

    array_body: $ => seq(
      $.expression,
      repeat1(seq($.sep, $.sep))
    ),

    diadic: _ => choice(':', '+', '-', '*', '%', '!', '&', '|', '<', '>', '=', '~', ',', '^', '#', '_', '$', '?', '@', '.', "'"),

    monadic: _ => choice('+', '-', '!'),

    // Number literals supporting the specified formats
    number: $ => token(choice(
        /0x[\da-f]+/i,
        /0[bB][01](?:_?[01])*/,
        /(?:\d+\.\d+(?:e[+-]?\d+)?|\d+(?:e[+-]?\d+)?)/i,
      )
    ),

    // String literals
    string: _ => token(seq('"', repeat(choice(/[^"\\]/, seq('\\', /./))), '"')),

    unparenthesized_array: $ => prec.left(-1, seq(
      $.primary,
      repeat1($.primary)
    )),

    lambda: $ => seq('{', optional(seq($.args, optional(';'))), optional($.expression), '}'),

    args: _ => seq('[', name, repeat(seq(';', name)), ']'),

    cond: $ => seq('?[', $.expression, $.sep, $.expression, $.sep, $.expression, ']'),

    sep: _ => choice('\n', ';'),

    comment: _ => token(/\/[^\n]*/),
  }
});
