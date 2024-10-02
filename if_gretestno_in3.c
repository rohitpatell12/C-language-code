#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
      printf("enter the n1 :");
      scanf("%d", &n1);
      printf("enter the n2 :");
      scanf("%d", &n2);
      printf("enter the n3 :");
      scanf("%d", &n3);

      if(n1>n2 && n1>n3)
      {
        printf("gretest value is n1");
      }
      else if(n2>n1 && n2>n3)
     {
        printf("gretest value is n2");
     }
     else
     {
        printf("gretest value is n3");
     }
     return 0;
}