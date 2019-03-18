#include <stdio.h>
int main(void)
{
    char ch;
    int amt = 0; // 统计字符数量

    while ((ch = getchar()) != EOF)
        amt++;
        printf("%c ", ch);

    printf("%d llo\n", amt);
    return 0;
}