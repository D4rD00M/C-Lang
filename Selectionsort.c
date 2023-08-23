#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("Enter no. of elements= ");
    scanf("%d",&n);
    printf("Enter lsit\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted list is\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}