#include <stdio.h>
#define capital 100 // 本钱
int main(void)
{
    const double Daphne_interest = 0.1; // 利息
    const double Deirdre_interest = 0.05;

    double Daphne_money_now = capital;
    double Deirdre_money_now = capital; // 当前金额
    int years = 1; // 年份

    do
    {
        Daphne_money_now += capital * Daphne_interest;
        Deirdre_money_now += Deirdre_money_now * Deirdre_interest;
        years++;
    }while (Deirdre_money_now <= Daphne_money_now);

    printf("years: %d ", years);
    printf("Deirdre: %.2lf$ Daphne: %.2lf$\n", Deirdre_money_now, Daphne_money_now);
    return 0;
}