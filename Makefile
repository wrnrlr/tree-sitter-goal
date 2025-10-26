VERSION := 0.0.1

TS ?= tree-sitter

generate:
	$(TS) generate

build:
	$(TS) build

test:
	$(TS) test

all: generate build test

clean:
	rm -rf src/ build/

wasm: generate build
	$(TS) build --wasm

play: wasm
	$(TS) playground

.PHONY: all generate build test clean wasm playground
