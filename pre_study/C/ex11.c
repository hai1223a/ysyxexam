// 第十一个程序：程序不变，只是将for循环替换为了while循环
/*
1.研究你是否真正复制了这些字符串。答案可能会让你感到意外和困惑。
    当在C中直接state[i]=argv[i]时，只是将指针复制到state[i]中，而不是复制字符串本身。
    只有使用strdup()函数时，才会复制字符串本身。
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv

    int i = 0;
    while(i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;
    i = 0;  // watch for this
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}