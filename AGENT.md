# AGENT.md
Help me develop the tree-sitter grammer for the Goal Array Language.

[@grammar.js](./grammar.js)

Run the following code to test the grammer.

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

there are multiple ways the test process can fail.
- Syntax error in js file
- tree-sitter errors like issues with function or regex
- parser ambigiouity in grammer
- successful parser generated but results in infinite loop parsing
- The parsing itself fails.
