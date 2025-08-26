/* 这个脚本使用了三个内存区域, 程序从_boot_fsbl执行, 位于.entry段, 将.boot复制到SRAM中;
.boot段包含了复制用的bootloader代码, 将.text和.rodata复制到SRAM中,
将.data和.bss复制到RAM中, 然后程序将从SRAM中执行.

同时设置了64K的栈放在RAM尾端, 适合较小的, 但需要更大的栈的程序运行. */
ENTRY(_start)

MEMORY {
  flash (rx)  : ORIGIN = 0x30000000, LENGTH = 16M
  sram  (rwx) : ORIGIN = 0x0f000000, LENGTH = 8K
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
}
REGION_ALIAS("ROM", flash);
REGION_ALIAS("RAM", psram);
REGION_ALIAS("SRAM", sram);

_STACK_SIZE = 0x10000;     /* 栈大小 64KB */
SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  .entry : {
    *(entry)
  } > ROM AT> ROM
  
  .boot : {
    boot_start = .;
    *(boot)
  } > SRAM AT> ROM
  boot_size = SIZEOF(.boot);
  boot_load_start = LOADADDR(.boot);

  .text : {
    text_start = .;
    *(.text*)
  } > SRAM AT> ROM
  text_size = SIZEOF(.text);
  text_load_start = LOADADDR(.text);

  .rodata : {
    rodata_start = .;
    *(.rodata*)
  } > SRAM AT> ROM
  rodata_size = SIZEOF(.rodata);
  rodata_load_start = LOADADDR(.rodata);

  .data : {
    data_start = .;
    *(.data*)
    *(.sdata*)
  } > RAM AT > ROM
  data_size = SIZEOF(.data);
  data_load_start = LOADADDR(.data);
  
  .bss : {
    bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > RAM AT> ROM
  bss_size = SIZEOF(.bss);

  /* 堆区（动态计算剩余空间） */
  _heap_start = ALIGN(4);  /* 堆起始地址（4字节对齐） */
  _heap_end = ORIGIN(RAM) + LENGTH(RAM);

  . = _heap_end;
  _stack_top = .;
  . = . + _STACK_SIZE;
  _stack_pointer = .;
  end = .;
  _end = .;  
}
