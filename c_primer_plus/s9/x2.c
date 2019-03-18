// x2.c -- 程序清单9.7 p259
#include <stdio.h>
#include <time.h>
long fact(int n);
long rfact(int n);
int main(void)
{
    int num;
    clock_t start_time, end_time;

    printf("This program calculates factorials, ");
    printf("(q to quit): \n");
    while (scanf("%d", &num) == 1)
    {
        start_time = clock();
        printf("loop: %d factorial = %ld\t",
                num, fact(num));
        end_time = clock();
        printf("1: %f\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

        start_time = clock();
        printf("recursion: %d factorial = %ld\t",
                num, rfact(num));
        end_time = clock();
        printf("2: %f\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
        
        printf("Enter a value: \n");
    }
    printf("Bye.\n");
    return 0;
}

long fact(int n) // 使用循环的函数
{
    long ans;

    for (ans = 1; n > 1; n--)
        ans *= n;

    return ans;
}

long rfact(int n) // 使用递归的函数
{
    long ans;

    if (n > 0)
        ans = n * rfact(n - 1);
    else
        ans = 1;

    return ans;
}