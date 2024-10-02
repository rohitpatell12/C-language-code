#include<stdio.h>
void main()
{
     int i=1;
     label:
     printf("radhe radhe");
     i++;
     goto label;
     printf("after label 1\n");
     printf("after label 2\n");

}