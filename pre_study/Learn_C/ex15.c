#include <stdio.h>

// 函数声明
void print_with_indexing(char **names, int *ages, int count);
void print_with_pointers(char **names, int *ages, int count);
void print_with_complex_pointers(char **names, int *ages, int count);
void print_addresses(char **names, int *ages, int count);

int main(int argc, char *argv[])
{
    // 创建两个数组
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // 获取数组大小
    int count = sizeof(ages) / sizeof(int);

    // 使用索引打印
    printf("Using indexing:\n");
    print_with_indexing(names, ages, count);

    // 使用指针打印
    printf("\nUsing pointers:\n");
    print_with_pointers(names, ages, count);

    // 使用复杂指针打印
    printf("\nUsing complex pointers:\n");
    print_with_complex_pointers(names, ages, count);

    // 打印指针地址
    printf("\nPrinting addresses:\n");
    print_addresses(names, ages, count);

    // 使用指针处理命令行参数
    printf("\nProcessing command-line arguments:\n");
    for (char **arg = argv; *arg != NULL; arg++) {
        printf("Argument: %s (Address: %p)\n", *arg, (void *)arg);
    }

    return 0;
}

// 使用索引打印
void print_with_indexing(char **names, int *ages, int count)
{
    for (int i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }
}

// 使用指针打印
void print_with_pointers(char **names, int *ages, int count)
{
    for (int i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(names + i), *(ages + i));
    }
}

// 使用复杂指针打印
void print_with_complex_pointers(char **names, int *ages, int count)
{
    char **cur_name = names;
    int *cur_age = ages;

    while ((cur_age - ages) < count) {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
        cur_name++;
        cur_age++;
    }
}

// 打印指针地址
void print_addresses(char **names, int *ages, int count)
{
    for (int i = 0; i < count; i++) {
        printf("Name pointer: %p, Age pointer: %p\n", (void *)&names[i], (void *)&ages[i]);
    }
}