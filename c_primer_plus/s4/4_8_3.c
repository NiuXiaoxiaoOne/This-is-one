#include <stdio.h>
int main(void)
{
    double random_digit;

    scanf("%lf", &random_digit);

    printf("a. The input is %.1f or %3.1e.\n", random_digit, random_digit);
    printf("b. The input is %+.3f or %3.3E.\n", random_digit, random_digit);

    return 0;
}