//WAP to print grade of a student based on marks of 5 subjects entered by user.
#include<stdio.h>
int main ()
{
    float eng,chem,mat,phy,cms,total,per;
      printf("Enter the marks you got in the English subject =  ");
       scanf("%f",&eng);
      printf("Enter the marks you got in the Chemistry subject =  ");
       scanf("%f",&chem);
      printf("Enter the marks you got in the Maths subject =  ");
       scanf("%f",&mat);
      printf("Enter the marks you got in the Physics subject =  ");
       scanf("%f",&phy);
      printf("Enter the marks you got in the Computer Science subject =  ");
       scanf("%f",&cms);
      total=eng+chem+mat+phy+cms;
      per=(total/500)*100;
      printf("Total Percent you got is =%.8f%%\n",per);
      if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}