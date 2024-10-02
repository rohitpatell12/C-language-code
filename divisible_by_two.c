#include <stdio.h>
int main()
{
    int x;
    printf("enter the a number");
    scanf("%d", &x);
    printf("%d", x % 6 == 1);
    return 0;
}