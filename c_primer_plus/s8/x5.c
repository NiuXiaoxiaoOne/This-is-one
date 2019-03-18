#include <stdio.h>
int main(void)
{
    char ch;
    char ch1;

    putchar(ch = getchar());
    // ch1 = getchar(putchar(ch));

    printf("%c\n", ch);
    return 0;
}