CFLAGS=-Wall -g -fsanitize=address -fsanitize=undefined

# 获取所有以 ex 开头的 .c 文件，并生成对应的可执行文件名
SRCS := $(wildcard ex*.c)
EXES := $(SRCS:.c=)

# 默认目标
all: $(EXES)
	@for exe in $(EXES); do \
		echo '\n'; \
		echo "Running $$exe..."; \
		if [ "$$exe" = "ex13" ]; then \
			./$$exe happy; \
		elif [ "$$exe" = "ex17" ]; then \
			./$$exe db.dat c 100 100; \
			./$$exe db.dat s 1 zed zed@zedshaw.com; \
			./$$exe db.dat s 2 frank frank@zedshaw.com;\
			./$$exe db.dat s 3 joe joe@zedshaw.com; \
			./$$exe db.dat l; \
			./$$exe db.dat d 3; \
			./$$exe db.dat f zed; \
			./$$exe db.dat g 2;\
		elif [ "$$exe" = "ex18" ]; then \
			./$$exe 3 5 8 34 6 99; \
		elif [ "$$exe" = "ex_sortlist" ]; then \
			./$$exe 3 4 8 1 2 35 6 9 0; \
		elif [ "$$exe" = "ex5" ]; then \
			./$$exe; \
		else \
			./$$exe; \
		fi; \
	done

# 清理生成的文件
clean:
	rm -f $(EXES)
	rm -f *.dat
