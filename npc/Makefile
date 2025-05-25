TOPNAME = ysyx_25050136_NPC
CSRCS = $(wildcard csrc/*.cpp csrc/*.c)
VSRCS = $(wildcard vsrc/*.v)

# Wno-DECLFILENAME 表示禁用一种代码格式警告,该警告用于检查模块名和文件名的一致性
CFLAGS +=
LDFLAGS = -lreadline 
VERILATOR_INC_PATH = -Ivsrc
VERILATOR = verilator
VERILATOR_FLAGS += -Wall --cc -exe --build --trace-fst --x-assign unique --x-initial unique\
				   --top-module $(TOPNAME) $(VSRCS) $(CSRCS) \
				   $(VERILATOR_INC_PATH) \
				   --Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
				   -LDFLAGS $(LDFLAGS)		

# 添加 Capstone 库支持
ifeq ($(CONFIG_ITRACE),y)
LIBCAPSTONE = tools/capstone/repo/libcapstone.so.5
CFLAGS += -I tools/capstone/repo/include
LDFLAGS += tools/capstone/repo/libcapstone.so.5
CSRCS += csrc/disasm.cpp  # 添加与 itrace 相关的源文件
csrc/disasm.cpp: $(LIBCAPSTONE)
$(LIBCAPSTONE):
    $(MAKE) -C tools/capstone
endif

all: rum
	@echo "Write this Makefile by your self."

run:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS)
	@./obj_dir/V$(TOPNAME) -i /home/yunhai/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin

gdb:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS)
	@gdb --args  obj_dir/V$(TOPNAME) -i /home/yunhai/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin

clean:
	rm -rf obj_dir
	rm *.fst

.PHONY: all sim cleanf
include ../Makefile
