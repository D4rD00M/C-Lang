#include<stdio.h>

int main()
{
    int i,n,*p;
    printf("how many studnet marks\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter student marks\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);

    }
    printf("student marks are:\n");
    for(i=0;i<n;i++)
    printf("%d",*(p+i));
    return 0;
}