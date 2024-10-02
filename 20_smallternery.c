#include<stdio.h>
void main()
{
        int a,b;
        printf("enter two values :");
        scanf("%d%d",&a,&b);
        a<b ? printf("smallest value = %d",a) : printf("smallest value = %d",b);
}