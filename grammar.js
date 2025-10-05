const name = /[\W_π][\w_π]*/
const sep = /[\n;]/

const int = /\d+/,
      decimal = /\d+\.\d+/,
      hexadecimal = /0x[\da-f]+/i,
      standard_form = /\d+e-?\d+/

export default grammar({
  name: 'goal',
  rules: {
    E: $ => repeat(seq(choice(
      $.comment,
      seq($.E, ';', $.E),
      $.e
    ), /\n/)),
    comment: _ => choice(
      /\/^.*$/,
      /^\/\r?\n[\s\S]*?\r?\n\\$/m
    ),
    e: $ => choice(
      seq($.n, $.v, $.e),
      seq($.t, $.e),
    ),
    t: $ => choice(
      $.n,
      $.v
    ),
    v: $ => choice(
      seq($.t, $.A),
      $.V
    ),
    n: $ => choice(
      seq($.t, '[', $.E, ']'),
      seq('?[', $.E, ']'),
      seq('(', $.E, ')'),
      seq('{', optional($.args), $.E, '}'),
      $.N
    ),
    N: $ => choice(
      $.empty, $.nil, $.infinity,
      int, decimal, hexadecimal, standard_form,
      name,
      $.string,
      $.lambda,
      $.cond,
    ),
    empty: _ => /(\s*)/,
    nil: _ => /0n/i,
    infinity: _ => /0w/i,
    monadic_expr: $ => seq(repeat($.monadic), $.primary),
    assign: $ => prec(1, seq(name, ':', $.E)),
    primary: $ => choice( $.array, $.atom, $.group ),
    array: $ => prec(3, seq('(', $.body, ')')),
    group: $ => prec(2, seq('(', $.E, ')')),
    diadic: _ => /[:+\-*%!&|<>=~,^#_$?@.;]/,
    monadic: _ => choice('+', '-', '!', '~', 'abs'),
    adverb: $ => choice('/', '\\', "'"),
    string: _ => token(seq('"', repeat(choice(/[^"\\]/, seq('\\', /./))), '"')),
    lambda: $ => seq('{', optional(seq($.args, optional(';'))), optional($.E), '}'),
    args: _ => seq('[', name, repeat(seq(';', name)), ']')
  }
});
