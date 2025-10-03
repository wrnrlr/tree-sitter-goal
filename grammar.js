module.exports = grammar({
  name: 'goal',

  extras: $ => [/\s/, /\/\/.*\n?/, /\/[\s\S]*?\\\n/],

  conflicts: $ => [
    [$.function_call, $.atom],
    [$.unary_expression, $.atom]
  ],

  rules: {
    source_file: $ => repeat($.expression),

    expression: $ => prec.left(0, repeat1($.term)),

    term: $ => choice($.binary_expression, $.function_call),

    function_call: $ => seq($.identifier, '(', optional(seq($.expression, repeat(seq(',', $.expression)))), ')'),

    binary_expression: $ => choice(
      $.unary_expression,
      prec.right(1, seq(
        $.binary_expression,
        choice(':', '+', '-', '*', '%', '!', '&', '|', '<', '>', '=', '~', ',', '^', '#', '_', '$', '?', '@', '.' ),
        $.binary_expression
      ))
    ),

    unary_expression: $ => choice(
      seq('~', $.unary_expression),
      seq('-', $.unary_expression),
      seq('+', $.unary_expression),
      seq('::', $.unary_expression),
      seq(':+', $.unary_expression),
      seq(':-', $.unary_expression),
      seq('abs', $.unary_expression),
      seq('!', $.unary_expression),
      $.atom
    ),

    atom: $ => choice(
      $.literal,
      $.symbol,
      $.identifier,
      seq('(', repeat(seq($.expression, optional(';'))), ')'),
      seq('{', repeat(seq($.expression, optional(';'))), '}'),
      seq('?[', $.expression, ';', $.expression, ';', $.expression, ']'),
      seq($.atom, '[', optional(seq($.expression, repeat(seq(';', $.expression)))), ']'),
      seq($.atom, '..', $.identifier),
      seq($.atom, '!', repeat($.expression)),
      seq($.identifier, choice(':', '::', '+:', '-:', '*:', '/:'), $.expression),
      seq($.identifier, '(', optional(seq($.expression, repeat(seq(',', $.expression)))), ')'),
      seq($.atom, choice('/', '\\', '\'', '`'))
    ),

    literal: $ => choice(
      $.number,
      $.string,
      $.regex
    ),

    number: $ => /\d+(\.\d+)?/,

    string: $ => choice(
      /"([^"\\]|\\.)*"/,
      /qq\/[^\/]*\//,
      /rq\/[^\/]*\//
    ),

    regex: $ => /rx\/[^\/]*\//,

    symbol: $ => /`[a-zA-Z_][a-zA-Z0-9_]*/,

    identifier: $ => /[a-zA-Z_π][a-zA-Z0-9_π]*/,

    atom: $ => choice(
      $.literal,
      $.symbol,
      $.identifier,
      seq('(', optional(seq($.expression, repeat(seq(';', $.expression)))), ')'),
      seq('{', optional(seq($.expression, repeat(seq(';', $.expression)))), '}'),
      seq('?[', $.expression, ';', $.expression, ';', $.expression, ']'),
      seq($.atom, '[', optional(seq($.expression, repeat(seq(';', $.expression)))), ']'),
      seq($.atom, '..', $.identifier),
      seq($.atom, choice('/', '\\', '\'', '`'))
    ),


  }
});