//Name:- PRIYANSU MUKHERJEE
//UID:- 22BIS70101
//GROUP:- 22BIS-120(B)
//The distance between two cities(In KM) is input through key board.// 
//WAP to convert and print this distance in meters,feet,inches & centimeters//
#include<stdio.h>
int main()
{
    int distance;
    float meter,km,inches,cm,feet;
    printf("Enter The distance in kilometre = ");
    scanf("%f",&km);
    meter = km*1000;
    feet =km*3280.84;
    inches = km*39370.1;
    cm = km *100000;
    printf("The value from kilometre to meter is = %f",meter);
    printf("\nThe value from kilometre to feet is = %f",feet);
    printf("\nThe value from kilometre to inches is = %f",inches);
    printf("\nThe value from kilometre to centimetre is = %f",cm);
    return 0;
}