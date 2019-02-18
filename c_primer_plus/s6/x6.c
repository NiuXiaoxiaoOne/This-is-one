/* 输入一个整数，返回其平方 */
#include <stdio.h>
long square(int n);
int main(void)
{
    int x; // 用户输入数字
    long digit; // 输出的平方值

    printf("输入一个整数，返回该数的平方值，q可以退出程序: ");
    while (scanf("%d", &x) == 1)
    {
        digit = square(x);
        printf("%d * %d = %ld\n", x, x, digit);
        printf("输入一个整数，返回该数的平方值，q可以退出程序: ");
    }
    
    return 0;
}

long square(int n)
{
    long square_of_digit;
    square_of_digit = n * n;

    return square_of_digit;
}