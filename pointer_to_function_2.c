//PERFORM ALL AIRTHEMATIC OPERATION UPON TWO VARIABLE WITH DIFFERENT FUNCTION USING THE CONCEPT OF POINTER TO FUMCTION//
#include<stdio.h>
int sum (int x,int y)
{
    return(x+y);
}
int sub(int x,int y)
{
    return(x-y);
}
int mul(int x,int y)
{
    return(x*y);
}
int div(int x,int y)
{
    return(x/y);
}
int main()
{
    int(*p)(int,int);
    p=&sum;
    printf("sum=%d\n",(*p)(5,10));
    p=&sub;
    printf("subtraction=%d\n",(*p)(10,5));
    p=&mul;
    printf("multiplication=%d\n",(*p)(5,2));
    p=&div;
    printf("division=%d\n",(*p)(5,2));
    return (0);
}