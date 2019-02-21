// x3.c -- 程序清单7.6 统计输入的字母或数字数量
#include <stdio.h>
#include <ctype.h>
#define DOT '.'
int main(void)
{
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != DOT)
    {
        if (isalnum(ch))
            charcount++;
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}