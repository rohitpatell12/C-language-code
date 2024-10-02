#include <stdio.h>
void main()
{
    int s, e;
    lab:
    printf("enter the start number of range :");
    scanf("%d", &s);
    printf("enter the end number of range :");
    scanf("%d", &e);

    if(s<e)
    {   printf("even number from this range ");
        while(s<=e)
        {
           if(s%2==0)
           {
           printf("%d ",s);
           }
           s++;
        }
    }
    else
    {
      printf("enter the start range small than end\n");
      goto lab;

    }
}