// 本程序有问题

#include <stdio.h>
#define  RADIX 2
#define UPPER 8
int main(void)
{
    int receptacle[UPPER];
    int lower; // for循环初始化
    int product = 1; // 乘积

    for (lower = 0; lower < UPPER; lower++)
    {
        receptacle[lower] = product;
        product *= 2;
    }

    lower = 0;
    do 
    {
        printf("%d ", receptacle[lower]);
        lower++;
    }while (lower < 8);
    printf("\n");

    return 0;
}