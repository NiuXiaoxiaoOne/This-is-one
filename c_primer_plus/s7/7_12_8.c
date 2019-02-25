#include <stdio.h>
#include <stdbool.h>
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
double get_value(void); // 获取值
void input(void); // 打印选项
int main(void)
{
    double time_now; // 输入工作时间
    double median_time_now; // 工作时间中间值
    double money; // 金额
    double sum_money; // 金额和
    double tax_now; // 税金
    double sum_tax_now; // 税金和

    time_now = get_value();
    if (time_now == 5)
        printf("\n");
    else if (time_now < AMOUNT_TIME1)
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

double get_value(void)
{
    double time_now;
    int option;
    bool t_f = true;

    input();

    while (t_f)
    {
        while (scanf("%d", &option) != 1) // 无法解决的问题，如何解决不合法字符
        {
            input();
            printf("Enter option of right: ");
            continue;
        }
        if (option == 5)
        {
            break;
            t_f = false;
        }
        else if (option < 1 || option > 4)
        {
            input();
            printf("Enter option of right: ");
            continue;
        }
        else
        {
           printf("Enter first job-time in the week: ");
           scanf("%lf", &time_now); // 无法解决的问题，解决不合法字符
           t_f = false;
        }
    }

    return time_now;
}

void input(void)
{
    char ch1 = '*';
    int count;

    for (count = 0; count <= 40; count++)
        printf("%c", ch1);
    printf("\nEnter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr\t\t2) $9.33/hr\n");
    printf("3) $10.00/hr\t\t4) $11.20/hr\n");
    printf("5) quit\n");
    for (count = 0; count <= 40; count++)
        printf("%c", ch1);
    printf("\n");
}