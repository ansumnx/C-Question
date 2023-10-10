// sum of a given digit number
#include<stdio.h>
int main()
{
    int a,temp,sum=0;
    printf("enter the number\n");
    scanf("%d",&a);
    while(a>0)
    {
        temp=a%10;
        sum=sum+temp;
        a=a/10;
    }
    printf("the sum of digit of the given number %d\n",sum);
    return 0;

}