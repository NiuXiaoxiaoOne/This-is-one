#include <stdio.h>
#include <string.h>
int main(void)
{
    char object[40];
    int object_size_upper; // 指定字符串上限
    int object_size_lower = 0; // 指定字符串下限

    printf("请输入一个字符串: ");
    scanf("%s", object);

    for (object_size_upper = strlen(object) - 1; object_size_upper >= object_size_lower; object_size_upper--)
        printf("%c", object[object_size_upper]);

    printf("\n");
    return 0;
}