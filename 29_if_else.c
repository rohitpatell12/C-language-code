#include<stdio.h>
void main()
{
    char ch;
    printf("enter any character :");
    scanf("%c",&ch);

    if (!(ch>='a'&& ch<='z'))
    {
        printf("the character is not alphabet");

    }
    else if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("the character is vowel");
    }
    else
    {
        printf("the charactor is consonent");
    }

}