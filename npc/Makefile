TOPNAME = ysyx_25050136_NPC
CSRCS = csrc/main.cpp
VSRCS = $(wildcard vsrc/*.v)

# Wno-DECLFILENAME 表示禁用一种代码格式警告,该警告用于检查模块名和文件名的一致性
VERILATOR = verilator
VERILATOR_CFLAGS += -Wall --cc -exe --build --x-assign unique --x-initial unique\
				   --top-module $(TOPNAME) $(VSRCS) $(CSRCS) \
				   -Ivsrc \
				   --Wno-DECLFILENAME -Wno-UNUSEDSIGNAL					

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
