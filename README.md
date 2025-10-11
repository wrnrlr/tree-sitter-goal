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

## Release Instructiond
- Bump version in `package.json` and `Cargo.toml`
- Commit latest changes: `git commit -m "Prepare release"`
- Set git tag: `git tag v1.0.1`
- Push changes: `git push origin v1.0.1`


- Publish: `npm publish && cargo publish --allow-dirty`
