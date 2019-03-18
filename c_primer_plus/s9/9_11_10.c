#include <stdio.h>
void to_base_n(int x, int base);
int main(void)
{
    int number, base;

    while (scanf("%d %d", &number, &base) == 2)
        to_base_n(number, base);

    return 0;
}

void to_base_n(int x, int base)
{
    int r;

    r = x % base;
    if (x >= base)
        to_base_n(x / base, base);
    putchar('0' + r);
    return;
}