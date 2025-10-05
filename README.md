# tree-sitter-goal

A tree-sitter grammer for the Goal array programming language.

## Dev Tips
- Run generate, make and parse: `tree-sitter generate && make clean && make && tree-sitter parse test/_.goal && echo "OK" || echo "FAIL"`.
- Execute goal program with `g` command: `g <file.goal> && echo "OK" || echo "FAIL"`.
