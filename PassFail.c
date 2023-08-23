//WAP to find how much the student have scored,student is passed or not ,find the highest mark subject//
#include<stdio.h>
int main()
{
    float eng,chem,mat,phy,cms,total,div,per;
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
     div=total/500;
      per=div*100;
      if (eng>=chem && eng>=mat && eng>=phy && eng>=cms)
      {
        printf("\nThe highest marks is in English= %f",eng);
      }
      if (chem>=eng && chem>=mat && chem>=phy && chem>=cms)
      {
        printf("\nThe highest marks is in Chemistry= %f",chem);
      }
      if (mat>=chem && mat>=eng && mat>=phy && mat>=cms)
      {
        printf("\nThe highest marks is in Maths= %f",mat);
      }
      if (phy>=eng && phy>=chem && phy>=mat && eng>=cms)
      {
        printf("\nThe highest marks is in Physics= %f",phy);
      }
      if (cms>=chem && cms>=mat && cms>=phy && cms>=eng)
      {
        printf("\nThe highest marks is in Computer Science= %f",cms);
      }
      printf("\nThe Sum of the 5 subjects =  %f \n",total);
      printf("\nThe percentage you have scored =  %0.4f",div);
      printf("\nThe total percent you have scored   =  %0.8f",per);
     if (total>=300)
     {
     printf("\nYou are pass");
     }
     if (total<300)
     {
      printf("\nYou are fail");
     }
     return 0;
}