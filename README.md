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
- Parse file: `tree-sitter parse `

## Release Instructions
Bump version in `package.json` and `Cargo.toml`.

```bash
git commit -am v0.0.7
git tag v0.0.7
git push origin main
git push origin v0.0.7
```
