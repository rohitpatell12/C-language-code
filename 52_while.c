#include<stdio.h>
void main()
{
     int num,c=0;
     printf("enter the digit :");
     scanf("%d",&num);//12345

     while(num>0)
     { 
    
       c=c+1;
       num=num/10;
     }
     printf("the count of the digits is :%d",c);
}