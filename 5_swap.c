#include<stdio.h>
void main()
{    
   int a,b;  
   printf("enter the value of a :");
   scanf("%d",&a);
   printf("enter the value of b :");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("the value after swaping is a :%d\n",a);
   printf("the value after swaping is b :%d",b);
   return 0;

}