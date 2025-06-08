#***************************************************************************************
#
#**************************************************************************************/

# 第一步:检查路径
ifeq ($(wildcard $(NPC_HOME)/vsrc/top.v),)
  $(error NPC_HOME=$(NPC_HOME) is not a NEMU repo)
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
TOPNAME = ysyx_25050136_NPC
CSRCS = $(wildcard csrc/*/*.cpp csrc/*/*.c csrc/*.cpp csrc/*.c)
VSRCS = $(wildcard vsrc/*.v)
$(info $(CSRCS) $(VSRCS))
BFLAGS   += -fsanitize=address
INC_PATH := ../include ../include/generated
CFLAGS   +=  $(BFLAGS) $(addprefix -I, $(INC_PATH)) 
LDFLAGS  += -lreadline $(BFLAGS)
VERILATOR_INC_PATH = -Ivsrc
VERILATOR = verilator

VERILATOR_FLAGS += -Wall --cc -exe --build --trace-fst --x-assign unique --x-initial unique \
				   --top-module $(TOPNAME) \
				   $(VERILATOR_INC_PATH) \
				   --Wno-DECLFILENAME -Wno-UNUSEDSIGNAL \
				   -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(CFLAGS)"		

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
	rm *.fst

.PHONY: run sim exe wave clean
include ../Makefile
