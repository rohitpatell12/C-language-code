#include<stdio.h>
int main()
{
       int num,r,s,t,u,sum;
       printf("enter four digit no :");
       scanf("%d",&num);
       r=num/1000;
       s=(num/100)%10;
       t=(num/10)%10;
       u=num%10;
       sum=r+s+t+u;
       printf("the sum of four indivial digit no. is = %d",sum);
       return 0;
}