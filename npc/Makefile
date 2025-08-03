#***************************************************************************************
#
#**************************************************************************************/

# 第一步:检查路径
ifeq ($(wildcard $(NPC_HOME)/vsrc/soc.v),)
  $(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif

# 第二步:检查配置
-include $(NPC_HOME)/include/config/auto.conf
-include $(NPC_HOME)/include/config/auto.conf.cmd

# 检查工具capstone是否就绪
CAPSTONE_PATH := $(NPC_HOME)/tools/capstone
ifeq ($(CONFIG_DIFFTEST),y)
CAPSTONE_PATH = tools/capstone
LIBCAPSTONE = tools/capstone/repo/libcapstone.so.5
$(LIBCAPSTONE):
	$(MAKE) -C $(CAPSTONE_PATH)
endif

# 第三步:准备用于编译工程的选项
# 头文件和工具软件
TOPNAME = ysyx_25050136
VERILATOR = verilator
# 源文件
CSRCS = $(wildcard csrc/*/*.cpp csrc/*/*.c csrc/*.cpp csrc/*.c)
VSRCS = $(wildcard vsrc/*.v)
# 编译选项
BFLAGS   += -fsanitize=address
INC_PATH := $(abspath ../include ../include/generated)
CFLAGS   +=  $(BFLAGS) $(addprefix -I, $(INC_PATH)) 
LDFLAGS  += -lreadline $(BFLAGS)
# 编译选项
VERILATOR_FLAGS += -Wall --cc -exe --build --x-assign fast --x-initial fast \
				   --top-module $(TOPNAME) \
				   -Ivsrc --prof-exec\
				   --Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
				   -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(CFLAGS)"
ifdef CONFIG_FST
VERILATOR_FLAGS += --trace-fst 
endif
# 编译选项
override ARGS ?= -d $(NPC_HOME)/../nemu/build/riscv32-nemu-interpreter-so \
	    		 -l $(NPC_HOME)/obj_dir/log/log.txt

include $(NPC_HOME)/scripts/config.mk

run: exe
	./obj_dir/V$(TOPNAME) $(ARGS)

gdb: exe
	gdb --args obj_dir/V$(TOPNAME) $(ARGS)

exe: $(LIBCAPSTONE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@mkdir -p  $(NPC_HOME)/obj_dir/log
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(CSRCS)

wave: run
	gtkwave waveform.fst

clean:
	rm -rf obj_dir
	rm -f *.fst

.PHONY: run sim exe wave clean
include ../Makefile