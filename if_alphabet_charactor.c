#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value :");
    scanf("%c", &ch);
    
    if(ch>='A' && ch<='z' || ch>='a' && ch<='z')
    {
        printf("it is alphabet");
    }
    else if(ch>='0'&& ch<='9')
    {
        printf("it is digit");
    }
    else
    {
        printf("it is spacial charactor");
    }
    return 0;
}