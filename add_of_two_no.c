#include <stdio.h>
int main ()
{
    int age1;
    printf("enter a first value = ");
    scanf("%d",&age1);
    printf("value of age1 = %d\n",age1);

    int age2;
    printf("enter the second value = ");
    scanf("%d", & age2);
    printf("value of age2 = %d\n",age2);

    printf("sum of the value = %d", age1+age2);


    return 0;
}