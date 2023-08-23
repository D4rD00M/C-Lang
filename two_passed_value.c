//write a function code that is returning pointer to the larger value out of two passed values//
#include<stdio.h>
int *max(int*p,int*q)
{
    if(*p>*q)
    return p;
    else
    return q;
}
int main()
{
    int a,b,*x;
    printf("enter two variables\n");
    scanf("%d%d",&a,&b);
    x=max(&a,&b);
    printf("max value=%d",*x);
    return 0;
}