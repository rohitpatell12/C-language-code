#include<stdio.h>
int main()
{
     int num1=12;
     int num2=5;
     printf("num1=%d\n",num1);
     printf("num2=%d\n",num2);

     num1=num1+num2;
     num2=num1-num2;
     num1=num1-num2;

     printf("num1=%d\n",num1);
     printf("num2=%d\n",num2);
     return 0;

}