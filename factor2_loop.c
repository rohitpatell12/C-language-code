#include<stdio.h>
int main()
{
    int n;
    printf("enter a value :");
    scanf("%d",&n);
    printf("factor of %d :",n);
    for(int i=1;i<=n;i++)
    { 
     
         if(i%n==0)
         {
         printf("%d",i);
         }
        
    }  return 0;