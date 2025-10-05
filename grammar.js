const name = /[\W_π][\w_π]*/
const sep = /[\n;]/

module.exports = grammar({
  name: 'goal',

  extras: $ => [/\s/],

  rules: {
    program: $ => repeat(choice(
      token(/\/[^\n]*/),                                // comment
      seq(optional($.E, ":"), $.E, optional(";", $.E)), // E : E ; E
      $.e                                               // e
    )),

    E: $ => prec.left(seq(
      $.monadic_expr,
      repeat(choice(seq($.diadic, $.monadic_expr), $.monadic_expr))
    )),

    e: $ => choice(
      seq($.n, $.v, $.e), // n v e
      seq($.t, $.e),      // t e
    ),

    t: $ => choice($.n, $.v),

    v: $ => choice(seq($.t, $.A), $.V),

    n: $ => choice(),

    monadic_expr: $ => seq(repeat($.monadic), $.primary),

    assign: $ => prec(1, seq(name, ':', $.E)),

    primary: $ => choice( $.array, $.atom, $.group ),

    atom: $ => choice(
      $.number,
      name,
      $.string,
      $.lambda,
      $.cond,
    ),

    array: $ => prec(3, seq('(', $.body, ')')),

    group: $ => prec(2, seq('(', $.E, ')')),

    body: $ => repeat1($.expr),

    diadic: _ => choice(':', '+', '-', '*', '%', '!', '&', '|', '<', '>', '=', '~', ',', '^', '#', '_', '$', '?', '@', '.', "'", ';'),

    monadic: _ => choice('+', '-', '!', '~', 'abs'),

    // Number literals supporting the specified formats
    number: $ => token(choice(
      /0n/i,         // null
      /0w/i,         // infinity
      /0b[01]+/i,    // binairy
      /0x[\da-f]+/i, //
      /(?:\d+\.\d+(?:e[+-]?\d+)?|\d+(?:e[+-]?\d+)?)/i,
    )),

    string: _ => token(seq('"', repeat(choice(/[^"\\]/, seq('\\', /./))), '"')),

    lambda: $ => seq('{', optional(seq($.args, optional(';'))), optional($.E), '}'),

    args: _ => seq('[', name, repeat(seq(';', name)), ']'),

    cond: $ => seq('?[', $.E, sep, $.E, sep, $.E, ']'),
  }
});
