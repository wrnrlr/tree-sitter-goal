VERSION := 0.0.1

TS ?= tree-sitter

generate:
	$(TS) generate

test: generate
	$(TS) test

build:
	$(TS) build

all: generate build test

clean:
	rm -rf src/ build/

wasm: generate build test
	$(TS) build --wasm

play: wasm
	$(TS) playground

.PHONY: all generate build test clean wasm playground
