/* 这个脚本使用了两个内存区域, 程序从_boot_fsbl执行, 将.data和.bss复制到RAM中, 然后程序将从ROM中执行.

同时设置了64K的栈放在RAM尾端, 适合较大的, 需要更大的栈的程序运行. */
ENTRY(_start)

MEMORY {
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M
  flash (rx)  : ORIGIN = 0x30000000, LENGTH = 16M

}
REGION_ALIAS("ROM", flash);
REGION_ALIAS("RAM", psram);

_STACK_SIZE = 0x10000;     /* 栈大小：64KB */
SECTIONS {
  .entry : {
    *(entry)
  } > ROM AT> ROM
  
  .boot : {
    boot_start = .;
    *(boot)
  } > ROM AT> ROM
  boot_size = SIZEOF(.boot);
  boot_load_start = LOADADDR(.boot);

  .text : {
    text_start = .;
    *(.text*)
  } > ROM AT> ROM
  text_size = SIZEOF(.text);
  text_load_start = LOADADDR(.text);

  .rodata : {
    rodata_start = .;
    *(.rodata*)
    *(.srodata*)
  } > ROM AT> ROM
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
  _heap_end = ORIGIN(RAM) + LENGTH(RAM) - _STACK_SIZE; 

  . = _heap_end;
  _stack_top = .;
  . = . + _STACK_SIZE;
  _stack_pointer = .;
  end = .;
  _end = .;  
}