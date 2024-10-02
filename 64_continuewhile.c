#include<stdio.h>    not understand
void main()
{
      int i=1;
      while(i<=10)
      {
        i++;
        printf("%d",i);
        if(i%2==0)
        {
            continue;
        }
      }
}