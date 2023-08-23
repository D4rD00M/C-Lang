//WAP to count the number of letters given by the user
// In sir's method
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int n,l=0;
    printf("Enter a string= ");
    scanf("%s",&a);
    while (a[l]!='\0')
    {
        l++;
    }
    printf("String Length is = %d",l);
    return 0;
}