VERSION := 0.0.1

TS ?= tree-sitter

generate:
	$(TS) generate

test:
	$(TS) test

all: generate test

clean:
	rm -rf src/ build/

.PHONY: all generate test clean