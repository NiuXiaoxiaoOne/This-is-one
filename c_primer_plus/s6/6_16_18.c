#include <stdio.h>
#define LOWER 5 // 最初的朋友
#define UPPER 150 // 邓巴数
int main(void)
{
    int friend_now = LOWER;
    int week = 1;

    printf("week\tfriend\n");
    do 
    {
        friend_now -= week;
        friend_now *= 2;
        printf("%d\t%d\n", week, friend_now);
        week += 1;
    }while (friend_now < UPPER);

    return 0;
}