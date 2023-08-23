#include<stdio.h>
int main()
{
    int list[100],i,j,t,n;
    printf("How many elements= ");
    scanf("%d",&n);
    printf("Enter list\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    for(i=0;i<n-1;i++)
    {
        t==0;
            for(j=0;j<n-1;j++)
            {
                if(list[j]>list[j+1])
                {
                    n=list[j];
                    list[j]=list[j+1];
                    list[j+1]=t;
                    t==1;
                }
            }
            if(t==0)
            break;
        }
        printf("Sorted list is\n");
        for(j=0;j<n;j++)
        printf("%d\n",list[j]);
    return 0;
}