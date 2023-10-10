#include<stdio.h>
int main()
{
    int a,temp=0,sum=1;
    printf("enter the number\n");
    scanf("%d",&a);
    while(a>0)
    {
        sum=1;
        temp=a/10;
        for(int b=1;b<=temp;b++)
        {
            sum=sum*b;     
        }
        temp=temp+sum;
        a=a/10;
    }
    if(a==temp)
    {
        printf("strong number\n");
    }
    else
    {
        printf("not a strong number\n");
    }
}