#include <stdio.h> 
#define BASIC 0.15 
#define OVERSTEP 0.28
#define BACHELOR_STEP 17850 // 单身
#define OWNER_STEP 23900 // 户主
#define MARRIED_STEP 29750 // 已婚
#define DIVORCED_STEP 14875 // 离婚
#define STEP_BACHELOR_TAX BACHELOR_STEP * BASIC 
#define STEP_OWNER_TAX OWNER_STEP * BASIC
#define STEP_MARRIED_TAX MARRIED_STEP * BASIC
#define STEP_DIVORCED_TAX DIVORCED_STEP * BASIC
int input(void); // 输入种类验证
double income(void); // 输入收入验证
void print(void); // 打印种类
void answer(void); // 输出结果
int main(void)
{
    int y_n = 1;

    while (y_n)
    {
        answer();
        printf("Enter 1 to continue, enter 0 to exit: ");
        if (scanf("%d", &y_n) != 1 || (y_n == 1)) // 无法解决判定非字符问题
            break;
    }

    printf("Done.\n");
    return 0;
}
void answer(void)
{
    int tax_kind;
    double tax;
    double now_income;

    tax_kind = input();
    now_income = income();
    switch(tax_kind)
    {
        case 1:
        {
            if (now_income <= BACHELOR_STEP)
                tax = now_income * BASIC;
            else
                tax = STEP_BACHELOR_TAX + (now_income - BACHELOR_STEP) * OVERSTEP;            
        }
        case 2:
        {
            if (now_income <= OWNER_STEP)
                tax = now_income * BASIC;
            else
                tax = STEP_OWNER_TAX + (now_income - OWNER_STEP) * OVERSTEP;            
        }
        case 3:
        {
            if (now_income <= MARRIED_STEP)
                tax = now_income * BASIC;
            else
                tax = STEP_MARRIED_TAX + (now_income - MARRIED_STEP) * OVERSTEP;
        }
        case 4:
        {
            if (now_income <= DIVORCED_STEP)
                tax = now_income * BASIC;
            else
                tax = STEP_DIVORCED_TAX + (now_income - DIVORCED_STEP) * OVERSTEP;
        }
    }

    printf("your income: %.2lf your tax: %.2lf\n", now_income, tax);
}

int input(void)
{
    int kind; // 用户输入种类
    print();

    while (scanf("%d", &kind) != 1 || (kind < 1 || kind > 4))
        printf("Error! Please input 1, 2, 3 or 4: ");
    
    return kind;
}

void print(void)
{
    printf("\tlower: 0.15 overstep: 0.28\n");
    printf("1) bachelor\t2) owner\n");
    printf("3) married\t4) divorced\n");
    printf("Enter your kind: ");
}

double income(void)
{
    double now_income;

    printf("Enter your income now: ");
    while (scanf("%lf", &now_income) != 1 || (now_income < 0))
        printf("Error! Please enter only one number: ");
    return now_income;
}

