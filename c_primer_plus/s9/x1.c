// x1.c -- 程序清单9.5 p255
#include <stdio.h>
int imax(int n, int m) {return (n > m ? n : m);}
int main(void)
{
    printf("%d and %d is %d.\n", 3, 5, imax(3, 5));
    printf("%d and %d is %d.\n", 3, 5, imax(3, 5));
    return 0;
}
