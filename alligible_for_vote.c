#include<stdio.h>
int main()
{
     int age;
     printf("enter the number :");
     scanf("%d",&age);

     if(age>=18)
     {
        printf("the eligible for casting vote");
     }
     else
     {
        printf("not eligible for casting vote");
     }
     return 0;
}