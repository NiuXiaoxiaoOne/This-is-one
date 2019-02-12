/* x3.c -- 查询快递重量计费: 程序清单6.13 */
#include <stdio.h>
int main(void)
{
    const int FIRST_OZ = 46; // 首重
    const int NEXT_OZ = 20; // 多余重量计算
    int ounces, cost;

    printf("ounces \tcost\n");
    for (ounces = 1, cost = FIRST_OZ; \
            ounces <= 16; \
            ounces++, cost += NEXT_OZ)
        printf("%5d \t$%4.2f\n", ounces, cost / 100.0);

    return 0;
}