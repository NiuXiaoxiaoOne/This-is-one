#include <stdio.h>
#define LOWER 1
#define UPPER 5
#define OBJECT '$'
int main(void)
{
    int index;
    int count;

    for (index = LOWER; index <= UPPER; index++)
    {
        for (count = index; count > 0; count--)
            printf("%c", OBJECT);
        
        printf("\n");
    }
    return 0;
}