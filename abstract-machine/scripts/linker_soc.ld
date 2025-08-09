ENTRY(_start)

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

REGION_ALIAS("REGION_TEXT", mrom);
REGION_ALIAS("REGION_RODATA", mrom);
REGION_ALIAS("REGION_DATA", sram);
REGION_ALIAS("REGION_BSS", sram);

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = ORIGIN(mrom);
  .text : {
    *(entry)
    *(.text*)
  } > REGION_TEXT
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
    rodata_end = .;
  } > REGION_RODATA

  . = ORIGIN(sram);
  .data : AT(rodata_end)
  {
    data_start = .;
    *(.data)
  } > REGION_DATA
  data_size = SIZEOF(.data);
  data_load_start = LOADADDR();
  edata = .;
  _data = .;
  
  .bss : {
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > REGION_BSS

  /* 堆区（动态计算剩余空间） */
  _heap_start = ALIGN(4);  /* 堆起始地址（4字节对齐） */
  _heap_end = ORIGIN(sram) + LENGTH(sram) - 0x400;  /* 堆结束地址 = SRAM结束 - 栈大小（1KB） */

  _stack_top = ALIGN(4);
  . = . + 0x400;
  _stack_pointer = .;
  end = .;
  _end = .;  
}
