#include<stdio.h>
int main()
{
    int count=0;
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }  printf("%d \n",count);
}