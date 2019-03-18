#include <stdio.h>
void max(const int ar[], int amount);
int main(void)
{
    int scrone[] = {10, 20, 7, 4, 5, 9};
    int SIZE = sizeof scrone / sizeof scrone[0];

    max(scrone, SIZE);
    return 0;
}

void max(const int ar[], int amount)
{
    int upper = ar[0];
    int count; // 计数器
    int index = 0; // 10.13.4中的返回最大值的下标

    for (count = 0; count < amount; count++)
    {
        if (upper <= ar[count])
            upper = ar[count];
            index = count;
    }
    printf("max: %d\t", upper);
    printf("max index: %d\n", index);
}