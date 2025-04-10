// 第十个程序：通过命令行使用main函数的参数，作为研究字符串数组的示例
/*
1.查询NULL是什么东西，尝试将它用做states的一个元素，看看它会打印出什么。
    define NULL (void *)0表示空指针，只想无效的地址，作为元素打印会得到(null)
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    // why am I skipping argv[0]?
    for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };
    int num_states = 4;

    for(i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}