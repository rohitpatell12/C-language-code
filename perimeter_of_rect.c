//wap to calculate perimeter of rectangle.take sides,a & b,from the user.//
#include <stdio.h>
int main()
{
    float length,breath,perimeter;
    printf("enter the value of length=");
    scanf("%f", &length);
    printf("enter the value of breath =");
    scanf("%f", &breath);
    
    perimeter=2*length*breath;
    printf("the value of perimeter is =%.2f",perimeter);
    return 0;

}