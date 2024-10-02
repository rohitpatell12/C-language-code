#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter the three number");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("the gretest number is num1=%d", num1);
        }
        else
        {
            printf("the gretest number is num3=%d", num2);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("the gretest number is num2=%d", num2);
        }
        else
        {
            printf("the gretest number is num3=%d", num3);
        }
    }
}