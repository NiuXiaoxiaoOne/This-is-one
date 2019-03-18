// x1.c -- 程序清单11.1 p321
#include <stdio.h>
#define MSG "I am a teach"
#define MAXLENGTH 81
int main(void)
{
    char words[MAXLENGTH] = "I am a Xiaolei";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings: ");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    return 0;
}