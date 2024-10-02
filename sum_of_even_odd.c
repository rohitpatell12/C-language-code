#include<stdio.h>
int main()
{   
    int sumeven=0;
    int sumodd=0;
    for(int i=1;i<11;i++)
     if(i%2==1)
    {
     
     sumeven=sumeven+i;
    } 
    else
    {
        sumodd=sumodd+i;
    }
     printf(" sum of even number %d \n", sumeven);
     printf("sum of odd number %d \n", sumodd);
    return 0;
}