TOPNAME = ysyx_25050136_NPC
CSRCS = csrc/main.cpp
VSRCS = $(wildcard vsrc/*.v)

VERILATOR = verilator
VERILATOR_CFLAGS += --cc -exe --build --x-assign unique --x-initial unique\
				   --top-module $(TOPNAME) $(VSRCS) $(CSRCS)

all: sim
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_CFLAGS)
	@./obj_dir/V$(TOPNAME)

clean:
	rm -rf obj_dir

.PHONY: all sim clean
include ../Makefile
