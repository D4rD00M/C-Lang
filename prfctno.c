//Write a program to check if the number is a perfect number or not.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value= ");
    scanf("%d",&a);
    b=a%2;
    if (b==0)
    {
        printf("Perfect Number");
    }
    if (b==1)
    {
        printf("Not a perfect number");
    }
    return 0;
}