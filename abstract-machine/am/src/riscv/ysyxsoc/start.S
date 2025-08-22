.section entry, "ax"
.globl _start
.type _start, @function

_start:
  li t0, 0x12345678
  li t1, 0x80000000
  sw t0, 0(t1)
  lw t2, 0(t1)
  sh t0, 6(t1)
  lh t2, 6(t1)
  sb t0, 5(t1)
  lb t2, 5(t1)
  call _trm_init
