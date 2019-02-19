#include <stdio.h>
#include <string.h>
int main(void)
{
    char object[40];
    int object_size_upper; // 指定字符串上限
    int object_size_lower = 0; // 指定字符串下限

    printf("请连续输入8个整数: ");
    scanf("%s", object);

    while (strlen(object) != 8) // 检测是否输入了8个整数
    {
        printf("格式错误，你输入了 %lu 个整数，请重新输入8个整数: ", strlen(object));
        scanf("%s", object);
    }

    for (object_size_upper = strlen(object) - 1; object_size_upper >= object_size_lower; object_size_upper--)
        printf("%c", object[object_size_upper]);

    printf("\n");
    return 0;
}