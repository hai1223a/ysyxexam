# 通用变量
CC := gcc
CFLAGS := -g -Wall -fsanitize=address 
# 默认目标
.PHONY: all
all:
	@echo "Usage: make exXX (e.g., make ex01)"

# 通用规则：编译并执行
ex%: ex%.c
	@$(CC) $(CFLAGS) -o $@.o $< && ./$@.o

# 特定规则：为某些文件单独处理参数
ex04: ex04.c
	@$(CC) $(CFLAGS) -o $@.o $< && valgrind ./$@.o

ex10: ex10.c
	@$(CC) $(CFLAGS) -o $@.o $< && ./$@.o happy shift caps ctrl

ex11: ex11.c
	@$(CC) $(CFLAGS) -o $@.o $< && ./$@.o happy shift caps ctrl

ex12: ex12.c
	@$(CC) $(CFLAGS) -o $@.o $< && ./$@.o one two

ex13: ex13.c
	@$(CC) $(CFLAGS) -o $@.o $< && ./$@.o Zed Shaw

ex14: ex14.c
	@$(CC) $(CFLAGS) -o $@.o $< && ./$@.o hi this is cool

ex15: ex15.c
	@$(CC) $(CFLAGS) -o $@.o $< && ./$@.o hello world

ex17: ex17.c
	@$(CC) $(CFLAGS) -o $@.o $< && chmod +x $@.sh && ./$@.sh

ex18: ex18.c
	@$(CC) $(CFLAGS) -o $@.o $< && ./$@.o 32 45 677 31 6 0 -3
clean:
	@rm *.o *.db