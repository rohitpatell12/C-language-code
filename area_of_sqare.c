#include <stdio.h>
int main()    
{
    float side;
    float area;
    printf("enter the side =");
    scanf("%f", &side);

    area = side * side;
    printf("area is = %.2f", area);
    return 0;
}