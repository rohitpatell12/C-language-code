#include<stdio.h>
int main()
{
    int a=-1;
    int b=1;
    int c;
    int n;
    printf("enter the value :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }   return 0;
 
}