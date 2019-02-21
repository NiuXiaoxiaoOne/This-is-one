#include <stdio.h>
#define LOWER 0
#define UPPER 5
#define OBJECT 'F'
int main(void)
{
    int index; // 第一个for循环初始值
    int count; // 第二个

    for (index = LOWER; index <= UPPER; index++)
    {
        for (count = LOWER; count <= index; count++)
            printf("%c", OBJECT - count);
        printf("\n");
    }

    return 0;
}