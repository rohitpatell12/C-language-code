#include<stdio.h>
int main()
{
    float area,base,height;
    printf("enter the value of base");
    scanf("%f",&base);
    printf("enter the value of height");
    scanf("%f",&height);
    area=(1/0.2)*base*height;
    printf("%f",area);
    return 0;
}