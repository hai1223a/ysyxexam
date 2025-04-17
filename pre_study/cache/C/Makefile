CC := gcc
CFLAGS := -Wall -g
TARGET := main
LDFLAGS =                     # 链接选项（可根据需要添加库）
SRCDIR := .
OBJDIR := obj

SRC := $(shell find $(SRCDIR) -name "*.c")
OBJFILE := $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))
OBJ := $(filter-out $(OBJDIR)/cache_direct.o, $(OBJFILE))

all: clean $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)
	@./$@ 

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	@rm -rf $(TARGET) $(OBJDIR)

# 伪目标
.PHONY: all clean