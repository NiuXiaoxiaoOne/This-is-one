#include <stdio.h>
#include <math.h>
double return_result(double oneNumber, double twoNumber);
int main(void)
{
    double once;
    double twice;

    printf("请输入第一个小数: ");
    scanf("%lf", &once);
    printf("请输入第二个小数: ");
    scanf("%lf", &twice);

    if (((__builtin_types_compatible_p(typeof(once), double)) && \
            (__builtin_types_compatible_p(typeof(twice), double))))
        printf("%.2lf\n", return_result(once, twice));
    else
        printf("输入错误，请输入一个小数!!!\n");

    return 0;
}

double return_result(double oneNumber, double twoNumber)
{
    double result;

    result = fabs(oneNumber - twoNumber) / (oneNumber * twoNumber);
    return result;
}