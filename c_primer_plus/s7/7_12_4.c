#include <stdio.h>
int main(void)
{
    char ch;
    int full_stop_replace, exclamation_mark_replace;

    full_stop_replace = exclamation_mark_replace = 0;

    printf("Enter some text(enter '#' to quit): ");
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            ch = '!';
            printf("%c", ch);
            full_stop_replace++;
        }
        else if (ch == '!')
        {
            ch = '!';
            printf("%c", ch);
            printf("%c", ch);
            exclamation_mark_replace++;
        }
        else
            printf("%c", ch);
    }
    printf("\n");
    printf("replace of full stop: %d replace of exclamation mark: %d\n",
            full_stop_replace, exclamation_mark_replace);
    return 0;
}