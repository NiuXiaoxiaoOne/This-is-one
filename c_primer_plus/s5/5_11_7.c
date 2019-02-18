#include <stdio.h>
void cube_of_digit(double random_digit);
int main(void)
{
    double digit;

    printf("Enter a the digit of random: ");
    scanf("%lf", &digit);
    cube_of_digit(digit);

    return 0;
}

void cube_of_digit(double random_digit)
{
    printf("%.2f\n", random_digit * random_digit * random_digit);
}