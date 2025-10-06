/*
Be careful with whitespace, it sometimes affect hopw things are parsed.
Arrays for example

Array of 3 numbers
```goal
1 2 3
```

binairy/dyadic operator Array of 3 numbers
```goal
1 2 3 + 4 5 6
```


*/

export default grammar({
  name: 'goal',
  supertypes: $ => [$.e, $.N],
  conflicts: $ => [],
  rules: {
    // E: E ; E | e
    E: $ => repeatSep(choice(
      $.comment,
      repeatSep($.e, ';')
    ), '\n'),
    // e: n v e | te | ε
    e: $ => choice(
      $.nve,
      $.te,
      $.empty // I am not sure about this, the grammer says this should be empty, not sure they mean "nothing" on an lexical level, or the semantic construction "empty array with token $.empty".
    ),
    nve: $ => seq($.n, $.v, $.e),
    te: $ => seq($.t, $.e),
    // t : n | v
    t: $ => prec.right(choice(
      $.n,
      $.v
    )),
    // t A | V
    v: $ => choice(
      seq($.t, /\s+/, $.A),
      $.V
    ),
    // n : t [ E ] | ( E ) | { E } | N
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
