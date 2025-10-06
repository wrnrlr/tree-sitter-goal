/*
Expression is a sequence of noun/verb chains, possibly grouped, possibly separated by semicolons.
Verbs may be atomic or modified by adverbs.
Nouns may be atoms, grouped expressions, blocks, or indexed terms.

Be careful with whitespace, it sometimes affect hopw things are parsed.
Arrays for example

Array of 3 numbers
```goal
1 2 3
```

binairy/dyadic operator Array of 3 numbers plus 3 other numbers
```goal
1 2 3 + 4 5 6
```

An group can even be spread out over multiple lines
```goal
a: (1 2
3 4)
```
*/

export default grammar({
  name: 'goal',
  supertypes: $ => [$.atom],
  conflicts: $ => [[$.n, $.strand], [$.strand], [$.atom, $.args], [$.e, $.te]],
  extras: $ => [/[\t ]+/],
  rules: {
    source_file: $ => optional($.E),
    // E: E ; E | e
    // E: $ => seq(
    //   optional(choice('\n', ';')),
    //   choice($.comment, $.e),
    //   repeat(seq(choice('\n', ';'), choice($.comment, $.e))),
    //   optional(choice('\n', ';'))
    // ),
    E: $ => repeat1(choice($.comment, $.e, token('\n'))),
    e: $ => choice($.nve, $.te, seq('[', optional($.E), ']'), $.t),
    nve: $ => prec.right(seq($.n, $.v, optional($.e))),
    te: $ => prec.right(seq($.t, $.e)),
    // t : n | v
    t: $ => prec.right(choice(
      $.n,
      $.v
    )),
    // t A | V
    v: $ => prec.left(choice(
      $.V,
      seq($.v, token.immediate(choice('/', '\\', "'"))),
      $.A
    )),
    n: $ => choice(
      seq($.t, token.immediate('['), optional($.E), ']'),
      $.strand,
      $.simple_noun
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
      $.name,
      $.string,
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
