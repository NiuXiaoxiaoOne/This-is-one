// x2.c -- 程序清单10.18 p310
#include <stdio.h>
#define ROWS 3
#define COLS 4
int sum2d(int ar[][COLS], int rows);
int main(void)
{
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}
    };

    printf("%d\n", sum2d(junk, ROWS));

    return 0;
}
int sum2d(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot = 0;
    for (r = 0; r < rows; r++)
    {
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];
    }
    return tot;
}