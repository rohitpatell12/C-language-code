#include<stdio.h>    //nested if else example
//wap to check given number is even-positive ,
// even -nagative ,odd-positive , odd-nagative or zero.
void main()
{
     int num;
     printf("enter the value :");
     scanf("%d",&num);

     if(num>0)
     {
        if(num%2==0)
        {
        printf("the num is positive and even");
        }
        else
        {
            printf("the num is postive and odd");
        }
     }
     else if(num<0)
     {
        if(num%2==0)
        {
            printf("the num is negative and even ");
        }
        else
        {
            printf("the num is negative and odd");
        }
     }
     else
     { 
        printf("the num  is zero");
    
     }

}