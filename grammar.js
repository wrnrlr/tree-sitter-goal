const name = /[\W_π][\w_π]*/
const sep = /[\n;]/
const comment = token(/\/[^\n]*/)

module.exports = grammar({
  name: 'goal',

  conflicts: $ => [
    [$.diadic, $.monadic],
  ],

  extras: $ => [/\s/],

  rules: {
    // The root rule for the grammar: statements separated by separators
    program: $ => repeat($.statement),

    statement: $ => choice($.assign, $.expr, comment),

    expr: $ => $.binary_expr,

    binary_expr: $ => prec.left(seq($.monadic_expr, repeat(choice(seq($.diadic, $.monadic_expr), $.monadic_expr)))),

    monadic_expr: $ => seq(repeat($.monadic), $.primary),

    assign: $ => prec(1, seq(name, ':', $.expr)),

    primary: $ => choice( $.array, $.atom, $.group ),

    atom: $ => choice(
      $.number,
      name,
      $.string,
      $.lambda,
      $.cond,
    ),

    array: $ => prec(3, seq('(', $.body, ')')),

    group: $ => prec(2, seq('(', $.expr, ')')),

    body: $ => repeat1($.expr),

    diadic: _ => choice(':', '+', '-', '*', '%', '!', '&', '|', '<', '>', '=', '~', ',', '^', '#', '_', '$', '?', '@', '.', "'", ';'),

    monadic: _ => choice('+', '-', '!', '~', 'abs'),

    // Number literals supporting the specified formats
    number: $ => token(choice(
      /0x[\da-f]+/i,
      /0[bB][01](?:_?[01])*/,
      /(?:\d+\.\d+(?:e[+-]?\d+)?|\d+(?:e[+-]?\d+)?)/i,
    )),

    string: _ => token(seq('"', repeat(choice(/[^"\\]/, seq('\\', /./))), '"')),

    lambda: $ => seq('{', optional(seq($.args, optional(';'))), optional($.expr), '}'),

    args: _ => seq('[', name, repeat(seq(';', name)), ']'),

    cond: $ => seq('?[', $.expr, ';', $.expr, ';', $.expr, ']'),
  }
});
