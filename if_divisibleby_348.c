#include<stdio.h>
int main()
{
    int n;
    
    printf("enter the value");
    scanf("%d", &n);
    if(n%3==0 && n%4==0 && n%8==0)
    {
        printf("it is divisible");
    }
    else
    {
        printf("not divisible");
    }
        return 0;
}