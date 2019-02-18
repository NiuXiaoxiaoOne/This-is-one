#include <stdio.h>
long summation(long oneNumber, long twoNumber);
int main(void)
{
    long digit_lower; // 输入的下限
    long digit_upper; // 输入的上限
    long initialize; // for循环初始化

    printf("Enter lower and upper integer limits: ");
    scanf("%ld", &digit_lower);
    scanf("%ld", &digit_upper);

    while (digit_lower < digit_upper)
    {
        printf("The sums of the squares from %ld to %ld is %ld\n", digit_lower * digit_lower, \
                digit_upper * digit_upper, summation(digit_lower, digit_upper));
        printf("Enter next set of limits: ");    
        scanf("%ld", &digit_lower);
        scanf("%ld", &digit_upper);
    }

    printf("Done\n");
    return 0;
}

long summation(long oneNumber, long twoNumber)
{
    long lower; // for循环初始值
    long result = 0; // 求和结果

    for (lower = oneNumber; lower <= twoNumber; lower++)
        result += lower * lower;

    return result;
}