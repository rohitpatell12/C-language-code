#include<stdio.h>
int main()
{
       int fact=1;
       int n;
       printf("enter the value :");
       scanf("%d", &n);
       for(int i=1;i<=n;i++)
       {
          fact=(fact*i);
       }
        printf("%d",fact);
        return 0;
}