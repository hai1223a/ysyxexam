AM_SRCS := riscv/ysyxsoc/start.S \
		   riscv/ysyxsoc/bootloader.S \
           riscv/ysyxsoc/trm.c \

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker_soc.ld
LDFLAGS   += --defsym=_pmem_start=0x30000000 --defsym=_entry_offset=0x0 --print-map
LDFLAGS   += --gc-sections -e _start
IMAGE_NAME = $(basename $(notdir $(IMAGE)))
override NPCFLAGS += -l $(shell dirname $(IMAGE).elf)/ysyxsoc-log.txt \
                     -i $(IMAGE).bin \
                     -d $(NEMU_HOME)/build/riscv32-nemu-interpreter-so \
                     -p 1234 \
                     -e $(IMAGE).elf \
                     -g $(shell dirname $(IMAGE).elf)/ysyxsoc-ftracerlog.txt 

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = The insert-arg rule in Makefile will insert mainargs here.
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\"

insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) "$(MAINARGS_PLACEHOLDER)" "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: insert-arg
	@$(MAKE) -C $(NPC_HOME) run ARGS="$(NPCFLAGS)"

gdb: insert-arg
	@$(MAKE) -C $(NPC_HOME) gdb ARGS="$(NPCFLAGS)"

wave: insert-arg
	@$(MAKE) -C $(NPC_HOME) wave ARGS="$(NPCFLAGS)"

.PHONY: insert-arg
