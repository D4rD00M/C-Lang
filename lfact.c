#include<stdio.h>
long fact(int);
int main()

{
    int n;
    long f;
    printf("enter number:");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial=%ld\n",f);
    return 0;
    
}
long fact(int n)
{
    if(n==0|| n==1)
    return 1;
    else
    return(n*fact(n-1));
}
    