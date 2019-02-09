/* four_8_4.c -- */
#include <stdio.h>
int main(void)
{
    float stature;
    char name[40];

    printf("Enter your stature: ");
    scanf("%f", &stature);
    printf("Enter your name: ");
    scanf("%s", name);

    printf("%s, you are %.3f feet tall.\n", name, stature);

    return 0;
} 