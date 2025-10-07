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

More info about goal can be found in the help file:
[@help.txt](./help.txt)

Expression is a sequence of noun/verb chains, possibly grouped, possibly separated by semicolons.
Verbs may be atomic or modified by adverbs.
Nouns may be atoms, grouped expressions, blocks, or indexed terms.

Be careful with whitespace, it sometimes affect hopw things are parsed.
Arrays for example

Array of 3 numbers
```goal
1 2 3
```

binairy/dyadic operator Array of 3 numbers plus 3 other numbers
```goal
1 2 3 + 4 5 6
```

An group can even be spread out over multiple lines
```goal
a: (1 2
3 4)
```
 more ionfo on the grammer in the bnf file:
 [@help.txt](./goal.bnf)
