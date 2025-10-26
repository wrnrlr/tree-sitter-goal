(string) @string
(qq) @string
(rq) @string
(rx) @string.regex

(int) @number
(number) @number
(hex) @number
(exponential) @number
(binairy) @number
(duration) @number
(infinity) @constant
(nil) @constant

(name) @variable
(lambda) @function
(args) @punctuation.delimiter
(args (name) @variable.parameter)

(V) @operator
(A) @punctuation.special
(a) @punctuation.special

(inline_comment) @comment
(block_comment) @comment
; (line_comment) @comment

("{" "}" "[" "]" "(" ")") @punctuation.bracket
(";") @punctuation.delimiter


; Strand and expressions
; (strand) @variable ; or leave as is, since strands are lists
; (e) @expression ; if supported, but usually not highlighted
