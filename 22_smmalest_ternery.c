#include<stdio.h>
void main()
{
    int a,b,ans;
    printf("enter the two values :");
    scanf("%d%d",&a,&b);
    ans=a<b? a : b;
    printf("smallest value = %d",ans);
}