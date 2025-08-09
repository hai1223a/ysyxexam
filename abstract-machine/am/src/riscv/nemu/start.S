.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, end
  la gp, _heap_start
  la tp, _heap_end
  la t0, _stack_top
  la t1, _stack_pointer
  call _trm_init

.size _start, . - _start
