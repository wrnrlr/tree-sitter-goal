export default grammar({
  name: 'goal',
  supertypes: $ => [$.atom, $.N, $.t],
  conflicts: $ => [[$.n, $.strand], [$.strand], [$.atom, $.args], [$.e, $.te]],
  extras: $ => [/[\t ]+/],
  rules: {
    S: $ => optional($.E),
    E: $ => repeat1(choice($.e, $.line_comment, token('\n'))),
    e: $ => choice($.nve, $.te, seq('[', optional($.E), ']'), $.t),
    nve: $ => prec.right(seq($.n, $.v, optional($.e))),
    te: $ => prec.right(seq($.t, $.e)),
    t: $ => prec.right(choice($.n, $.v)),
    v: $ => prec.left(choice($.V, $.a, $.A)),
    n: $ => choice($.block, $.strand, $.N),
    N: $ => choice($.atom, $.group, $.lambda),
    V: _ => /[:+\-*%!&|<>=~,^#_$?@.;]/,
    A: _ => token(choice('/', '\\', "'")),
    a: $ => seq($.v, token.immediate(choice('/', '\\', "'"))),
    atom: $ => choice( $.nil, $.infinity, $.int, $.number, $.hex, $.exponential, $.time, $.name, $.string ),
    strand: $ => seq( $.N, repeat1($.N) ),
    block: $ => seq($.t, token.immediate('['), optional($.E), ']'),
    group: $ => seq('(', optional($.E), ')'),
    lambda: $ => seq('{', optional($.args), optional($.E), '}'),
    args: $ => seq('[', $.name, repeat(seq(';', $.name)), ']'),
    nil: _ => /0n/i,
    infinity: _ => /0w/i,
    string: _ => seq('"', repeat(choice(/[^"\\]/, seq('\\', /./))), '"'),
    // binairy
    int: _ => token(/-?\d+/),
    number: _ => token(/-?\d+\.\d+/),
    hex: _ => token(/-?0x[\da-f]+/i),
    exponential: _ => token(/-?\d+e[+-]?\d+/i),
    name: _ => /[a-zA-Z_π][\w_π]*/,
    time: _ => token(/-?(\d+(?:\.\d+)?(?:e[+-]?\d+)?[hms])+/),
    line_comment: _ => /\/[^\n]*/,
    // block_comment: null, // start with a single slash on a line and end with only a single bashslash on line
    // inline_comment: null, // comment that starts after whitespace and a slash
  }
});
