#include <stdio.h>
void reverse(const double ar[], int amount);
int main(void)
{
    const double menu[] = {1.0, 2.0, 3.0, -1.0, 10.0};
    int SIZE = sizeof menu / sizeof menu[0];

    reverse(menu, SIZE);
    return 0;
}
void reverse(const double ar[], int amount)
{
    double re[amount];
    int count;
    int index = -1;

    for (count = 0; count < amount; count++)
    {
        re[count] = ar[index];
        index--;
    }
    for (count = 0; count < amount; count++)
        printf("%lf ", re[count]);
    printf("\n");
}
