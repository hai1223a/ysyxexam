TOPNAME = ysyx_25050136_NPC
WORK_DIR = $(shell pwd)
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

ARGS += -i $(WORK_DIR)/../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
ARGS += -d $(WORK_DIR)/../nemu/build/riscv32-nemu-interpreter-so 
ARGS += -l $(WORK_DIR)/obj_dir/log/log.txt
ARGS += -e $(WORK_DIR)/../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.elf
ARGS += -g $(WORK_DIR)/obj_dir/log/ftrace-log.txt -b

run: exe
	@./obj_dir/V$(TOPNAME) $(ARGS)

gdb: exe
	@gdb --args obj_dir/V$(TOPNAME) $(ARGS)

exe:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@mkdir -p  $(WORK_DIR)/obj_dir/log
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(CSRCS)

wave: run
	@gtkwave waveform.fst

clean:
	rm -rf obj_dir
	rm *.fst

.PHONY: run sim exe wave clean
include ../Makefile
