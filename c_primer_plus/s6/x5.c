/* x5.c -- 我的第一个嵌套循环 */
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'a'; ch < ('a' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}