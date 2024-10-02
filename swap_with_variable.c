#include<stdio.h>
int main()
{
    int num1=12;
    int num2=5;
    int temp;
    printf("num 1=%d\n",num1);
    printf("num 2=%d\n",num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("num 1=%d\n",num1);
    printf("num 2=%d\n",num2);
    return 0;

}