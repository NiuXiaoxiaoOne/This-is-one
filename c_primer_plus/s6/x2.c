/* x2.c -- 我的第一个for程序 */
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER; count++) // 初始化 判断条件 递增计数器
        printf("Be my Valentine!\n");

    return 0;
}