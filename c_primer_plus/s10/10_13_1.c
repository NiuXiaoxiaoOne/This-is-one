#include <stdio.h>
#define YEARS 2
#define MONTHS 2
int main(void)
{
    const float rain[YEARS][MONTHS] = {
        {1.0, 3.0},
        {4.0, 5.0}
    };
    int year, month;
    float subtot, total;

    for (year = 0; year < YEARS; year++)
    {
        subtot = 0;
        for (month = 0; month < MONTHS; month++)
            subtot += *(*(rain + year) + month);
        printf("year: %d subtot: %.2f\n", year, subtot);
    }
    return 0;
}