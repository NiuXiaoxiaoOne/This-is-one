#include <stdio.h>
void max(const int ar[], int amount);
int main(void)
{
    int scrone[] = {10, 20, -1, 4, 5, 9};
    int SIZE = sizeof scrone / sizeof scrone[0];

    max(scrone, SIZE);
    return 0;
}

void max(const int ar[], int amount)
{
    int upper = ar[0]; // 求max
    int lower = ar[0]; // 求min
    int count; // 计数器

    for (count = 0; count < amount; count++)
    {
        if (upper <= ar[count])
            upper = ar[count];
        if (lower >= ar[count])
            lower = ar[count];
    }
    printf("max: %d, min: %d, difference: %d\n", upper, lower, upper - lower);
}