module.exports = grammar({
  name: 'goal',

  extras: $ => [/\s/],

  rules: {
    source_file: $ => repeat(choice($.statement, $.comment)),

    statement: $ => seq(
      optional($.expression),
      choice(';', '\n')
    ),

    expression: $ => choice(
      $.literal,
      $.function_call,
      $.array,
      $.indexing,
      $.dict_expression,
      $.field_access,
      $.assignment,
      $.lambda,
      $.conditional,
      $.binary_expression,
      $.unary_expression,
      $.identifier
    ),

    literal: $ => choice(
      $.number,
      $.string,
      $.symbol
    ),

    number: $ => /\d+(\.\d+)?/,
    string: $ => choice(
      /"([^"\\]|\\.)*"/,
      /qq\/[^\/]*\//,
      /rq\/[^\/]*\//
    ),
    symbol: $ => /`[a-zA-Z_][a-zA-Z0-9_]*/,
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*(\.[a-zA-Z_][a-zA-Z0-9_]*)* /,

    array: $ => seq('(', repeat($.expression), ')'),

    assignment: $ => choice(
      seq($.identifier, ':', $.expression),
      seq($.identifier, '::', $.expression),
      seq($.identifier, choice('+:', '-:', '*:', '/:'), $.expression)
    ),

    lambda: $ => seq('{', repeat(seq($.expression, optional(';'))), '}'),

    conditional: $ => seq(
      '?[',
      $.expression,
      ';',
      $.expression,
      ';',
      $.expression,
      ']'
    ),

    indexing: $ => prec(3, seq(
      $.expression,
      '[',
      optional(seq($.expression, repeat(seq(';', $.expression)))),
      ']'
    )),

    dict_expression: $ => prec.left(4, seq($.expression, '!', repeat($.expression))),

    field_access: $ => prec(5, seq($.expression, '..', $.identifier)),

    binary_expression: $ => choice(
      prec.left(1, seq($.expression, '+', $.expression)),
      prec.left(1, seq($.expression, '-', $.expression)),
      prec.left(2, seq($.expression, '*', $.expression)),
      prec.left(2, seq($.expression, '/', $.expression)),
      prec.left(1, seq($.expression, '&', $.expression)),
      prec.left(1, seq($.expression, '|', $.expression)),
      prec.left(1, seq($.expression, '=', $.expression)),
      prec.left(1, seq($.expression, '<', $.expression)),
      prec.left(1, seq($.expression, '>', $.expression))
    ),

    unary_expression: $ => choice(
      seq('~', $.expression),
      seq('-', $.expression),
      seq('+', $.expression)
    ),

    function_call: $ => prec(2, choice(
      seq($.identifier, '(', ')'),
      seq($.identifier, '(', $.expression, repeat(seq(',', $.expression)), ')')
    )),

    comment: $ => choice(
      /\/\/.*/,
      /\/[\s\S]*?\\\n/
    )
  }
});