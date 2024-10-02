/*wap to print factorial of the number*/
#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("enter the number for factorial : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       fact=fact*i;
       
    }
     printf("%d ",fact);
}