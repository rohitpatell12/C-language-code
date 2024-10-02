#include<stdio.h>
int main()
{
      char ch;
      printf("enter the alphabhet _");
      scanf("%c", &ch);

      if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
      {
        printf("is an vovel");
      }
      else
      {
        printf("it is an not vovel");
      }
        return 0;
}