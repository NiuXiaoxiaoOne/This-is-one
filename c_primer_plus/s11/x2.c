// x2.c -- 程序清单11.7 p332
#include <stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];

    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("111\n");
    puts(words);
    fputs(words, stdout);

    return 0;
}