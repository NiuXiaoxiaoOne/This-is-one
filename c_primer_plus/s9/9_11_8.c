#include <stdio.h>
double power(double n, int p);
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number, enter q to quit: ");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g ** %d = %.5g\n", x, exp, xpow);
        printf("Enter a number, enter q to quit: ");
    }
    printf("Done.\n");
    return 0;
}
double power(double n, int p)
{
    double pow = 1;
    int count;

    if (n == 0 && p == 0)
    {
        printf("0 to the power of 0 is undefined.\n");
        return 1.0;
    }
    else if (n == 0)
        return 1.0;
    else
    {
        for (count = 0; count < p; count++)
            pow *= n;
        return pow;
    }
}