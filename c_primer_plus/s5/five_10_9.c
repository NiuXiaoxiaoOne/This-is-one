/* fiv_10_9.c -- 打印a-g */
#include <stdio.h>
int main(void)
{
    char grepheme_a = 'a';
    char grepheme_g = 'g';
    int n;

    n = grepheme_a - 1;

    while (n++ < grepheme_g)
        printf("%5c", n);
    printf("\n");

    return 0;
}