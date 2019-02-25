// x5.c -- 程序清单7.8 p197
#include <stdio.h>
#define COVERAGE 350 //每罐油桶可刷的面积
int main(void)
{
    int sq_feet; // 用户输入油漆的面积
    int cans; // 求出的罐数

    printf("Enter number of square feet to be painted: ");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans,
                cans == 1 ? "can" : "cans");
        printf("Enter next value (q to quit): ");
    }

    return 0;
}