#include<stdio.h>
int main()
{
     int days,year,month,weeks;
     printf("enter the number of days :");
     scanf("%d",&days);
     year=days/365;
     days=days%365;
     month=days/30;
     days=days%30;
     weeks=days/7;
     days=days%7;
     days=days/1;
     printf("year=%d\n",year);
     printf("month=%d\n",month);
     printf("weeks=%d\n",weeks);
     printf("days=%d\n",days);
     return 0;
     

}