VERSION := 0.0.1

TS ?= tree-sitter

generate:
	$(TS) generate

test:
	$(TS) test

all: generate test

clean:
	rm -rf src/ build/

wasm: generate
	emcc -o tree-sitter-goal.wasm src/parser.c -I src --no-entry -s WASM=1 -s SIDE_MODULE=1 -Os

play: wasm
	$(TS) playground

.PHONY: all generate test clean wasm playground
