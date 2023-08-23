//Name:- PRIYANSU MUKHERJEE
//UID:- 22BIS70101
//GROUP:- 22BIS-120(B)
#include<stdio.h>
#include<math.h>
int main ()
{
long a, b, c, d;
float x1, x2;
printf("Enter the values of a, b, c = ");
scanf("%ld%ld%ld", &a, &b, &c);
printf("Therefore Quadratic Equation is = %ldx^2 + %ldx + %ld\n", a, b, c);
d = b*b - 4*a*c;
if (d == 0)
{
printf("Both roots are equal\n");
x1=-b/(2 * a);
x2 =x1;
printf("Roots of the equation are: %f & %f", x1, x2);
}else if (d > 0){printf("Both roots are real and different\n");
x1 = (-b + sqrt (d))/(2*a);
x2 = (-b - sqrt (d))/(2*a);
printf("Roots of the equation are: %f & %f", x1, x2);
}else
printf ("Roots are imaginary. Therefore, no solutions");
return 0;
}