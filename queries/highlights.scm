; Strings
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

(V) @operator
(A) @punctuation.special
(a) @punctuation.special

; Comments
(inline_comment) @comment
(block_comment) @comment
; (line_comment) @comment

; Punctuation for blocks and groups
("{" "}" "[" "]" "(" ")") @punctuation.bracket
(";") @punctuation.delimiter

; (block) @function
; (lambda) @function

; Strand and expressions
; (strand) @variable ; or leave as is, since strands are lists
; (e) @expression ; if supported, but usually not highlighted
