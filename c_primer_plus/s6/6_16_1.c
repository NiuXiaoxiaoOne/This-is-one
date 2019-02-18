#include <stdio.h>
#define COUNT 26
#define AAA 'a'
int main(void)
{
    char element[COUNT]; // 数组
    int index; // 计数器

    for (index = 0; index < COUNT; index++)
        element[index] = AAA + index;

    for (index = 0; index < COUNT; index++)
        printf("%c ", element[index]);
    printf("\n");
    return 0;
}