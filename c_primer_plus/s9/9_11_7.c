#include <stdio.h>
#include <ctype.h>
void digit(char c); // 判断是否为字母
void site(char c); // 返回字母所在的位置
int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF)
        digit(ch);
    printf("\n");
    return 0;
}
void digit(char c)
{
    if (isalpha(c))
        site(c);
    else
        printf("%d ", -1);
}
void site(char c)
{
    const int START = 1;
    const char LOWER = 'a';
    int difference; // 差

    c = tolower(c);
    difference = c - LOWER;
    printf("%d ", START + difference);
}