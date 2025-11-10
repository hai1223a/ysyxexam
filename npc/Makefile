#***************************************************************************************
# NPC 仿真工程 Makefile
# 功能: 支持NPC和SoC两种模式的Verilator仿真
#***************************************************************************************/

#================第一步: 环境检查与配置加载 ====================
# 检查NPC_HOME环境变量是否设置正确
ifeq ($(wildcard $(NPC_HOME)/vsrc/cpu.v),)
 $(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif

defualt: soc_run

# 加载自动生成的配置
-include $(NPC_HOME)/include/config/auto.conf
-include $(NPC_HOME)/include/config/auto.conf.cmd

#================第二步: 第三方工具配置 ====================
# Capstone 配置（用于itrace）
CAPSTONE_PATH := $(NPC_HOME)/tools/capstone
LIBCAPSTONE   := tools/capstone/repo/libcapstone.so.5
$(LIBCAPSTONE):
	$(MAKE) -C $(CAPSTONE_PATH)

#================第三步: 通用配置 ====================
# 目录配置
BUILD_DIR = $(NPC_HOME)/build
WAVE_DIR = $(NPC_HOME)/wave
OBJ_DIR = $(BUILD_DIR)/obj_dir
LOG_DIR = $(BUILD_DIR)/log
$(shell mkdir -p $(LOG_DIR) $(WAVE_DIR))

# 编译工具
VERILATOR_BIN   := verilator

# 共同源文件与用于SOC的CPU文件
COMMON_VSRC = vsrc/config.v $(filter-out vsrc/config.v,$(wildcard vsrc/*.v))

# Verilator编译选项
COMMON_VERFLAGS += -MMD --cc -exe --build --x-assign fast --x-initial fast\
				   --timescale "1ns/1ns" --no-timing --autoflush\
				   --Mdir $(OBJ_DIR) 

# FST波形跟踪选项
ifdef CONFIG_FST
COMMON_VERFLAGS += --trace-fst 
endif

# Verilator警告抑制选项
# PINCONNECTEMPTY: 实例化时有端口未连接, .accept_o(),
# DECLFILENAME: 模块名与其文件名不一致
# UNUSEDSIGNAL: 模块定义了未被使用的信号
# ASSIGNDLY: 模块中存在 #1 这类延时语句, 同时又约定了--no-timing忽略延时语句加速仿真
# UNDRIVEN: 模块中有信号没有被驱动
# UNUSEDPARAM: 模块定义了未被使用的参数
# SYNCASYNCNET: 一个复位信号既被用于同步复位, 又被用于异步复位. 目前该报错发生于uart_reg的复位是异步复位, 暂时忽略日后修改
COMMON_VERWNO := $(addprefix -Wno-, PINCONNECTEMPTY DECLFILENAME UNUSEDSIGNAL ASSIGNDLY UNDRIVEN UNUSEDPARAM SYNCASYNCNET)

# 警告级别配置
ifdef CONFIG_WALL
COMMON_VERFLAGS += -Wall $(COMMON_VERWNO)
endif

# C编译和链接选项
COMMON_CFLAGS += -I$(CAPSTONE_PATH)/repo/include
COMMON_LDFLAGS += -lreadline

# 地址消毒剂选项（用于调试）
ifdef CONFIG_CC_ASAN
COMMON_CFLAGS += -fsanitize=address
COMMON_LDFLAGS += -fsanitize=address
endif

# 宏定义
COMMON_VERDEFINE := +ysyx_25050136_VERILATOR_DPIC

#================第四步: 仿真参数配置 ====================
# 默认仿真参数
override ARGS ?= -d $(NPC_HOME)/../nemu/build/riscv32-nemu-interpreter-so \
				 -l $(NPC_HOME)/build/log/log.txt \
				 -i $(NPC_HOME)/sim/microbench-test.bin
# 				 -i $(NPC_HOME)/sim/fib.bin
# 				 -i $(NPC_HOME)/sim/microbench-train.bin
#================第五步: NPC专用配置 ====================
# NPC模式Verilog源文件（合并config.v和其他文件，确保config.v在最前面）
# NPC_CPU_VSRC = $(BUILD_DIR)/ysyx_25050136_cpu.v
# $(NPC_CPU_VSRC): 
# 	cat $(COMMON_VSRC) $(wildcard vsrc/npc_only/*.v) > $@
# NPC_VSRC := $(NPC_CPU_VSRC) 
# NPC_CSRC := $(shell find csrc_npc -type f \( -name "*.c" -o -name "*.cpp" \))

# # NPC的配置
# NPC_RESET := 32'h80000000
# NPC_TOP := ysyx_25050136 

# NPC_CPATHS := $(abspath ../include_npc ../include/generated)
# NPC_CFLAGS := $(COMMON_CFLAGS) $(addprefix -I, $(NPC_CPATHS))
# NPC_LDFLAGS := $(COMMON_LDFLAGS)

# # NPC Verilator宏定义
# NPC_VERDEFINE := $(COMMON_VERDEFINE)+ysyx_25050136_RESET_PC="$(NPC_RESET)"+TOP_NAME="V$(NPC_TOP)"

# # NPC Verilator编译选项
# NPC_VERFLAGS += $(COMMON_VERFLAGS) --top-module $(NPC_TOP) $(NPC_VSRC) $(NPC_CSRC) \
# 			    +define$(NPC_VERDEFINE) \

# # NPC依赖文件
# NPC_DEPEMD += $(LIBCAPSTONE) $(NPC_CPU_VSRC)
# NPC_BIN := $(OBJ_DIR)/V$(NPC_TOP)

# #================第六步: NPC专用配置 ====================

# npc_exe: $(NPC_DEPEMD)
# 	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
# 	$(VERILATOR_BIN) $(NPC_VERFLAGS) -LDFLAGS "$(NPC_LDFLAGS)" -CFLAGS "$(NPC_CFLAGS)"

# npc_run: npc_exe
# 	@$(NPC_BIN) $(ARGS)	

# npc_gdb: npc_exe
# 	gdb --args @$(NPC_BIN) $(ARGS)

# npc_wave: npc_run
# 	gtkwave $(WAVE_DIR)/waveform.fst

#================第七步: SoC专用配置 ====================
# SoC模式源文件
SOC_CPU_VSRC = $(BUILD_DIR)/ysyx_25050136.v
$(shell rm -f $(SOC_CPU_VSRC))
$(SOC_CPU_VSRC):
	cat $(COMMON_VSRC) $(wildcard vsrc/soc_only/*.v) > $@
SOC_VSRC = $(SOC_CPU_VSRC) $(shell find ../ysyxSoC/perip -type f -name "*.v") ../ysyxSoC/build/ysyxSoCFull.v 
SOC_CSRC := $(abspath $(shell find csrc -type f \( -name "*.c" -o -name "*.cpp" \)))

# SoC的配置
SOC_RESET := 32'h30000000
SOC_TOP := ysyxSoCFull 
SOC_INC := $(addprefix -I, ../ysyxSoC/perip/uart16550/rtl ../ysyxSoC/perip/spi/rtl)
SOC_CPATHS := $(abspath ../include ../include/generated)
SOC_CFLAGS := $(COMMON_CFLAGS) $(addprefix -I, $(SOC_CPATHS))
SOC_LDFLAGS := $(COMMON_LDFLAGS)

# SoC Verilator宏定义
SOC_VERDEFINE := $(COMMON_VERDEFINE)+ysyx_25050136_RESET_PC="$(SOC_RESET)"+TOP_NAME="V$(SOC_TOP)"

# SoC Verilator编译选项
SOC_VERFLAGS += $(COMMON_VERFLAGS) --top-module $(SOC_TOP) $(SOC_VSRC) $(SOC_CSRC) \
			    $(SOC_INC) +define$(SOC_VERDEFINE)

# SoC依赖文件
SOC_DEPEMD += $(LIBCAPSTONE) $(SOC_CPU_VSRC)
SOC_BIN := $(OBJ_DIR)/V$(SOC_TOP)

#================第八步: NVBoard配置 ====================
# NVBoard约束文件配置
NXDC_FILES = constr/top.nxdc          # NVBoard约束文件

# 自动引脚绑定生成
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# NVBoard相关配置
ifdef CONFIG_TARGET_NVBOARD
-include $(NVBOARD_HOME)/scripts/nvboard.mk
SOC_CFLAGS += $(addprefix -I, $(INC_PATH))
SOC_LDFLAGS += $(LDFLAGS)
SOC_CSRC += $(SRC_AUTO_BIND)
SOC_VERFLAGS += --noassert -O3 $(NVBOARD_ARCHIVE)
SOC_DEPEMD += $(SRC_AUTO_BIND) $(NVBOARD_ARCHIVE)
endif

#================第九步: SOC构建目标规则 ====================
-include $(NPC_HOME)/scripts/config.mk
soc_exe: $(SOC_DEPEMD)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR_BIN) $(SOC_VERFLAGS) -LDFLAGS "$(SOC_LDFLAGS)" -CFLAGS "$(SOC_CFLAGS)"

soc_run: soc_exe
	@$(SOC_BIN) $(ARGS)	

soc_gdb: soc_exe
	gdb --args @$(SOC_BIN) $(ARGS)

soc_wave: soc_run
	gtkwave $(WAVE_DIR)/waveform.fst

clean:
	rm -rf build
	rm -f $(WAVE_DIR)/*.fst

perf_commit:
	$(call git_commit, "性能测试提交-全流水线CPU-详见sim性能测试文件") # DO NOT REMOVE THIS LINE!!!

perf: $(SOC_DEPEMD)
	$(call git_commit, "make perf") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR_BIN) $(SOC_VERFLAGS) -LDFLAGS "$(SOC_LDFLAGS)" -CFLAGS "$(SOC_CFLAGS)"	
	@$(SOC_BIN) $(ARGS)
	@echo "暂停执行，按任意键继续..."
	@read a
	@$(MAKE) -C /home/yunhai/ysyx-workbench/yosys-sta sta \
           DESIGN=ysyx_25050136 \
           CLK_FREQ_MHZ=1500 CLK_PORT_NAME=clock \
           RTL_FILES="$(SOC_CPU_VSRC)"

fuck: $(SOC_DEPEMD)
	@$(MAKE) -C /home/yunhai/ysyx-workbench/yosys-sta sta \
           DESIGN=ysyx_25050136 \
           CLK_FREQ_MHZ=1500 CLK_PORT_NAME=clock \
           RTL_FILES="$(SOC_CPU_VSRC)"

ABB = /home/yunhai/ysyx-workbench/npc/sim/a.v
shift: $(ABB) 
	@$(MAKE) -C /home/yunhai/ysyx-workbench/yosys-sta sta \
           DESIGN=ysyx \
           CLK_FREQ_MHZ=10000 CLK_PORT_NAME=clk \
           RTL_FILES="$(ABB)"

.PHONY: soc_exe soc_run soc_gdb soc_wave clean perf_commit perf shift

include ../Makefile