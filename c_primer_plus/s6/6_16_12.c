#include <stdio.h>
int main(void)
{
    const double RADIX = 1.0;
    double step = 0;
    double sum;
    double sum2;
    int lower; // for循环初始化
    int upper; // for循环上限

    printf("请输入次数，0或负数则退出: ");
    scanf("%d", &upper);

    while (upper > 0)
    {
        for (lower = step; lower < upper; lower++) // 第一个答案
        {
            step += RADIX;
            sum += RADIX / step;
        }

        for (lower = step; lower < upper; lower++) // 第二个答案
        {
            step += RADIX;
            if (lower % 2 == 0)
                sum2 += RADIX / step;
            else
                sum2 -= RADIX / step;
        }
        printf("sum: %.2lf\t", sum);
        printf("sum2: %.2lf\n", sum2); // sum2出现问题！！！
        printf("请输入次数，0或负数则退出: ");
        scanf("%d", &upper);
    }
    
    return 0;
}