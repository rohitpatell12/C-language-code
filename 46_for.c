#include<stdio.h>
void main()
{
     int i,sum=0;
     for(i=1;i<=20;i++)
     {
        sum+=i;
        printf("%d\n ",i);
     }
     printf("the sum of 1 to 20 number is = %d\n",sum);
}