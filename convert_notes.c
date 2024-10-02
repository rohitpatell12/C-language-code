#include<stdio.h>
int main()
{
    int notes,note500,note200,note100,note50,note20,note10,note5,note2,note1;
    printf("enter the number of notes :");
    scanf("%d",&notes);
    note500=notes/500;
    notes=notes%500;
    note200=notes/200;
    notes=notes%200;
    note100=notes/100;
    notes=notes%100;
    note50=notes/50;
    notes=notes%50;
    note20=notes/20;
    notes=notes%20;
    note10=notes/10;
    notes=notes%10;
    note5=notes/5;
    notes=notes%5;
    note2=notes/2;
    notes=notes%2;
    note1=notes/1;
    printf("note500=%d\n",note500);
    printf("note200=%d\n",note200);
    printf("note100=%d\n",note100);
    printf("note50=%d\n",note50);
    printf("note20=%d\n",note20);
    printf("note10=%d\n",note10);
    printf("note5=%d\n",note5);
    printf("note2=%d\n",note2);
    printf("note1=%d\n",note1);
    return 0;
}