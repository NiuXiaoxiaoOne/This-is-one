#include <stdio.h>
#define UPPER 8
#define ZERO 0
int main(void)
{
    double one_array[UPPER]; // 数组1
    double two_array[UPPER]; // 数组2
    int lower; // for循环初始化
    int two_step = ZERO; // 数组2中的中间值

    printf("请连续输入8个数字，每个有空格隔开: ");

    for (lower = ZERO; lower < UPPER; lower++) // 数组1
        scanf("%lf", &one_array[lower]);

    for (lower = ZERO; lower < UPPER; lower++) // 数组2
    {
        two_step += one_array[lower];
        two_array[lower] = two_step;
    }

    for (lower = ZERO; lower < UPPER; lower++) // 显示数组1
        printf("%.2lf ", one_array[lower]);
    printf("\n");

    for (lower = ZERO; lower < UPPER; lower++) // 显示数组2
        printf("%.2lf ", two_array[lower]);
    printf("\n");

    return 0;
}