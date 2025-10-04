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
      $.group
    ),

    // Atomic expressions: numbers or identifiers
    atom: $ => choice(
      $.number,
      $.identifier
    ),

    // Parenthesized expression for grouping
    group: $ => seq(
      '(',
      $.expression,
      ')'
    ),

    // Binary operators (all treated with same precedence, right-associative)
    binary_operator: $ => choice('+', '-', '*', '/'),

    // Unary operators (subset for prefix + and -)
    unary_operator: $ => choice('+', '-'),

    // Simple number literal (integer for simplicity)
    number: $ => /\d+/,

    // Simple identifier (alphanumeric starting with letter)
    identifier: $ => /[a-zA-Z_]\w*/
  }
});
