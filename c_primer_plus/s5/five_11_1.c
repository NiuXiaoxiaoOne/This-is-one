#include <stdio.h>
#define SIXTY 60.0
int main(void)
{
    int input_time;
    printf("输入一个分钟数，这会返回转化后的时间数，输入一个小于0的数字可以退出程序: ");
    scanf("%d", &input_time); 
    while (input_time > 0)
    {
        printf("分钟: %d ==> %d小时%d分钟\n", input_time, input_time / SIXTY， input_time % SIXTY);
        printf("输入一个分钟数，这会返回转化后的时间数，输入一个小于0的数字可以退出程序: ");
        scanf("%d", input_time);
    }

    return 0;
}