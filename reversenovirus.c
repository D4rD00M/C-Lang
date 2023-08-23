//WAP to print a number in reverse like (5),(5,4),(5,4,3) upto 1 
// But this program have created a virus in line 9.
#include<stdio.h>
int main()
{
    int i,j;
    for (i = 5; i>=1; i--)
    {
        for (j=5; i>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}