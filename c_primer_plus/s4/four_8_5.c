/* four_8_5.c -- */
#include <stdio.h>
int main(void)
{
    float velocity;
    float capacity;
    double download_time;

    printf("It is megabits per second: ");
    scanf("%f", &velocity);
    printf("megabytes of file: ");
    scanf("%f", &capacity);

    download_time = capacity / velocity;

    printf("At %.2f megabits per second, a file of %.2f megabytes\n", velocity, capacity);
    printf("download in %.2f seconds.\n", download_time);

    return 0;
}