# Tree-sitter Grammar for Goal

A [Tree-sitter](https://tree-sitter.github.io/) grammar for the [Goal](https://anaseto.codeberg.page/goal-docs) array programming language.

## Editor Integration
- Zed: [zed-goal](https://github.com/wrnrlr/zed-goal)

## Language Bindings
 - [Node](https://www.npmjs.com/package/tree-sitter-goal): `npm i tree-sitter-goal`
 - [Rust](https://crates.io/crates/tree-sitter-goal): `cargo add tree-sitter-goal`
 - Go: `go get github.com/wrnrlr/tree-sitter-goal`

## Dev Tips
- Generate code: `tree-sitter generate`
- Run tests: `tree-sitter test`
- Publish: `npm publish && cargo publish --allow-dirty`
