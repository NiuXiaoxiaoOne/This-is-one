// x4.c -- 程序清单8.8 p238
#include <stdio.h>
char get_choice(void); // 确保用户输入正确的选项
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
    int choice;
    void count(void); // 引入函数，可以在本函数内直接使用

    while ((choice = get_choice()) != 'q')
    {
        switch(choice)
        {
            case 'a':   printf("Buy low, sell high.\n");
                        break;
            case 'b':   putchar('\a');
                        break;
            case 'c':   count();
                        break;
            default:    printf("Program error!\n");
                        break;
        }
    }
    printf("Bye.\n");

    return 0;
}

void count(void)
{
    int n, i;

    printf("Count how far? Enter an integer:\n");
    n = get_int();
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
    while (getchar() != '\n')
        continue;
}

char get_choice(void)
{
    int ch;

    printf("Enter the letter of your choice:\n");
    printf("a. advice\tb. bell\nc. count\tq. quit\n");
    ch = get_first();
    while ((ch < 'a' || ch > 'c') && ch != 'q')
    {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }

    return ch;
}

char get_first(void)
{
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;
    
    return ch;
}

int get_int(void)
{
    int input;
    char ch;

    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch); // 处理错误答案
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
    }

    return input;
}