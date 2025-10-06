export default grammar({
  name: 'goal',
  supertypes: $ => [$.atom],
  conflicts: $ => [[$.n, $.strand], [$.strand], [$.atom, $.args], [$.e, $.te]],
  extras: $ => [/[\t ]+/],
  rules: {
    // E: E ; E | e
    E: $ => optional(repeat1(choice($.comment, $.e, token('\n')))),
    e: $ => choice($.nve, $.te, seq('[', optional($.E), ']'), $.t),
    nve: $ => prec.right(seq($.n, $.v, optional($.e))),
    te: $ => prec.right(seq($.t, $.e)),
    // t : n | v
    t: $ => prec.right(choice( $.n, $.v )),
    // t A | V
    v: $ => prec.left(choice(
      $.V, $.A,
      seq($.v, token.immediate(choice('/', '\\', "'"))),
    )),
    n: $ => choice(
      $.strand, $.simple_noun,
      seq($.t, token.immediate('['), optional($.E), ']')
    ),
    simple_noun: $ => choice(
      $.atom,
      seq('(', optional($.E), ')'),
      seq('{', optional($.args), optional($.E), '}')
    ),
    strand: $ => seq(
      $.simple_noun,
      repeat1($.simple_noun)
    ),
    V: $ => /[:+\-*%!&|<>=~,^#_$?@.;]/,
    A: $ => token(choice('/', '\\', "'")),
    atom: $ => choice(
      $.nil, $.infinity,
      $.int, $.decimal, $.hexadecimal, $.standard_form,
      $.name, $.string
    ),
    nil: _ => /0n/i,
    infinity: _ => /0w/i,
    string: _ => seq('"', repeat(choice(/[^"\\]/, seq('\\', /./))), '"'),
    args: $ => seq('[', $.name, repeat(seq(';', $.name)), ']'),
    int: _ => token(/-?\d+/),
    decimal: _ => token(/-?\d+\.\d+/),
    hexadecimal: _ => token(/-?0x[\da-f]+/i),
    standard_form: _ => token(/-?\d+e[+-]?\d+/),
    name: _ => /[a-zA-Z_π][\w_π]*/,
    comment: _ => /\/[^\n]*/,
  }
});
