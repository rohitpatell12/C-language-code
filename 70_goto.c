#include<stdio.h>
void main()
{
    int j;
    printf("program to chcek odd even... \n");

    if(num%2==0)
    {
         
        goto ev;
    }
    else
    {
        goto od;
    }
    ev:
    printf("number is eevn\n");
    exit(0);
    od:
    printf("odd number\n");
    

}