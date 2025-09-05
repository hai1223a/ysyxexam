#***************************************************************************************
# NPC 仿真工程 Makefile
#**************************************************************************************/

#================第一步:检查路径==========================
ifeq ($(wildcard $(NPC_HOME)/vsrc/soc.v),)
	$(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif

#================第二步:检查配置===========================
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

#================第三步:NPC和YSYXSOC的不同配置==============
NPC_RESET = 32'h30000000

#================第三步:编译选项准备========================
# 顶层模块和工具
TOP_MODULE      := ysyxSoCFull
VERILATOR_BIN   := verilator
BIN = $(OBJ_DIR)/V$(TOP_MODULE)

# 编译目录
BUILD_DIR = $(NPC_HOME)/build
WAVE_DIR = $(NPC_HOME)/wave
OBJ_DIR = $(BUILD_DIR)/obj_dir
LOG_DIR = $(BUILD_DIR)/log

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
INC_PATHS       := $(abspath ../include ../include/generated)
CFLAGS          += $(addprefix -I, $(INC_PATHS))
LDFLAGS         += -lreadline

# Verilator编译选项
VERILATOR_FLAGS += -MMD --cc -exe --build --x-assign fast --x-initial fast\
                   --timescale "1ns/1ns" --no-timing --autoflush\
                   --top-module $(TOP_MODULE) \
                   $(VERILATOR_INCS) \
				   --Mdir $(NPC_HOME)/build/obj_dir \
				   $(V_SRCS) $(C_SRCS) -Dysyx_25050136_RESET_PC="$(NPC_RESET)"\

ifdef CONFIG_FST
VERILATOR_FLAGS += --trace-fst 
endif
ifdef CONFIG_WALL
VERILATOR_FLAGS += -Wall $(VERILATOR_WNO)
endif
ifdef CONFIG_CC_ASAN
CFLAGS += -fsanitize=address
LDFLAGS += -fsanitize=address
endif
# 依赖关系
EXE_DEPEND += $(LIBCAPSTONE)
# 仿真参数
override ARGS ?= -d $(NPC_HOME)/../nemu/build/riscv32-nemu-interpreter-so \
					 -l $(NPC_HOME)/build/log/log.txt \
#         			 -i $(NPC_HOME)/sim/microbench-riscv32e-ysyxsoc.bin \

#================第四步:NVBOARD========================
# rules for NVBoard 
NXDC_FILES = constr/top.nxdc
# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

ifdef CONFIG_TARGET_NVBOARD
-include $(NVBOARD_HOME)/scripts/nvboard.mk
CFLAGS += $(addprefix -I, $(INC_PATH)) -DTOP_NAME="\"V$(TOPNAME)\""
C_SRCS += $(SRC_AUTO_BIND)
VERILATOR_FLAGS += --noassert -O3 $(NVBOARD_ARCHIVE)
EXE_DEPEND += $(SRC_AUTO_BIND) $(NVBOARD_ARCHIVE)
endif

#=================第五步:目标===========================
-include $(NPC_HOME)/scripts/config.mk

$(shell mkdir -p $(LOG_DIR) $(WAVE_DIR))

exe: $(EXE_DEPEND)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR_BIN) $(VERILATOR_FLAGS) -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(CFLAGS)" +define+VERILATOR_DPIC

run: exe
	@$(BIN) $(ARGS) -i $(NPC_HOME)/sim/microbench-riscv32e-ysyxsoc.bin

gdb: exe
	gdb --args @$(BIN) $(ARGS)

wave: run
	gtkwave $(WAVE_DIR)/waveform.fst

perf_commit:
	$(call git_commit, "性能测试提交-第一次测试-详见sim性能测试文件") # DO NOT REMOVE THIS LINE!!!

perf: $(EXE_DEPEND)
	$(call git_commit, "make perf") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR_BIN) $(VERILATOR_FLAGS) -LDFLAGS "$(LDFLAGS)" -CFLAGS "$(CFLAGS)"	
	@$(BIN) $(ARGS) -i $(NPC_HOME)/sim/microbench-riscv32e-ysyxsoc.bin
	@$(MAKE) -C /home/yunhai/ysyx-workbench/yosys-sta sta \
           DESIGN=ysyx_25050136 \
           CLK_FREQ_MHZ=1500 CLK_PORT_NAME=clock \
           RTL_FILES="$(NPC_HOME)/vsrc/csru.v    \
                      $(NPC_HOME)/vsrc/bqu.v \
                      $(NPC_HOME)/vsrc/config.v\
                      $(NPC_HOME)/vsrc/alu.v\
                      $(NPC_HOME)/vsrc/csrfile.v\
                      $(NPC_HOME)/vsrc/ex.v\
                      $(NPC_HOME)/vsrc/id.v\
                      $(NPC_HOME)/vsrc/soc.v\
                      $(NPC_HOME)/vsrc/cpu.v\
                      $(NPC_HOME)/vsrc/if.v\
                      $(NPC_HOME)/vsrc/regfile.v\
                      $(NPC_HOME)/vsrc/lsu.v\
                      $(NPC_HOME)/vsrc/arbiter.v \
                      $(NPC_HOME)/vsrc/clint.v"


clean:
	rm -rf build
	rm -f $(WAVE_DIR)/*.fst

.PHONY: run sim exe wave clean

include ../Makefile