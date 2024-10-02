#include<stdio.h>       /*agar same number hum ne output me de diye to fir*/
void main()
{
     int num1,num2,num3;
     printf("enter the three value :");
     scanf("%d%d%d",&num1,&num2,&num3);

     if(num1>num2 && num1>num3)
     {
        printf("num1 is greatest number =%d",num1);
     }
     else if(num2>num3)
     {
        printf("num2 is the gretest number =%d",num2);

     }
     else
     {
        printf("num3 is the gretest number =%d",num3);
     }
}