#include <stdio.h>
#define LOWER 0
#define UPPER 5
#define OBJECT 'F'
int main(void)
{
    int index;

    for (index = LOWER; index <= UPPER; index++)
    {
        int count;

        for (count = LOWER; count <= index; count++)
            printf("%c", OBJECT - count);
        printf("\n");
    }

    return 0;
}