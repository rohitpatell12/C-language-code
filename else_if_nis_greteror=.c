#include<stdio.h>
int main()
{
       int n;
       printf("enter the number :");
       scanf("%d",&n);

       if(n>100)
       {
        printf("value is greter");

       }
       else if(n<100)
       {
        printf("value is smaller ");
       }
       else
       {
        printf("value is equal");
       }
       return 0;
}