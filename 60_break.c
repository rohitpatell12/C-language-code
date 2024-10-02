// wap to to search 7 in given number.
#include<stdio.h>
void main()
{
       int n,rem,f=0;
       printf("enter the value :");
       scanf("%d",&n);  //234567

       while(n>0)
       {
          rem=n%10; //understand this by heart
          if(rem==7)
          {
               f=1;
               break;
          }
          n=n%10;

       }
       if(f==1)
       {
      printf("the number 7 is found");
       }
       else
       {
        printf("the number 7 is not found");
       }
}