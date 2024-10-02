#include<stdio.h>
void main()
{
      int i;
      i=6;
      printf("radhe radhe \n");
      i++;
      if(i<=5)
      {
        goto lab;
      }
      printf("after lable 1\n");
      lab:
      printf("after lable 2\n");
}