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

CAPSTONE_PATH := $(NPC_HOME)/tools/capstone
ifeq ($(CONFIG_DIFFTEST),y)
CAPSTONE_PATH = tools/capstone
LIBCAPSTONE = tools/capstone/repo/libcapstone.so.5
$(LIBCAPSTONE):
	$(MAKE) -C $(CAPSTONE_PATH)
endif

TOPNAME = ysyx_25050136_NPC
CSRCS = $(wildcard csrc/*.cpp csrc/*.c)
VSRCS = $(wildcard vsrc/*.v)
# Wno-DECLFILENAME 表示禁用一种代码格式警告,该警告用于检查模块名和文件名的一致性
# Wno-UNUSEDSIGNAL 表示禁用一种代码格式警告,该警告用于检查那些已定义未使用的信号
# -fsanitize=address 用于检查段错误相关的代码
BFLAGS   += -fsanitize=address
INC_PATH := 
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
