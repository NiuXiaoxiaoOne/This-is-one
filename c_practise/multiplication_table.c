// multiplication_table.c -- 九九乘法表
#include <stdio.h>
#define ONE 1
#define NINE 9
int main(void)
{
    int i, j;

    for (i = ONE; i <= NINE; i++)
    {
        for (j = ONE; j <= NINE; j++)
        {
            if (j <= i)
                printf("%-3d", i * j);
        }
        printf("\n");
    }

    return 0;
}