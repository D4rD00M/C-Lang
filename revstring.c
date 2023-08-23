#include <stdio.h>
int main ()
{
char str[10],rstr[10];
int i,j,l=0;
printf("enter string:\n");
scanf("%s",&str);
while(str[l]!='\0')
{
l++;
}
i=0;
j=l-1;
while(j>=0)
{
rstr[i]=str[j];
j--;
i++;
}
rstr[i]='\0';
printf("reverse of string %s=%s",str,rstr);
return 0;
}