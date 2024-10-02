#include<stdio.h>
void main()
{
     int i=1;
     lable:
     if(i%2==0)
     {
        printf("%d ",i);
     }
     i++;
     if(i<=100)
     {
        goto lable;
     }
}