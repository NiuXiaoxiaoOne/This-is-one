#include <stdio.h>
#define SIZE 5
int main(void)
{
    double source[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE], target2[SIZE], target3[SIZE];
    double * ar;
    int count;

    // target1
    for (count = 0; count < SIZE; count++)
        target1[count] = source[count];

    // target2
    ar = source;
    for (count = 0; count < SIZE; count++)
        target2[count] = *(ar + count);

    printf("\n");
    return 0;
}