#include<stdio.h>
void main()
{     
    int num,a,b,ans;
    printf("welcome to my calculator\n");
    printf("1.for add two number\n");
    printf("2.for sub two number\n");
    printf("3.for multi two number\n");
    printf("4.for div two number\n");
    printf("enter the number :");
    scanf("%d",&num);

    if(num==1)
    {
        printf("enter the two number for add :");
        scanf("%d%d",&a,&b);
        ans=a+b;
        printf("the add of two number is : %d",ans);

    }
    else if(num==2)
    {
        printf("enter the two number for sub :");
        scanf("%d%d",&a,&b);
        ans=a-b;
        printf("the sub of two number is : %d",ans);
    }
    else if(num==3)
    {
        printf("enter the two number for mul :");
        scanf("%d%d",&a,&b);
        ans=a*b;
        printf("the mul of two number is : %d",ans);
    }
       else if(num==4)
    {
        printf("enter the two number for div :");
        scanf("%d%d",&a,&b);
        ans=a/b;
        printf("the div of two number is : %d",ans);
    }
    else
    {
        printf("enter the number 1 to 4 only");
    }
 
}