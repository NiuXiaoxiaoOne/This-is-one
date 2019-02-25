// 7_11_10.c -- p214
#include <stdio.h>
#define S1 "Step 1\n"
#define S2 "Step 2\n"
#define S3 "Step 3\n"
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '\n': break;
            case 'c':
                printf("%s", S1);
                break;
            case 'b':
                printf("%s", S1);
                break;
            case 'h':
                printf("%s%s", S1, S3);
                break;
            default:
                printf("%s%s%s", S1, S2, S3);
                break;
        }
        if (ch == 'b')
            break;
    }
    printf("Done\n");
    return 0;
}