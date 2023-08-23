//WAP to print the dist betw 2 cities (inkm) is input through keyboard to convert this distance in m,cm,feet,inches
#include<stdio.h>
int main ()
{
    int dist,m,cm,f,in;
printf("Enter the distance fm 1st city to 2nd city((in km) ");
scanf("%d",&dist);
m=dist*1000;
cm=dist*100000;
f=dist*3280.84;
in=dist*39370.079;
printf("The dist from 1st city to 2nd city in metre=  %d",m);
printf("\t\nThe dist from 1st city to 2nd city in centimetre=  %d",cm);
printf("\nThe dist from 1st city to 2nd city in feet=  %d",f);
printf("\nThe dist from 1st city to 2nd city in inches=  %d",in);
return 0;
}