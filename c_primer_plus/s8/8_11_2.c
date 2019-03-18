#include <stdio.h>
int main(void)
{
    int ch;
    int amt = 0; // 统计字符数量

    while ((ch = getchar()) != EOF)
        amt++;
        if (amt % 10 == 0) // 每行打印十个数字
            printf("\n");
        putchar(ch);

    printf("\n");
    return 0;
}