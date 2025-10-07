; Strings
(string) @string

; Numbers and literals
(int) @number
(number) @number
(hex) @number
(exponential) @number
(binairy) @number
(duration) @number
(infinity) @constant
(nil) @constant

; Identifiers
(name) @variable

; Operators and special characters
(V) @operator
(A) @operator

; Comments
(inline_comment) @comment
(block_comment) @comment
(line_comment) @comment

; Punctuation for blocks and groups
("{" "}" "[" "]" "(" ")") @punctuation.bracket

; Adverbs and modifiers
(a) @operator

; Assignments or special constructs
; Add if needed for adverbs or dyads

; Function-like constructs (blocks, lambdas)
(block) @function
(lambda) @function

; Strand and expressions
(strand) @variable ; or leave as is, since strands are lists
(e) @expression ; if supported, but usually not highlighted
