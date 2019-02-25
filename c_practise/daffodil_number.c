// daffodil_number -- 求水仙花数
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define LOWER 1
#define UPPER 1000
int main(void)
{
    int count; // 计数器
    int sum;
    long a, b, c;

    for (count = LOWER; count <= UPPER; count++)
    {
        a = count / 100;
        b = (count % 100) / 10;
        c = count % 10;
        sum = pow(a, 3) + pow(b, 3) + pow(c, 3);

        if (sum == count)
            printf("%d ", count);
    }
    printf("\n");
    system("cls");
    return 0;
}