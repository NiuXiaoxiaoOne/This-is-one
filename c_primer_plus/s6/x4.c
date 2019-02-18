/* x4.c -- 检查你的密码是否正确，我的第一个do while循环程序 */
#include <stdio.h>
int main(void)
{
    int now_password; // 你的密码
    int input_password; // 用来二次输入的密码

    printf("亲~ 请输入你的新密码: ");
    scanf("%d", &now_password);
    do
    {
        printf("现在请输入密码，用以进入程序: ");
        scanf("%d", &input_password);
    } while (input_password != now_password);

    printf("密码正确，正在加载程序...\n");

    return 0;
}