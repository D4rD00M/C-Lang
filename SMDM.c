//Name:- PRIYANSU MUKHERJEE
//BRANCH:- CSE(Information Security)
//GROUP:- 22BIS-120(B)
//UID:- 22BIS70101

// WAP to take input from user and do add,multiplication,division,mod//

#include<stdio.h> 
int main()
{
    int a,b;
    float add,subs,div,multi,mod;
    printf("Enter the 1st value = ");
    scanf("%d",&a);
    printf("Enter the 2nd value = ");
    scanf("%d",&b);
    add=a+b;
    subs=a-b;
    multi=a*b;
    div=a/b;
    mod=a%b;
    printf("The value for addition = %.4f",add);
    printf("\nThe value for substraction = %.4f",subs);
    printf("\nThe value for Multiplication = %.4f",multi);
    printf("\nThe value for Division = %.4f",div);
    printf("\nThe value for Mod = %.8f",mod);
    return 0;
}