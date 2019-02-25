#include <stdio.h>
int main(void)
{
    int count = 0;
    char ch;

    printf("Enter some text, enter \'#\' to quit: ");
    while ((ch = getchar()) != '#')
    {
        printf("\'%c\' : %d ", ch, ch);
        count++;
        if (count % 8 == 0)
            printf("\n");
    }
    printf("\n");

    return 0;
}