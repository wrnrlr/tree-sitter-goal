module.exports = grammar({
  name: 'simple_expression',

  rules: {
    // The root rule for the grammar
    program: $ => $.expression,

    // Main expression rule: right-associative binary operations
    expression: $ => choice(
      $.unary_expression,
      seq(
        $.unary_expression,
        $.binary_operator,
        field('right', $.expression)  // Recursive on the right for right-associativity
      )
    ),

    // Unary expression: prefix operators, right-associative for chains
    unary_expression: $ => choice(
      $.primary,
      seq(
        $.unary_operator,
        field('operand', $.unary_expression)  // Recursive for multiple unaries
      )
    ),

    // Primary expressions: atoms or parenthesized
    primary: $ => choice(
      $.atom,
      $.parenthesized_expression
    ),

    // Atomic expressions: numbers or identifiers
    atom: $ => choice(
      $.number,
      $.identifier
    ),

    // Parenthesized expression for grouping
    parenthesized_expression: $ => seq(
      '(',
      $.expression,
      ')'
    ),

    // Binary operators (all treated with same precedence, right-associative)
    binary_operator: $ => choice('+', '-', '*', '/'),

    // Unary operators (subset for prefix + and -)
    unary_operator: $ => choice('+', '-'),

    // Number literals supporting the specified formats
    number: $ => {
      const hexLiteral = seq(
        choice('0x', '0X'),
        /[\da-fA-F](_?[\da-fA-F])*/,
      )
      const decimalDigits = /\d(_?\d)*/
      const signedInteger = seq(optional(choice('-', '+')), decimalDigits)
      const exponentPart = seq(choice('e', 'E'), signedInteger)

      const binaryLiteral = seq(choice('0b', '0B'), /[0-1](_?[0-1])*/)
      const bigintLiteral = seq(choice(hexLiteral, binaryLiteral, octalLiteral, decimalDigits), 'n')

      const decimalLiteral = choice(
        seq(choice(
          '0',
          seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimalDigits))),
        ), '.', optional(decimalDigits), optional(exponentPart)),
        seq('.', decimalDigits, optional(exponentPart)),
        seq(choice(
          '0',
          seq(optional('0'), /[1-9]/, optional(seq(optional('_'), decimalDigits))),
        ), exponentPart),
        decimalDigits,
      );

      return token(choice(
        hexLiteral,
        decimalLiteral,
        binaryLiteral,
      ));
    },

    // Simple identifier (alphanumeric starting with letter)
    identifier: $ => /[a-zA-Z_]\w*/
  }
});
