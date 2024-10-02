#include<stdio.h>
int main()
{
     int num;
     printf("enter the num : ");
     scanf("%d", &num);


     if (num >= 0)
     { printf("positive value\n");
     if(num % 2 ==0)
     {printf("enven num");}
     else 
     {  printf("odd\n");}
}
     else 
     {printf("nagative\n");}
     return 0 ;
     }