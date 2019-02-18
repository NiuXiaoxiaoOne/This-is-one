#include <stdio.h>
#define LOWER 0
#define UPPER 5
#define OBJECT 'A'
int main(void)
{
    int index, count;
    char object = OBJECT;

    for (index = LOWER; index <= UPPER; index++)
    {
        for (count = LOWER; count <= index; count++)
        {
            printf("%c", object);
            object += 1;
        }
        printf("\n");
    }
    
    return 0;
}