#include <stdio.h>
int main(void)
{
    int * ptr;
    int torf[2][2] = {12};
    ptr = torf[0];

    printf("%d", *(ptr + 2));
    return 0;
}