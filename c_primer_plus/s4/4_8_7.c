#include <stdio.h>
#include <float.h>
int main(void)
{
    const double double_variable = 1.0 / 3.0;
    const float float_variable = 1.0 / 3.0;

    printf("%.6f %.6f\n", double_variable, float_variable);
    printf("%.12f %.12f\n", double_variable, float_variable);
    printf("%.16f %.16f\n", double_variable, float_variable);
    printf("%d %d\n", FLT_DIG, DBL_DIG);
    

    return 0;
}