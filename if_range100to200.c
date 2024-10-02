#include<stdio.h>
int main()
{
      int num;
      printf("enter the number _");
      scanf("%d", &num);

      if(num>=100 && num<=200)
      {
        printf("the value is in the range of 100 to 200");
      }
      else
      {
        printf("the value is not in range");
      }
        return 0;
}