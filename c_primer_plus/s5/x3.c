/* x3.c -- 计算前20个数的和 */
#include <stdio.h>
int main(void)
{
    int value_now = 0;
    int sum_now = 0;

    while (value_now++ < 20)
    {
        sum_now += value_now;
    }

    printf("sum = %d\n", sum_now);

    return 0;
}