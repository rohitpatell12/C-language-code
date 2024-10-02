/*wap to print the table*/
#include<stdio.h>
void main()
{
    int i,n,tab;          /*i ko bhi asin karna h*/
    printf("which number table you want to print : ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
      tab=i*n;            /*semiconal lagana padega*/
      printf("%d*%d=%d\n",i,n,tab);
    }
}