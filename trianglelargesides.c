//If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not.
//The triangle is valid if the sum of two sides is greater than the largest of the three sides.
#include<stdio.h>
int main()
{
    int x, y, z;
    int max, valid;
    printf("Enter the first side of triangle: ");
    scanf("%d", &x);
    printf("Enter the second side of triangle: ");
    scanf("%d", &y);
    printf("Enter the third side of triangle: ");
    scanf("%d", &z);
    max = x;
    if(max<y)
        max=y;
    if(max<z)
        max=z;
    if(max == x && x < (y+z))
        valid = 1;

    if(max == y && y < (x+z))
        valid = 1;

    if(max == z && z < (x+y))
        valid = 1;
if (valid==1)
    printf("Triangle is valid");
else
    printf("Triangle is not valid");
return 0;
}