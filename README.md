# Tree-sitter Grammar for Goal

A [Tree-sitter](https://tree-sitter.github.io/) grammar for the [Goal](https://anaseto.codeberg.page/goal-docs) array programming language.

## Editor Integration
- Zed: (zed-goal)[https://github.com/wrnrlr/zed-goal]

## File Structure

- `grammar.js`: The grammar definition.
- `src/`: Generated parser files (do not edit directly; use `tree-sitter generate`).
- `test/`: Test files (`.goal` source code).
- `bindings/`: Language-specific bindings.
- `queries/`: Tree-sitter queries for highlighting and indentation.

## License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.
