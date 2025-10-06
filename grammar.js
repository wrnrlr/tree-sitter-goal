export default grammar({
  name: 'goal',
  supertypes: $ => [$.e],
  conflicts: $ => [],
  rules: {
    E: $ => repeatSep(choice(
      $.comment,
      seq( $.e, repeat(seq(';', $.e)) )
    ), '\n'),
    e: $ => choice(
      $.nve,
      $.te,
      $.N
    ),
    nve: $ => seq($.n, $.v, $.e),
    te: $ => seq($.t, $.e),
    t: $ => prec.right(choice(
      $.n,
      $.v
    )),
    v: $ => choice(
      seq($.t, /\s+/, $.A),
      $.V
    ),
    n: $ => choice(
      // seq($.t, '[', $.E, ']'),
      // seq('?[', $.E, ']'),
      // seq(/\(/, $.E, /\)/),
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
    name: _ => /[a-zA-Z_π][\w_π]*/,
    comment: _ => /\/[^\n]*/,
  }
});

function repeatSep(item, separator, trailing = true) {
  return seq(
    item,
    repeat(seq(separator, item)),
    trailing ? optional(separator) : ''
  );
}
