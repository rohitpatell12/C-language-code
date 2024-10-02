#include<stdio.h>
void main()
{
    int num,rem,sum=0;
    printf("enter the two digit number or more digit num :");
    scanf("%d",&num);//324

    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    printf("the sum of individual num is : %d",sum);
}