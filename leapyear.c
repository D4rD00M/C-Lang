//Name:- PRIYANSU MUKHERJEE
//UID:- 22BIS70101
//GROUP:- 22BIS-120(B)
//WAP to check whether the entered year is leap year or not.
#include<stdio.h>
int main ()
{
    int year;
    printf("Enter the Year to check = ");
    scanf("%d",&year);
    year%100==0?:(year%400==0?printf("%d is a century year",year):printf("%d is not a century year\n",year));(year%4==0?printf("%d is a leap year",year):printf("%d is not a leap year",year));
    return 0;
}