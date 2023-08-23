#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the value ");
  scanf("%d",&a);
  b=a%2;
  if (b==0)
  {
    printf("The value is even");
  }
  if(b==1)
  {
    printf("The value is odd");
  }
  return 0;
}
