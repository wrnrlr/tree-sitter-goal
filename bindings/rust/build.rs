fn main() {
    println!("cargo:rerun-if-changed=grammar.js");
    let _ = std::process::Command::new("tree-sitter")
        .arg("generate")
        .status();
    println!("cargo:rustc-link-arg=/utf-8");
}