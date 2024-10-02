#include<stdio.h>
int main()
{
       int sum=0;
       
       printf("the sum of all 25 number is :");
       for(int i=1;i<26;i++)
       {
           sum=sum+i;
       }
           printf("%d \n",sum);
          int num=25;
           printf("the average of =%d/%d",sum/num);
           return 0;
}