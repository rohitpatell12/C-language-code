#include<stdio.h>
int main()
{
    float principle,rate,time,si,totalamount;
    printf("enter the value of principle :");
    scanf("%f",&principle);
    printf("enter the value of rate :");
    scanf("%f",&rate);
    printf("enter the value of time :");
    scanf("%f",&time);
    si=(principle*rate*time)/100;
    totalamount=si+principle;
    printf("simple intrest :%f",si);
    printf("totalamount :%f",totalamount);
    return 0;
}