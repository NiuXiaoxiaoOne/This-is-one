/* x4.c -- 定义一个带一个参数的函数 */
#include <stdio.h>
void pound(int n); // ANSI函数原型声明
int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0;

    pound(times);
    pound(ch);
    pound(f);

    return 0;
}

void pound(int n) // 接收一个参数，并强制转化为int类型
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}