#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    char ch; 
    int sum_ch = 0;
    int old_sum_ch = 0;
    int ei_count = 0; // 记录‘ei’出现的次数
    bool t_f = false;

    printf("Enter some text(enter '#' to quit): ");
    while ((ch = getchar()) != '#')
    {
        sum_ch++; // 记录当前读取字符数量
        if (ch == 'e')
        {
            old_sum_ch = sum_ch;
            t_f = true;
        }
        if ((t_f && ch == 'i') && sum_ch == (old_sum_ch + 1)) // 若前一个字符为e, 且下一个字符为i
        {
            ei_count++;
            t_f = false;
        }
    }
    printf("'ei' count: %d\n", ei_count);
    return 0;

}