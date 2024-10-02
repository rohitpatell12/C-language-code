#include<stdio.h>
int main()
{
    int n ,i;
    int sum=0;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n*2)
    {
       
        printf("a perfect number ");
    }
    else 
    {
        printf("not an perfect number ");
    }
}