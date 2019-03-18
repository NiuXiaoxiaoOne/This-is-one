// x5.c -- 程序清单9.9 与x6.c一起编译 房间费率程序 p264
#include <stdio.h>
#include "hotel.h" // 定义符号变量，声明函数

int main(void)
{
    int nights;  // 住的天数
    double hotel_rate; // 房子一天的费用
    int code; // 选择几号房子

    while ((code = menu()) != QUIT) // 选房子
    {
        switch (code)
        {
            case 1: hotel_rate = HOTEL1;
                    break;
            case 2: hotel_rate = HOTEL2;
                    break;
            case 3: hotel_rate = HOTEL3;
                    break;
            case 4: hotel_rate = HOTEL4;
                    break;
            default:    hotel_rate = 0.0;
                        printf("Oops!\n");
                        break;
        }
        nights = getnights(); // 选住的天数
        showprice(hotel_rate, nights); // 计算费用
    }
    printf("Thanks you and goodbye.\n");

    return 0;
}