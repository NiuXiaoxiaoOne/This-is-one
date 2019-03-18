// x2.c -- 程序清单8.6 p229 按指定行列打印指定字符
#include <stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
    char ch; // 待打印字符
    int rows, cols, ss; // 行数和列数

    printf("Enter a character and two integers: \n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2) 
            break;
        display(ch, rows, cols); // char(ch)
        while (getchar() != '\n')
            continue;
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}