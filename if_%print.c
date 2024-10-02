#include<stdio.h>
int main()
{
    float n;
    printf("enter the value");
    scanf("%f",&n);
    if(n>=90)
    {
        printf("grade A+");
    }
    else if(n>=80 && n<90)
    {
        printf("grade A");
    }
    else if(n>=70 && n<80)
    {
        printf("grade B");
    }
    else if(n>=60 && n<70)
    {
        printf("grade C");
    }
    else if(n>=50 && n<60)
    {
        printf("grade D");
    }
    else 
    {
        printf("grade F");
    }
        return 0;
}