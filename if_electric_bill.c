#include<stdio.h>
int main()
{
     float u,t;
     printf("enter the value of unit :");
     scanf("%f",&u);
     
     if(u>=1 && u<=50)
     {
         t=u*0.50;
     }
     else if(u>50 && u<=150)
     {
         t=50*0.50+(u-50)*0.75;
     }
     else if(u>150 && u<=250)
     {
         t=50*0.50+100*0.70+(u-150)*1.20;
     }
     else
     {
         t=0.50*50+0.70*100+1.70*100+(u-250)*1.50;
     }
     printf("total unit is %f",t);
     return 0;
}