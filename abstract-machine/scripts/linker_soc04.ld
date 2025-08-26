/* 没法处理rttread的extra.ld脚本, 这个脚本就是rttread的专门的脚本, 用之前需要把extra.ld的内容都删除 */
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
        /* section information for finsh shell */
    __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(8);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);

    /* section information for initial. */
    . = ALIGN(8);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(8);

    __rt_utest_tc_tab_start = .;
    KEEP(*(UtestTcTab))
    __rt_utest_tc_tab_end = .;

    . = ALIGN(8);
    __am_apps_data_start = .;
    *(__am_apps.data*)
    *(__am_apps.sdata*)
    __am_apps_data_end = .;
    . = ALIGN(8);
  } > RAM AT > ROM
  data_size = SIZEOF(.data);
  data_load_start = LOADADDR(.data);
  
  .bss : {
    bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(8);
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    . = ALIGN(8);
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