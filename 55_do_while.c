#include <stdio.h>
void main()
{
    int num, a, b, add, sub, mul, div;
    do
    {
        printf("welcome to my calculator");
        printf("press 1. for add :\n");
        printf("press 2. for subf :\n");
        printf("press 3. for mul :\n");
        printf("press 4. for div:\n");
        printf("press 5. for exit:\n");
        printf("press a number :");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("enter two num for addition :\n");
            scanf("%d%d", &a, &b);
            add = a + b;
            printf("the sum of two num is = %d\n", add);
            break;

        case 2:
            printf("enter two num for sub:\n");
            scanf("%d%d", &a, &b);
            sub = a - b;
            printf("the sub of two num is = %d\n", sub);
            break;

        case 3:
            printf("enter two num formul :\n");
            scanf("%d%d", &a, &b);
            mul = a * b;
            printf("the mul of two num is = %d\n", mul);
            break;

        case 4:
            printf("enter two num for div :\n");
            scanf("%d%d", &a, &b);
            div = a / b;
            printf("the div of two num is = %d\n", div);
            break;

        case 5:
            break;
        }
    }

     while (num != 5);
}