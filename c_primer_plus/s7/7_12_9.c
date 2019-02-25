#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int main(void)
{
    int digit;
    int lower; // 外循环
    int index; // 内循环
    int start_time, end_time;
    bool t_f = true;

    printf("Enter a positive integer: ");
    while (scanf("%d", &digit) == 1)
    {
        if (digit < 0)
        {
            printf("wrong format! Enter a positive integer: ");
            continue;
        }
        else
        {
            for (lower = 2; lower <= digit; lower++)
            {
                for (index = 2; index < lower - 1; index++)
                {
                    if (lower % index == 0)
                        t_f = false;
                }
                if (t_f)
                    printf("%d ", lower);
                    t_f = true;
            }
            printf("\n");
            printf("Enter a positive integer: ");
        }
    }
    return 0;
}