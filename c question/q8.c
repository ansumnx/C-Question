//factorial of given number
#include<stdio.h>
int main()
{
    int a,temp=1;
    printf("enter the number\n");
    scanf("%d",&a);
    for(int b=1;b<=a;b++)
    {
        temp=temp*b;
    }
    printf("the factorial of given number %d",temp);
    return 0;
}