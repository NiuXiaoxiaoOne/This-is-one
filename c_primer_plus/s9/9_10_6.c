#include <stdio.h>
void alter(double * x, double * y);
int main(void)
{
    double one, two;

    printf("输入两个整数: ");
    while (scanf("%lf %lf", &one, &two) != 2)
        printf("请重新输入: ");
    
    alter(&one, &two);
    printf("one: %.2lf two: %.2lf\n", one, two);
    return 0;
}

void alter(double * x, double * y)
{
    double one, two;

    one = *x;
    two = *y;
    *x = one + two;
    if (one <= two)
        *y = two - one;
    else
        *y = one - two;    
}