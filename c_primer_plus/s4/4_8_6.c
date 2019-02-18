#include <stdio.h>
#include <string.h>
int main(void)
{
    int name_size;
    int surname_size;
    char name[40];
    char surname[40];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your surname: ");
    scanf("%s", surname);

    name_size = strlen(name);
    surname_size = strlen(surname);

    printf("%s %s\n", name, surname);
    printf("%d %d\n", name_size, surname_size);
    // 不会的
    return 0;

}