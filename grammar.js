export default grammar({
  name: 'goal',
  supertypes: $ => [$.atom, $.N, $.t],
  conflicts: $ => [[$.n, $.strand], [$.strand], [$.atom, $.args], [$.e, $.te]],
  extras: $ => [/[\t ]+/],
  rules: {
    source_file: $ => optional($.E),
    // E: E ; E | e
    E: $ => repeat1(choice($.line_comment, $.e, token('\n'))),
    // e : n v e | t e | ε
    e: $ => choice($.nve, $.te, seq('[', optional($.E), ']'), $.t),
    nve: $ => prec.right(seq($.n, $.v, optional($.e))),
    te: $ => prec.right(seq($.t, $.e)),
    // t : n | v
    t: $ => prec.right(choice( $.n, $.v )),
    // t A | V
    v: $ => prec.left(choice(
      $.V,
      seq($.v, token.immediate(choice('/', '\\', "'"))),
      $.A
    )),
    n: $ => choice(
      seq($.t, token.immediate('['), optional($.E), ']'),
      $.strand,
      $.N
    ),
    N: $ => choice( $.atom, $.group, $.lambda ),
    strand: $ => seq( $.N, repeat1($.N) ),
    V: $ => /[:+\-*%!&|<>=~,^#_$?@.;]/,
    A: $ => token(choice('/', '\\', "'")),
    atom: $ => choice(
      $.nil, $.infinity,
      $.int, $.decimal, $.hexadecimal, $.standard_form,
      $.time,
      $.name, $.string
    ),
    group: $ => seq('(', optional($.E), ')'),
    lambda: $ => seq('{', optional($.args), optional($.E), '}'),
    nil: _ => /0n/i,
    infinity: _ => /0w/i,
    string: _ => seq('"', repeat(choice(/[^"\\]/, seq('\\', /./))), '"'),
    args: $ => seq('[', $.name, repeat(seq(';', $.name)), ']'),
    int: _ => token(/-?\d+/),
    decimal: _ => token(/-?\d+\.\d+/),
    hexadecimal: _ => token(/-?0x[\da-f]+/i),
    standard_form: _ => token(/-?\d+e[+-]?\d+/),
    name: _ => /[a-zA-Z_π][\w_π]*/,
    time: _ => token(/-?(\d+(?:\.\d+)?(?:e[+-]?\d+)?[hms])+/),
    line_comment: _ => /\/[^\n]*/,
    // block_comment: null, // start with a single slash on a line and end with only a single bashslash on line
    // inline_comment: null, // comment that starts after whitespace and a slash
  }
});
