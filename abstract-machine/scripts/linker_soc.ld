ENTRY(_start)

MEMORY {
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
  flash : ORIGIN = 0x30000000, LENGTH = 16M
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  .text : {
    *(entry)
    *(.text*)
  } > flash AT> flash
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
    rodata_end = .;
  } > flash AT> flash

  .data : {
    data_start = .;
    *(.data .data.*)
  } > sram AT > flash
  data_size = SIZEOF(.data);
  data_load_start = LOADADDR(.data);
  edata = .;
  _data = .;
  
  .bss : {
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > sram AT> flash

  /* 堆区（动态计算剩余空间） */
  _heap_start = ALIGN(4);  /* 堆起始地址（4字节对齐） */
  _heap_end = ORIGIN(sram) + LENGTH(sram) - 0x400;  /* 堆结束地址 = SRAM结束 - 栈大小（1KB） */

  _stack_top = ALIGN(4);
  . = . + 0x400;
  _stack_pointer = .;
  end = .;
  _end = .;  
}
