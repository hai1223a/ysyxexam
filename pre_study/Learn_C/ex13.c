#include <stdio.h>
#include <ctype.h> // 用于tolower函数

int main(int argc, char *argv[])
{
    if(argc < 2) {
        printf("ERROR: You need at least one argument.\n");
        return 1;
    }

    // 遍历所有命令行参数
    for(int arg = 1; arg < argc; arg++) {
        printf("Processing argument %d: %s\n", arg, argv[arg]);

        // 使用逗号在for循环中初始化变量
        for(int i = 0, letter = argv[arg][i]; letter != '\0'; i++, letter = argv[arg][i]) {
            // 将字母转换为小写
            letter = tolower(letter);

            switch(letter) {
                case 'a':
                    printf("%d: 'A'\n", i);
                    break;

                case 'e':
                    printf("%d: 'E'\n", i);
                    break;

                case 'i':
                    printf("%d: 'I'\n", i);
                    break;

                case 'o':
                    printf("%d: 'O'\n", i);
                    break;

                case 'u':
                    printf("%d: 'U'\n", i);
                    break;

                case 'y':
                    if(i > 2) {
                        // it's only sometimes Y
                        printf("%d: 'Y'\n", i);
                    }
                    break;

                default:
                    printf("%d: %c is not a vowel\n", i, letter);
            }
        }
    }

    return 0;
}