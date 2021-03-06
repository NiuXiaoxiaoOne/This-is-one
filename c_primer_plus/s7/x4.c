// x4.c -- 程序清单7.7 统计输入的字符 行 单词数量
#include <stdio.h>
#include <ctype.h> // 为isspace()提供原型
#include <stdbool.h> // 为bool true false提供定义
int main(void)
{   
    char c; // 读入字符
    char prev; // 读入的前一个字符
    long n_chars = 0L; // 字符数
    int n_lines = 0; // 行数
    int n_words = 0; // 单词数
    int p_lines = 0; // 不完整行数统计
    bool inword = false; // 如果c在单词中，inword为true

    printf("Enter text to be analyzed (| to terminate): \n");
    prev = '\n'; // 用于识别完整行
    while ((c = getchar()) != EOF)
    {
        n_chars++; // 统计字符
        if (c == '\n')
            n_lines++; // 统计行
        if (!isspace(c) && !inword)
        {
            inword = true; // 开始一个新单词
            n_words++; // 统计单词
        }
        if (isspace(c) && inword)
            inword = false; // 达到单词末尾，开始下一个单词记录
        prev = c;
    }

    if (prev != '\n') // 不完整行统计
        p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d, ",
            n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);
    return 0;
}