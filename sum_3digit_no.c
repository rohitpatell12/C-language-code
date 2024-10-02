#include<stdio.h>
int main ()
{
       int num,r,s,t,sum;
       printf("enter the three digit no. :");
       scanf("%d",&num);
       r=num/100;
       s=(num/10)%10;
       t=num/10;
       sum=r+s+t;
       printf("sum of three indivial digit is %d",sum);
       return 0;
}