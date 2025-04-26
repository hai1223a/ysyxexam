MAIN := hello
CSRCS = $(wildcard *.c)
run: $(CSRCS)
	@$(CC) $(CSRCS) -o $(MAIN)
	@./$(MAIN)

clean:
	@rm $(MAIN)

.PHONY: clean run