#include<stdio.h>
int main()
{
    int second,hour,minitue;
    printf("enter the second =");
    scanf("%d",&second);
    hour=second/3600;
    minitue=(second%3600)/60;
    second=(second%3600)%60;
    printf("hour=%d\n",hour);
    printf("minitue=%d\n",minitue);
    printf("second=%d\n",second);
    return 0;
}