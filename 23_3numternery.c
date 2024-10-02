#include<stdio.h>
void main()
{
     int a,b,c,ans;
     printf("enter the three num :");
     scanf("%d%d%d",&a,&b,&c);
    ans=a<b? a:b ;
    ans= ans<c? ans:c;
    printf("smallest value =%d ",ans);

}
