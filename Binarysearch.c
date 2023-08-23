#include<stdio.h>
int main()
{
    int list[100],i,j,t,n;
    printf("How many elements= ");
    scanf("%d",&n);
    printf("Enter lsist\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
printf("enter a no to search");
scanf("%d",&search);
beg=0;
end=n-1;
while(beg<=end)
{
    mid=(beg+end)/2;
    if(a[mid<search])
    {
        end=mid-1;
    }
else if (a[mid]>search)
{
    beg=mid+1;
}
else if (a[mid==search])
{
    printf("%d is found at index %d",search);
    found=1;
    break;
}
}
}