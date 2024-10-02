#include<stdio.h>
void main()
{
     int a,b,c,ans;
     printf("enter the three value :");
     scanf("%d%d%d",&a,&b,&c);
     ans= a<b ? (a<c? a:c):(a<b ? a:b);
     printf("the smallest value is %d",ans);
}