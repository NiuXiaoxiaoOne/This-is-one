// x6.c -- 程序清单7.10 p201
#include <stdio.h>
#include <math.h>
int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle: ");
    while (scanf("%f", &length) == 1 && length > 0)
    {
        printf("Length = %0.2f\n", length);
        printf("Enter its width: ");
        while (scanf("%f", &width) != 1 || width <= 0)
            printf("error! Enter other width: ");
            continue;
        printf("Width = %0.2f\n", width);
        printf("Area = %0.2f\n", length * width);
        printf("Enter the length of the rectangle: ");
    }
    printf("Done.\n");
    return 0;
}