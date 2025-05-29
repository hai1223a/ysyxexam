TOPNAME = ysyx_25050136_NPC
CSRCS = $(wildcard csrc/*.cpp csrc/*.c)
VSRCS = $(wildcard vsrc/*.v)

# Wno-DECLFILENAME 表示禁用一种代码格式警告,该警告用于检查模块名和文件名的一致性
# Wno-UNUSEDSIGNAL 表示禁用一种代码格式警告,该警告用于检查那些已定义未使用的信号
# -fsanitize=address 用于检查段错误相关的代码
BUILD_FLAGS += -fsanitize=address
CFLAGS +=  $(BUILD_FLAGS)
LDFLAGS += -lreadline $(BUILD_FLAGS)
VERILATOR_INC_PATH = -Ivsrc
VERILATOR = verilator
VERILATOR_FLAGS += -Wall --cc -exe --build --trace-fst --x-assign unique --x-initial unique\
				   --top-module $(TOPNAME) \
				   $(VERILATOR_INC_PATH) \
				   --Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
				   -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(CFLAGS)"		

ARGS += -i /home/yunhai/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
ARGS += -d /home/yunhai/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so -call

all: rum
	@echo "Write this Makefile by your self."

run:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(CSRCS)
	@./obj_dir/V$(TOPNAME) $(ARGS)
	@gtkwave waveform.fst

gdb:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(CSRCS)
	@gdb --args  obj_dir/V$(TOPNAME) $(ARGS)

clean:
	rm -rf obj_dir
	rm *.fst

.PHONY: all sim cleanf
include ../Makefile
