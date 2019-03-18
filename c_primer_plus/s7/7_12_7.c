#include <stdio.h>
#include <time.h>
#define BASIC 10.0 // 每小时基本工资
#define BASIC_UPPER 10.0 * 1.5 // 加班时每小时的工资
#define TIME_UPPER 40.0 // 加班时间下限
#define TIME_UPPER_BASIC 40.0 * BASIC // 加班40个小时时的工资
#define MONEY1 300.0
#define MONEY2 150.0
#define TAX1 0.15 // 工资在300$内的税率
#define TAX2 0.2 // 300 <= > 450$的税率
#define TAX3 0.25 // < 450$以上的税率
#define MONEY1_TAX MONEY1 * TAX1 // 300$时的税金
#define MONEY2_TAX MONEY2 * TAX2 // 450$时的税金
#define AMOUNT_TIME1 30.0 // 300$的工作时间
#define AMOUNT_TIME2 AMOUNT_TIME1 + 15.0 // 450$的工作时间
int main(void)
{
    double time_now; // 输入工作时间
    double sum_money; // 金额和
    double tax_now; // 税金
    clock_t start_time, end_time;

    printf("Enter your job-time in a week: ");
    scanf("%lf", &time_now);
    start_time = clock();
    if (time_now <= 40) // 求工资
        sum_money = time_now * BASIC;
    else
        sum_money = TIME_UPPER_BASIC + (time_now - TIME_UPPER) * BASIC_UPPER;
    if (time_now <= 300) // 求税金
        tax_now = sum_money * TAX1;
    else if (time_now <= 450)
        tax_now = MONEY1_TAX + (sum_money - MONEY1) * TAX2;
    else
        tax_now = MONEY1_TAX + MONEY2_TAX + (sum_money - MONEY1 - MONEY2) * TAX3;

    printf("job-time: %.2lf job-money-sum: %.2lf\n", time_now, sum_money);
    printf("job-tax-sum: %.2lf job-profit: %.2lf\n", tax_now, sum_money - tax_now);
    end_time = clock();
    printf("2: %f\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
    return 0;
}