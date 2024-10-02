#include<stdio.h>
int main()
{
      int age;
      printf("enter the age : ");
      scanf("%d", &age);
    
    if( age > 18)
    {
        printf("is an adult\n");
        printf("is eligible for vote\n ");

    }
    else 
    {
        printf("not an adult\n");
    }                                        /*curly brackets for banch of statement*/
    printf("thanku");
    return 0 ;
}