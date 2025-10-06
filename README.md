# tree-sitter-goal

A tree-sitter grammer for the Goal array programming language.

## Dev Tips
- Test parsing of `.goal` file with clean build:
  ```
  tree-sitter generate && \
    make && \
    gtimeout 30s tree-sitter parse test/*.goal && \
    echo "OK" || \
    if [ $? -eq 124 ]; then
      echo "TIMEOUT"
    else
      echo "ERROR"
    fi
  ```
- Run file with goal interpreter `g` as authoritative source of valid syntax:
  ```

    /Users/werner/Code/goal/goal -e "1 + 1"

  /Users/werner/Code/goal/goal <<EOF && echo "OK" || echo "ERROR"
  1+1

  EOF
  ```

## Open Questions
- How to implement keyword monadic verbs
