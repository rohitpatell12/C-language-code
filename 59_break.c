#include<stdio.h>
void main()
{
    int i,n,tab,s,f=0;
    printf("enter the number for table :\n");
    scanf("%d",&n);
    printf("enter the numn which you want to search :\n");
    scanf("%d",&s);

    for(i=1;i<=10;i++)
    {
        tab=n*i;

        if(tab==s)
        {
            f=1;  //if means true
            break;
        }
       
        
    } if(f==1)
        {
            printf("find number\n");
        }
        else
        {
            printf("not find number");
        }


}