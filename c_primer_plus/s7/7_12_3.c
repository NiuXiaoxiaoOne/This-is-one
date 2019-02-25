#include <stdio.h>
int main(void)
{
    int integer;
    int even_sum, even_count;
    int uneven_sum, uneven_count;

    uneven_count = uneven_sum = 0;
    even_count = even_sum = 0;

    printf("Enter some integer, separated by spaces, (enter \'0\' to quit): \n");

    while (scanf("%d", &integer) == 1)
    {
        if (integer == 0)
            break;
        else if (integer % 2 == 0)
        {
            even_sum += integer;
            even_count++;
        }
        else if (integer % 2 != 0)
        {
            uneven_sum += integer;
            uneven_count++;
        }
        else
            continue;
    }
    printf("quantity of even: %d\taverage of even: %d\n",
            even_count, even_sum / even_count);
    printf("quantity of uneven: %d\taverage of uneven: %d\n",
            uneven_count, uneven_sum / uneven_count);
    return 0;
}