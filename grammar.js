const sep = /[\n;]/

export default grammar({
  name: 'goal',
  rules: {
    E: $ => repeat(seq(choice(
      $.comment,
      // seq($.E, /\s*;\s/, $.E),
      $.e
    ), choice('\n', ';'))),
    e: $ => choice(
      prec(2, seq($.n, $.v, $.e)),
      prec(1, seq($.t, $.e)),
      $.N
    ),
    t: $ => choice(
      $.n,
      $.v
    ),
    v: $ => choice(
      // seq($.t, /\s+/, $.A),
      $.V
    ),
    n: $ => choice(
      // seq($.t, '[', $.E, ']'),
      // seq('?[', $.E, ']'),
      seq(/\(/, $.E, /\)/),
      // seq('{', optional($.args), $.E, '}'),
      $.N
    ),
    V: $ => /[:+\-*%!&|<>=~,^#_$?@.;]/,
    A: $ => token(choice('/', '\\', "'")),
    N: $ => choice(
      $.empty, $.nil, $.infinity,
      $.int, $.decimal, $.hexadecimal, $.standard_form,
      $.name,
      $.string,
    ),
    empty: _ => /\(\s*\)/,
    nil: _ => /0n/i,
    infinity: _ => /0w/i,
    diadic: _ => /[:+\-*%!&|<>=~,^#_$?@.;]|::/,
    monadic: _ => token(choice(':', '+', '-', '!', '~', '$', '|', '=', '*', '%', '@', '?', 'abs')),
    string: _ => seq('"', repeat(choice(/[^"\\]/, seq('\\', /./))), '"'),
    args: $ => seq('[', $.name, repeat(seq(';', $.name)), ']'),
    int: _ => /\d+/,
    decimal: _ => /\d+\.\d+/,
    hexadecimal: _ => /0x[\da-f]+/i,
    standard_form: _ => /\d+e-?\d+/,
    name: _ => /[\W_π][\w_π]*/,
    comment: _ => choice(
      /\/[^\n]*/,
    ),
  }
});
