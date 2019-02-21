#include <stdio.h>
int main(void)
{
    const double CAPITAL = 1000000; // 本金
    const double INTEREST = 0.08; // 利息
    const double EXTRACT = 100000; // 每次取出的钱

    double money_now = CAPITAL; // 当前的账户余额
    int year; // 年份

    do 
    {
        money_now += money_now * INTEREST;
        money_now -= EXTRACT;
        year += 1;
    }while (money_now > 0);

    printf("year: %d\n", year);
    return 0;
}