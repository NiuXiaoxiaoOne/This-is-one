#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    char surname[40];
    int name_size;
    int surname_size;

    printf("Enter your first name: ");
    scanf("%s", name);
    printf("Enter your first surname: ");
    scanf("%s", surname);

    name_size = strlen(name);
    surname_size = strlen(surname);
    
    printf("\"%s_%s\"\n", name, surname);
    printf("\"%20s_%-s\"\n", name, surname);
    printf("\"%-s_%-20s\"\n", name, surname);
    printf("\"%s_%s\"\n", name, surname);

    return 0;    

}