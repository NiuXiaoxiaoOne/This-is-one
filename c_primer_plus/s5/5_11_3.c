#include <stdio.h>
int main(void)
{
    int random_day;

    printf("输入一个任意天数: ");
    scanf("%d", &random_day);
    printf("%d天 ==> %d周%d天\n", random_day, random_day / 7, random_day % 7);

    return 0;
}