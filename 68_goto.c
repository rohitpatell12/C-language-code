#include<stdio.h>
void main()
{
      int i=1;
     
      if(i<=100)
      {
        goto lable;
      } 
       lable:
      printf("%d ",i);     
      i++;
}
// // wap to print 1 to 100 naturals number using goto statment.
// #include <stdio.h>
// void main()
// {
//     int i;
//     i=1;
//     lable:
//     printf("%d  ",i);
//     i++;//6
//     if(i<=100)
//     {
//         goto lable;
//     }
    
// }