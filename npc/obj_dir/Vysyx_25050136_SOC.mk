# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_25050136_SOC.mk

default: Vysyx_25050136_SOC

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/yunhai/tools/oss-cad-suite/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_25050136_SOC
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_25050136_SOC
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-fsanitize=address -I/home/yunhai/ysyx-workbench/include/cpu -I/home/yunhai/ysyx-workbench/include/generated -I/home/yunhai/ysyx-workbench/include/memory -I/home/yunhai/ysyx-workbench/include/monitor -I/home/yunhai/ysyx-workbench/include/trace -I/home/yunhai/ysyx-workbench/include/utils  \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lreadline -fsanitize=address \
	-lz \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	common \
	cpu \
	main \
	memory \
	reg \
	debug \
	expr \
	sdb \
	watchpoint \
	disasm \
	dut \
	trace \
	timer \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	.. \
	../csrc \
	../csrc/cpu \
	../csrc/memory \
	../csrc/monitor \
	../csrc/trace \
	../csrc/utils \


### Default rules...
# Include list of all generated classes
include Vysyx_25050136_SOC_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

common.o: csrc/cpu/common.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
cpu.o: csrc/cpu/cpu.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
main.o: csrc/main.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
memory.o: csrc/memory/memory.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
reg.o: csrc/memory/reg.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
debug.o: csrc/monitor/debug.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
expr.o: csrc/monitor/expr.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
sdb.o: csrc/monitor/sdb.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
watchpoint.o: csrc/monitor/watchpoint.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
disasm.o: csrc/trace/disasm.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
dut.o: csrc/trace/dut.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
trace.o: csrc/trace/trace.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
timer.o: csrc/utils/timer.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
Vysyx_25050136_SOC: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
