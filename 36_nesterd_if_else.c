#include <stdio.h>
void main()
{
    int age, num, sum = 0;
    printf("enter your age  :");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("welcome to my club :\n");
        do
        {
        lab:
            printf("1. pasta = 120/-\n");
            printf("2.noodle = 150/-\n");
            printf("3.sandwich = 180/-\n");
            printf("enter the number which item you want :");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("your pasta orderd is done\n");
                sum += 120;
                break;
            case 2:
                printf("your noodle orderd is done\n");
                sum += 150;
                break;
            case 3:
                printf("your sandwich orderd is done\n");
                sum += 180;
                break;
            default:
                printf("please enter 1,2,3\n");
                goto lab;
            }
            printf("do you want to more item , so press 1: ");
            scanf("%d", &num);
        } while (num == 1);
        printf("please pay %d rs\n", sum);
        printf("visit again and have nice day");
    }
    else
    {
        printf("try after %d year ", 18 - age);
    }
}