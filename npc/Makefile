TOPNAME = ysyx_25050136_NPC
CSRCS = $(wildcard csrc/*.cpp csrc/*.c)
VSRCS = $(wildcard vsrc/*.v)

# Wno-DECLFILENAME 表示禁用一种代码格式警告,该警告用于检查模块名和文件名的一致性
CFLAGS += -g
LDFLAGS += -lreadline 
VERILATOR_INC_PATH = -Ivsrc
VERILATOR = verilator
VERILATOR_CFLAGS += -Wall --cc -exe --build --trace-fst --x-assign unique --x-initial unique\
				   --top-module $(TOPNAME) $(VSRCS) $(CSRCS) \
				   $(VERILATOR_INC_PATH) \
				   --Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
				   -LDFLAGS $(LDFLAGS) -CFLAGS $(CFLAGS)			

all: sim
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_CFLAGS)
	@gdb ./obj_dir/V$(TOPNAME) -i /home/yunhai/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
	@gtkwave waveform.fst

clean:
	rm -rf obj_dir
	rm *.fst

.PHONY: all sim cleanf
include ../Makefile
