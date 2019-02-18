#include <stdio.h>
#define CENTIMETERS 2.54 // 1inches = 2.54centimeters
int main(void)
{
    double height;

    printf("What's your height in centimeters(<= 0 to quit): ");
    scanf("%lf", &height);

    while (height > 0)
    {
        printf("%.2f cm ==> %.2f inches\n", height, height / CENTIMETERS);
        printf("What's your height in centimeters(<= 0 to quit): ");
        scanf("%lf", &height);
    }
    printf("bye...\n");

    return 0;
}