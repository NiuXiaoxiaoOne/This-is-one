// 本程序有问题

#include <stdio.h>
#define  RADIX 2
#define UPPER 8
int main(void)
{
    int receptacle[UPPER];
    int lower; // for循环初始化
    int product; // 乘积
    int count; // while循环初始化

    for (lower = 0; lower < UPPER; lower++)
    {
        product = 1;
        count = lower;
        while (count >= 0)
            product *= RADIX;
            count--;
        receptacle[lower] = product;
    }

    lower = 0;
    do 
    {
        printf("%d: %d ", lower, receptacle[lower]);
        lower++;
    }while (lower < 8);

    return 0;
}