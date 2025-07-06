# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vysyx_25050136_NPC.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vysyx_25050136_NPC \
	Vysyx_25050136_NPC___024root__DepSet_hc5a159c8__0 \
	Vysyx_25050136_NPC___024root__DepSet_h7af90370__0 \
	Vysyx_25050136_NPC___024unit__DepSet_hc735410d__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vysyx_25050136_NPC___024root__Slow \
	Vysyx_25050136_NPC___024root__DepSet_hc5a159c8__0__Slow \
	Vysyx_25050136_NPC___024root__DepSet_h7af90370__0__Slow \
	Vysyx_25050136_NPC___024unit__Slow \
	Vysyx_25050136_NPC___024unit__DepSet_h7d84fc35__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vysyx_25050136_NPC__Dpi \
	Vysyx_25050136_NPC__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vysyx_25050136_NPC__Syms \
	Vysyx_25050136_NPC__Trace__0__Slow \
	Vysyx_25050136_NPC__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \
	verilated_threads \
	verilated_profiler \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
