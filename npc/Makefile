TOPNAME = ysyx_25050136_NPC
CSRCS = csrc/main.cpp
VSRCS = $(wildcard vsrc/*.v)
VERILATOR_CFLAGS = -Wall --cc -exe --build --x-assign unique --x-initial unique\
				   --top-module $(TOPNAME) $(VSRCS) $(CSRCS)

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

include ../Makefile
