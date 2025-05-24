TOPNAME = ysyx_25050136_NPC
CSRCS = $(wildcard csrc/*.cpp csrc/*.c)
VSRCS = $(wildcard vsrc/*.v)

# Wno-DECLFILENAME 表示禁用一种代码格式警告,该警告用于检查模块名和文件名的一致性
CFLAGS = -g
LDFLAGS = -lreadline 
VERILATOR_INC_PATH = -Ivsrc
VERILATOR = verilator
VERILATOR_CFLAGS += -Wall --cc -exe --build --trace-fst --x-assign unique --x-initial unique\
				   --top-module $(TOPNAME) $(VSRCS) $(CSRCS) \
				   --gdb \
				   $(VERILATOR_INC_PATH) \
				   --Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
				   -LDFLAGS $(LDFLAGS)			

all: rum
	@echo "Write this Makefile by your self."

run:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_CFLAGS)
	@./obj_dir/V$(TOPNAME) -i /home/yunhai/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin

gdb:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_CFLAGS)
	@gdb --args obj_dir/V$(TOPNAME) -i /home/yunhai/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin

clean:
	rm -rf obj_dir
	rm *.fst

.PHONY: all sim cleanf
include ../Makefile
