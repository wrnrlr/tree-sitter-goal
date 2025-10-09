fn main() {
    // Check if we're building for WASI and set flags
    if std::env::var("TARGET").unwrap_or_default().contains("wasm32-wasip2") {
        std::println!("cargo:rustc-link-search=native=/usr/local/opt/wasi-sdk/share/wasi-sysroot/lib/wasm32-wasip2");
        std::println!("cargo:rustc-link-lib=static=c");
    }

    let manifest_dir = std::env::var("CARGO_MANIFEST_DIR").unwrap();
    let grammar_js_path = std::path::Path::new(&manifest_dir).join("grammar.js");

    // Generate the parser
    let status = std::process::Command::new("tree-sitter")
        .arg("generate")
        .current_dir(&manifest_dir)
        .status()
        .expect("Failed to execute tree-sitter generate");

    if !status.success() {
        std::process::exit(1);  // Use exit for better error handling
    }

    std::println!("cargo:rerun-if-changed={}", grammar_js_path.display());
}
