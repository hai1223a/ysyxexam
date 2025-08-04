#***************************************************************************************
# NPC 仿真工程 Makefile
#**************************************************************************************/

# 第一步:检查路径
ifeq ($(wildcard $(NPC_HOME)/vsrc/soc.v),)
	$(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif

# 第二步:检查配置
-include $(NPC_HOME)/include/config/auto.conf
-include $(NPC_HOME)/include/config/auto.conf.cmd

# Capstone 配置
CAPSTONE_PATH := $(NPC_HOME)/tools/capstone
ifeq ($(CONFIG_DIFFTEST),y)
CAPSTONE_PATH := tools/capstone
LIBCAPSTONE   := tools/capstone/repo/libcapstone.so.5
$(LIBCAPSTONE):
	$(MAKE) -C $(CAPSTONE_PATH)
endif

# 第三步:编译选项准备
# 顶层模块和工具
TOP_MODULE      := ysyxSoCFull
VERILATOR_BIN   := verilator

# 源文件
C_SRCS          := $(shell find csrc -type f \( -name "*.c" -o -name "*.cpp" \))
V_SRCS          := $(shell find vsrc -type f -name "*.v")
VERILATOR_INCS  := $(addprefix -I, vsrc vsrc/perip/uart16550/rtl vsrc/perip/spi/rtl)

# Verilator警告抑制选项
# PINCONNECTEMPTY: 实例化时有端口未连接, .accept_o(),
# DECLFILENAME: 模块名与其文件名不一致
# UNUSEDSIGNAL: 模块定义了未被使用的信号
# ASSIGNDLY: 模块中存在 #1 这类延时语句, 同时又约定了--no-timing忽略延时语句加速仿真
# UNDRIVEN: 模块中有信号没有被驱动
# UNUSEDPARAM: 模块定义了未被使用的参数
# SYNCASYNCNET: 一个复位信号既被用于同步复位, 又被用于异步复位. 目前该报错发生于uart_reg的复位是异步复位, 暂时忽略日后修改
VERILATOR_WNO   := $(addprefix -Wno-, PINCONNECTEMPTY DECLFILENAME UNUSEDSIGNAL ASSIGNDLY \
      				   UNDRIVEN UNUSEDPARAM SYNCASYNCNET)

# C/C++编译选项
C_SANITIZE      := -fsanitize=address
INC_PATHS       := $(abspath ../include ../include/generated)
CFLAGS          += $(C_SANITIZE) $(addprefix -I, $(INC_PATHS))
LDFLAGS         += -lreadline $(C_SANITIZE)

# Verilator编译选项
VERILATOR_FLAGS += -Wall --cc -exe --build --x-assign fast --x-initial fast \
                   --timescale "1ns/1ns" --no-timing \
                   --top-module $(TOP_MODULE) \
                   $(VERILATOR_INCS) --prof-exec \
                   $(VERILATOR_WNO) \
                   -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(CFLAGS)"

ifdef CONFIG_FST
VERILATOR_FLAGS += --trace-fst 
endif

# 仿真参数
override SIM_ARGS ?= -d $(NPC_HOME)/../nemu/build/riscv32-nemu-interpreter-so \
        			 -i $(NPC_HOME)/sim/test1.bin \
					 -l $(NPC_HOME)/obj_dir/log/log.txt

include $(NPC_HOME)/scripts/config.mk

# 目标
run: exe
	./obj_dir/V$(TOP_MODULE) $(SIM_ARGS)

gdb: exe
	gdb --args obj_dir/V$(TOP_MODULE) $(SIM_ARGS)

exe: $(LIBCAPSTONE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@mkdir -p $(NPC_HOME)/obj_dir/log
	$(VERILATOR_BIN) $(VERILATOR_FLAGS) $(V_SRCS) $(C_SRCS)

wave: run
	gtkwave waveform.fst

clean:
	rm -rf obj_dir
	rm -f *.fst

.PHONY: run sim exe wave clean

include ../Makefile