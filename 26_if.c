#include<stdio.h>
void main()
{
    int num;
    printf("enter the value of num :");
    scanf("%d",&num);

    if(num==1)
    {
        printf("Good morning");
    }
    if(num==2)
    {
        printf("goodevening");

    }

    if(num==3)
    {
        printf("goodnight");

    }

    if (num>3 || num==0 || num<0)
    {
         printf("please enter 1,2,3");
    }

}