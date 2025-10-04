module.exports = grammar({
  name: 'goal',

  conflicts: $ => [
    [$.unparenthesized_array],
    [$.array_body, $.unparenthesized_array],
    [$.atom, $.array_element],
    [$.primary, $.array_element]
  ],

  rules: {
    // The root rule for the grammar: statements are expressions separated by newlines or semicolons
    program: $ => seq($.expression, repeat(seq($.sep, $.expression)), optional($.sep)),

    // Main expression rule: right-associative binary operations
    expression: $ => choice(
      $.unary_expression,
      prec(2, seq(
        $.unary_expression,
        $.binary_operator,
        field('right', $.expression)  // Recursive on the right for right-associativity
      ))
    ),

    // Unary expression: prefix operators, right-associative for chains
    unary_expression: $ => choice(
      $.primary,
      prec(1, seq(
        $.unary_operator,
        field('operand', $.unary_expression)  // Recursive for multiple unaries
      ))
    ),

    // Primary expressions: atoms or parenthesized
    primary: $ => choice(
      $.atom,
      $.group
    ),

    // Atomic expressions: numbers, identifiers, strings, arrays, or unparenthesized arrays
    atom: $ => choice(
      $.number,
      $.identifier,
      $.string,
      $.array,
      $.unparenthesized_array
    ),

    // Elements that can be in unparenthesized arrays: simple atoms or grouped expressions
    array_element: $ => choice(
      $.number,
      $.identifier,
      $.string,
      $.array,
      $.group
    ),

    // Parenthesized expression for grouping
    group: $ => seq(
      '(',
      $.expression,
      ')'
    ),

    // Array expressions
    array: $ => prec(1, seq(
      '(',
      optional($.array_body),
      ')'
    )),

    array_body: $ => seq(
      $.expression,
      repeat1(seq($.array_sep, $.expression))
    ),
    array_sep: $ => prec(1, choice(' ', ';', '\n', seq(';', ' '))),

    // Binary operators (all treated with same precedence, right-associative)
    binary_operator: $ => choice('+', '-', '*', '/'),

    // Unary operators (subset for prefix + and -)
    unary_operator: $ => choice('+', '-'),

    // Number literals supporting the specified formats
    number: $ => {
      const decimal = /\d(_?\d)*/
      const hexLiteral = seq( choice('0x', '0X'), /[\da-fA-F](_?[\da-fA-F])*/, )
      const binaryLiteral = seq(choice('0b', '0B'), /[0-1](_?[0-1])*/)
      const exponent = seq(choice('e', 'E'), seq(optional(choice('-', '+')), decimal))

      const decimalLiteral = choice(
        seq(choice(
          '0', seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimal))),
        ), '.', optional(decimal), optional(exponent)),
        seq('.', decimal, optional(exponent)),
        seq(choice(
          '0', seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimal))),
        ), exponent),
        decimal,
      );

      return token(choice(
        hexLiteral,
        decimalLiteral,
        binaryLiteral,
      ));
    },

    // Simple identifier (alphanumeric starting with letter)
    identifier: $ => /[a-zA-Z_]\w*/,

    // String literals
    string: $ => token(seq('"', repeat(choice(/[^"\\]/, seq('\\', /./))), '"')),

    unparenthesized_array: $ => prec.left(seq(
      $.array_element,
      repeat1(seq(' ', $.array_element))
    )),

    sep: $ => prec(2, choice('\n', ';')),
  }
});
