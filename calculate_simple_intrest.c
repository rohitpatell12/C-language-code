#include<stdio.h>
int main()
{
    float principal,rate,time,si;
    printf("enter the value of principal");
    scanf("%f",&principal);
    printf("enter the value of rate ");
    scanf("%f",&rate);
    printf("enter the value of time");
    scanf("%f",&time);

    si=(principal*rate*time)/100;
    printf("%2.f",si);
    return 0;
}