#include<stdio.h>
int main()
{
    int year;
    printf("enter the year :");
    scanf("%d",&year);
    
    if(year%400==0||year%4==0 && year%100!=0)
    {
        printf("it is leap year");
    
    }
    else
    {
        printf("not an leap year ");
    }
    return 0;
}