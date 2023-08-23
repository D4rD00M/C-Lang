//C program to find the largest of three numbers using ternary operator
#include<stdio.h> 
int main()
{
    int a,b,c,larger;
    printf("Enter the 1st value = ");
    scanf("%d",&a);
    printf("Enter the 2nd value = ");
    scanf("%d",&b);
    printf("Enter the 3rd value = ");
    scanf("%d",&c);
    larger = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The largest Number among the 3 value = %d",larger);
    return 0;
}