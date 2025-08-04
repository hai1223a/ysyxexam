CROSS_COMPILE := riscv64-linux-gnu-
CC      = $(CROSS_COMPILE)gcc
OBJDUMP = $(CROSS_COMPILE)objdump
OBJCOPY = $(CROSS_COMPILE)objcopy

CFLAGS = -march=rv32e_zicsr -mabi=ilp32e -nostdlib -ffreestanding

TARGET := test1
BIN_TARGET = $(TARGET).bin
SRC    := test1.c

.PHONY: all clean run dump

all: $(BIN_TARGET)
	
$(BIN_TARGET): $(TARGET)
	$(OBJDUMP) -d $< > $<.dump
	$(OBJCOPY) -O binary -j .text $< $@

$(TARGET): $(SRC) 
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGET) $(TARGET).dump