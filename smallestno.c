//WAP to print the smallest number among the 3 number
#include<stdio.h>
int main()
{
 int a,b,c,d;
 printf ("Enter the 3 values=");
 scanf("%d%d%d",&a,&b,&c);
 d=a<b?(a<c?a:c):(b<c?b:c);
 printf("The smallest value is=%d",d);
 return 0;
}