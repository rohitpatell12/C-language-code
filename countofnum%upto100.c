#include<stdio.h>
int main()
{
    int count=0;
    for(int i=1;i<101;i++)
    {
        if(i%3==0 && i%4==0 && i%8==0)
        {
            count++;
        }
    }   printf("%d\n",count);
    return 0;
}