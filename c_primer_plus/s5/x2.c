/* x2.c -- 计算小麦数量 */
#include <stdio.h>
#define SQUARES_SUPPERS 64 // 方格数上限
int main(void)
{
    int squares_now = 1; // 当前方格数
    double wheat = 1.0; // 当前小麦数量
    
    printf("amount of squares\tamount of wheat\n");
    while (squares_now < SQUARES_SUPPERS + 1)
    {
        printf("%d\t%.0lf\n", squares_now, wheat);
        wheat *= 2;
        squares_now += 1;
    }

    return 0;

}