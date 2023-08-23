//Write a program to find sum of first n natural numbers without using loop
#include<stdio.h>  
int main()  
{  
    int n,sum;
    printf("Enter the value to be use= ");
    scanf("%d",&n);
    sum = (n * (n + 1) ) / 2;
    printf("Sum of %d natural number is = %d", n, sum); 
    return 0;  
}  