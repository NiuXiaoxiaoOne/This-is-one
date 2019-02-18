#include <stdio.h>
int main(void)
{
    char name[40];
    char surname[40];

    printf("Enter your first name: ");
    scanf("%s", name);
    printf("Enter your first surname: ");
    scanf("%s", surname);

    printf("%s * %s\n", name, surname);
}