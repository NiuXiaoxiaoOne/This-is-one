#include <stdio.h>
#include <math.h>
double return_result(double oneNumber, double twoNumber);
int main(void)
{
    double once;
    double twice;

    printf("Enter a pair of numbers: ");
    
    while (scanf("%lf %lf", &once, &twice) == 2)
    {
        
        if (((__builtin_types_compatible_p(typeof(once), double)) && \
                (__builtin_types_compatible_p(typeof(twice), double))))

            printf("%.2lf\n", return_result(once, twice));
            printf("Enter a pair of numbers, nonnumeric exit: ");
    }
    return 0;
}

double return_result(double oneNumber, double twoNumber)
{
    double result;

    result = fabs(oneNumber - twoNumber) / (oneNumber * twoNumber);
    return result;
}