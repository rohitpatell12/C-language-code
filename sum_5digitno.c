#include<stdio.h>
int main ()
{
    int num,r,s,t,u,v,sum;
    printf("enter the five digit no. :");
    scanf("%d",&num);
    r=num/10000;
    s=(num/1000)%10;
    t=(num/100)%10;
    u=(num/10)%10;
    v=num/10;
    sum=r+s+t+u+v;
    printf("the sum of five indivial digit is = %d",sum);
    return 0;
}