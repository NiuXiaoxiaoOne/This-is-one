#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int line_number, space_number, other_number, grepheme_number;

    line_number = space_number = other_number = 0;
    printf("Enter some text (enter \'#\' to quit): ");

    while ((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case ' ':
                space_number++;
                break;
            case '\n':
                line_number++;
                break;
            default:
                if (isalpha(ch))
                {
                    grepheme_number++;
                    break;
                }
                else
                {
                    other_number++;
                    break;
                }
                
        }
    }
    printf("space\tline\tother\tgrepheme\n");
    printf("%d\t%d\t%d\t%d\n", space_number, line_number,
            other_number, grepheme_number);

    return 0;
}