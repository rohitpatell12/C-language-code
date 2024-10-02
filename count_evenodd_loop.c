#include<stdio.h>
int main()
{
      int evencount =0;
      int oddcount =0;
      for(int i=1;i<11;i++)
      {
          if(i%2==0)
          {
              evencount++;
          }
          else
          {
              oddcount++;
          }
      }
         
          printf(" all evan count are %d\n",evencount);
          printf("all odd count are %d\n",oddcount);
          return 0;
}