ENTRY(_start)

MEMORY {
  mrom  (rx)  : ORIGIN = 0x20000000, LENGTH = 4K
  flash (rx)  : ORIGIN = 0x30000000, LENGTH = 16M
  psram (rwx) : ORIGIN = 0x80000000, LENGTH = 4M

}
REGION_ALIAS("ROM", mrom);
REGION_ALIAS("RAM", psram);
SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  .text : {
    *(entry)
    *(.text*)
  } > ROM AT> ROM
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
    rodata_end = .;
  } > ROM AT> ROM

  .data : {
    data_start = .;
    *(.data .data.*)
  } > RAM AT > ROM
  data_size = SIZEOF(.data);
  data_load_start = LOADADDR(.data);
  edata = .;
  _data = .;
  
  .bss : {
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > RAM AT> ROM

  /* 堆区（动态计算剩余空间） */
  _heap_start = ALIGN(4);  /* 堆起始地址（4字节对齐） */
  _heap_end = ORIGIN(RAM) + LENGTH(RAM) - 0x10000;  /* 堆结束地址 = SRAM结束 - 栈大小（64KB） */

  _stack_top = .;
  . = . + 0x10000;
  _stack_pointer = .;
  end = .;
  _end = .;  
}
