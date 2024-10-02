#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);

    if(n%5==0)
    {
        printf("is divisible by five");
    }
    else
    {
        printf("is not divisible by five");
    }   
        return 0;
}