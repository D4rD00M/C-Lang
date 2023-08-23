#include<stdio.h> //WAP to using switch statement to find the addition and substraction of 2 values//
int main()
{
    int a,b,c,d,option;
        printf("Enter the 2 values=  ");
        scanf("%d%d",&a,&b);
        printf("\nPress 1 for +  ");
        printf("\nPress 2 for -  ");
        scanf("%d",&option);
    switch (option)
    {
    case 1/* constant-expression */:
        c=a+b;
        printf("The value for Addition is=\n%d",c);
        break;
    case 2:
        d=a-b;
        printf("The value for Substraction is=\n%d",d);
        break;
        default:
        printf("\nEnter a valid Number");
    }

}
