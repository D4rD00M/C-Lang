#include<stdio.h>
struct complex
{
    int r,i;
};
typedef struct complex comp;
comp add(comp,comp);
int main()
{
    comp c1,c2,c3;
    printf("enter 1st complex no.\n");
    scanf("%d%d",&c1.r,c1.i);
    printf("enter the second number\n");
    scanf("%d%d",&c2.r,&c2.i);
    c3=add(c1,c2);
    printf("%d+%di",c3.r,c3.i);
    return 0;
}
comp add(comp c1,comp c2)
{
    comp c3;
    c3.r= c1.r+c2.r;
    c3.i= c1.i+c2.i;
    return (c3);
}