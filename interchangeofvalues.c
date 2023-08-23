//WAP to two numbers are input through the keyboard into two locations C and D.
//Write a program to interchange the contents of C and D.

#include<stdio.h>
int main()
{
    int a,b,A,B;
    printf("Enter two no= ");
    scanf("%d %d",&a,&b);
    A=b;
    B=a;
    printf("value of 1st int is now= %d",A);
    printf("\nvalue of 2nd int is now= %d",B);
    return 0;
}