#include <stdio.h>
#include <ctype.h>
#include <string.h> // 用于 strlen

void print_letters(const char arg[], int length)
{
    for (int i = 0; i < length; i++) {
        char ch = arg[i];

        // 只打印数字和空格
        if (!(isdigit(ch) ^ isspace(ch))) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

void print_arguments(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++) {
        int length = strlen(argv[i]); // 获取字符串长度
        printf("Argument %d: %s (length: %d)\n", i, argv[i], length);
        print_letters(argv[i], length);
    }
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}