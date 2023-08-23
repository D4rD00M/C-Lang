#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("Enter any name\n");
    scanf("%s",&name);
    printf("The length of the string is= %d", strlen(name));
    return 0;
}