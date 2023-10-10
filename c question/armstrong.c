#include<stdio.h>
int arm(int a)
{
    int r,c,sum=0;
    int temp=a;
    while(a>0)
    {
        r=a%10;
        c=r*r*r;
        sum=sum+c;
        a=a/10;
    }
    if(temp==sum)
    {
        printf("armstrong number");
    }
    else
    printf("not");


}
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    arm(a);
}