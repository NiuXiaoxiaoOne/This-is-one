#include <stdio.h>
void chline(char c, int i, int j);
int main(void)
{
    int line_n, list_n;
    char ch;

    printf("请输入一个字符和两个数字: ");
    scanf("%c", &ch);
    scanf("%d %d", &line_n, &list_n);
    chline(ch, line_n, list_n);

    return 0;
}

void chline(char c, int i, int j)
{
    int line, list;

    for (list = 0; list < j; list++)
    {
        for (line = 0; line < i; line++)
            printf("%c", c);
        printf("\n");
    }
}