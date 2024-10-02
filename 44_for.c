#include<stdio.h>
void main()
{
    int n,srt,end;
    printf("enter the start range :");
    scanf("%d",&srt);
    printf("enter the end range :");
    scanf("%d",&end);
    for(n=srt;n<=end;n++)
    {
        if(n%2==0)
        {
           printf("%d ",n);
        }

    }
}