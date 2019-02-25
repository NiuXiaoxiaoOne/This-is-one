#include <stdio.h>
#define BASIC 10.0 // 每小时基本工资
#define BASIC_UPPER 10.0 * 1.5 // 加班时每小时的工资
#define TIME_UPPER 40.0 // 加班时间下限
#define TIME_UPPER_BASIC 40.0 * BASIC_UPPER // 加班40个小时时的工资
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
    double median_time_now; // 工作时间中间值
    double money; // 金额
    double sum_money; // 金额和
    double tax_now; // 税金
    double sum_tax_now; // 税金和

    printf("Enter your job-time in a week: ");
    scanf("%lf", &time_now);
    if (time_now < AMOUNT_TIME1)
    {
        sum_money = time_now * BASIC;
        sum_tax_now = money * TAX1;
    }
    else if (time_now <= AMOUNT_TIME2)
    {
        sum_money = MONEY1; // +30个小时的工资
        sum_tax_now = MONEY1 * TAX1; // +30小时的税率
        if (time_now >= TIME_UPPER) // 40小时以上的工作时间
        {
            money = 10 * BASIC; // +30-40间的工资
            tax_now = money * TAX2;
            sum_money += money;
            sum_tax_now += tax_now;
            money = (time_now - TIME_UPPER) * BASIC_UPPER; // 超过40小时后的工资
            tax_now = money * TAX2; 
            sum_money += money;
            sum_tax_now += tax_now;
        }
        else if (time_now < TIME_UPPER)
        {
            money = (time_now - AMOUNT_TIME1) * BASIC;
            tax_now = money * TAX2;
            sum_money += money;
            sum_tax_now += tax_now;
        }
    }
    else
    {
        sum_money = TIME_UPPER * BASIC + (time_now * BASIC_UPPER);
        sum_tax_now = MONEY1_TAX + MONEY2_TAX + (time_now - AMOUNT_TIME2) * BASIC_UPPER * TAX3;
    }
    
    printf("job-time: %.2lf job-money-sum: %.2lf\n", time_now, sum_money);
    printf("job-tax-sum: %.2lf job-profit: %.2lf\n", sum_tax_now, sum_money - sum_tax_now);
    return 0;
}