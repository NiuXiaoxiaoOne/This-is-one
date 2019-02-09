/* fahr_change_celsius.c -- fahr change celsius!*/
/* C = (5 / 9)(F - 32) */
#include <stdio.h>
int main(void)
{
    const int lower = 0; // fahr温度下限
    const int upper = 300; // fahr温度上限
    const int step = 20; // fahr每次递增步长
    int fahr, celsius;
    fahr = lower;
    
    printf("|fahr\tcelsius|\n");
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("|%d\t%d|\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}