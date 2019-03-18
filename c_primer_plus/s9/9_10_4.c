// 用普通运算方式和指针的方式求和，并返回各自运算时间
#include <stdio.h>
#include <time.h>
int sum_1(int x, int y);
int sum_2(int * x, int * y); // 用指针进行运算
int main(void)
{
    int one, two, sum;

    printf("请输入两个整数: ");
    while (scanf("%d %d", &one, &two) != 2)
        printf("格式错误，请再输入一次: ");
    sum = sum_2(&one, &two);
    sum = sum_1(one, two);

    printf("%d\n", sum);
    return 0;
}

int sum_1(int x, int y)
{
    int sum;
    clock_t start_time, end_time;

    start_time = clock();
    sum = x + y;
    end_time = clock();
    printf("1: %lf\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
    return sum;
}

int sum_2(int * x, int * y)
{
    int sum;
    clock_t start_time, end_time;

    start_time = clock();
    sum = *x + *y;
    end_time = clock();
    printf("2: %lf\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
    return sum;
}