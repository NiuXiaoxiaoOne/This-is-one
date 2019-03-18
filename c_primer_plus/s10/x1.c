#include <stdio.h>
int sum(int * ar, int size); // 求数组中所有元素的和
void add_to(int * ar, int size, int val); // 是数组中的每个元素+val
int main(void)
{
    static int powers[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int powers_sum;    
    int size = (sizeof powers / sizeof powers[0]);

    powers_sum = sum(powers, size);

    printf("sum: %d\n", powers_sum);
    add_to(powers, size, 1);
    
    return 0;
}

int sum(int * ar, int size)
{
    int i;
    int total = 0;
    

    for (i = 0; i < size; i++)
        total += *(ar + i);
    return total;
}

void add_to(int * ar, int size, int val)
{
    int i;
    for (i = 0; i < size; i++)
        ar[i] += val;
        // printf("%d ", ar[i]);
    printf("\n");
}