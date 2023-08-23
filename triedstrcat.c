#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter the first string= ");
    scanf("%s",&s1);
    printf("Enter the second string= ");
    scanf("%s",&s2);
    strcat(s1,s2);
    printf("String concatenated= %s",s1);
    return 0;
}