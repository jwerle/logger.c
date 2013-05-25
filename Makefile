test: deps/term.c logger.c test.c
	@$(CC) $^ -std=c99 -lm -I deps -o $@
	@./test
	@rm -f ./test

.PHONY: test