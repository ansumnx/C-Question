#include<stdio.h>
void sum(int a)
{
    int temp=0,r;
    while(a>0)
    {
        r=a%10;
        temp=temp+r;
        a=a/10;
    }
    printf("the sum of given number %d\n",temp);
}



int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    sum(num);
}
