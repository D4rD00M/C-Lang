#include<stdio.h>

int main()

{

    int a,b,c;
    printf("find biggest no");
    scanf("%d%d%d",&a,&b,&c);

    if (a>=b && b>=c && c>=a)
    {
        printf("%d is largest no",a);
        printf("%d is largest no",b);
        printf("%d is largest no",c);

    }
    return 0;
    
    
}