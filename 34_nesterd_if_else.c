#include <stdio.h>
void main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("the num is zero");
    }
    else if (num % 2 == 0)
    {

        if (num > 0)
        {
            printf("positive - even");
        }
        else
        {
            printf("negative - even");
        }
    }
    else
    {
        if (num < 0)
        {
            printf("negative - odd");
        }
        else
        {
            printf("positive - odd");
        }
    }
}