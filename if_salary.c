#include<stdio.h>
int main()
{
       float bsalary,tsalary;
       printf("enter the basic salary :");
       scanf("%f",&bsalary);
       
       if(bsalary>=4000 && bsalary<6000)
       {
           tsalary=bsalary+(bsalary*40)/100+(bsalary*20)/100;
       }
       else if(bsalary>=6000 && bsalary<=1000)
       {
           tsalary=bsalary+(bsalary*45)/100+(bsalary*20)/100;
       }
       else
       {
           tsalary=bsalary+(bsalary*55)/100+5000;
       }
       printf("tsalary = %f",tsalary);
       return 0;
}