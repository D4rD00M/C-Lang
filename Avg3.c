#include<stdio.h> //WAP to find the average of 3 values//
int main()
{
int a,b,c,sum;
float avg;
printf("Enter 3 Values =  ");
scanf("%d%d%d",&a,&b,&c);
sum = a+b+c;
printf("\nThe sum of 3 values = %d",sum);
avg = sum / 3;
printf("\nAverage = %.2f",avg);
return 0;
}
