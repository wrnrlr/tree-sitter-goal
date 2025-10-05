# tree-sitter-goal

A tree-sitter grammer for the Goal array programming language.

## Dev Tips
- Test parsing of `.goal` file with clean build:
  ```
  tree-sitter generate && \
    make clean && make && \
    tree-sitter parse <file.goal> && echo "OK" || echo "ERROR"
  ```
- Run file with goal interpreter `g` as authoritative source of valid syntax:
  ```
  g <file.goal> && echo "OK" || echo "ERROR"
  ```
