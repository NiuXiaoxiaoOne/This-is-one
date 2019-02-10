#include <stdio.h>
int main(void)
{
    double money_now; // 当前的钱数
    int day_now = 0; // 当前的天数
    double count; // 中间值

    printf("Enter your the money of first day: ");
    scanf("%lf", &count);

    while (day_now++ < 20)
    {
        money_now += count;
        count++;
    }
    printf("your money is %.2f in twenty day.\n", money_now);

    return 0;
}