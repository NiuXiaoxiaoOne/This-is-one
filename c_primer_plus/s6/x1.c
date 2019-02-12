// x1.c -- 根据用户输入的整数求和
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);

// 当输入非整数时，status会读取失败，返回0


    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    
    printf("%ld\n", sum);
    return 0;
}