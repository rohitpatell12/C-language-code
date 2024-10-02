#include<stdio.h>
void main()
{
     int n;
     char ch='\3';
     do
     {
         printf("i %c you\n",ch);
         printf("if you agree than press 1 or not so press 0\n");
         scanf("%d",&n);

     }
     while(n==0);
     printf("i am so happy");
}