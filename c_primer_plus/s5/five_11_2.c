#include <stdio.h>
int main(void)
{
    int random_digit;
    int random_digit_added_ten;

    printf("请输入一个整数: ");
    scanf("%d", &random_digit);

    random_digit_added_ten = random_digit + 10;
    printf("%d\t", random_digit);
    while (random_digit++ < random_digit_added_ten)
        printf("%d\t", random_digit);
    printf("\n");

    return 0;
}