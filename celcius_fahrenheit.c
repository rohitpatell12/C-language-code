#include<stdio.h>
int main()
{
    float celcius ,fahrenheit;
    printf("enter the value of celcius");
    scanf("%f",&celcius);
    fahrenheit=(celcius*(9/5.0))*32;
    printf("%f",fahrenheit);
}