#include<stdio.h>
int sum(int num)
{
    int sum=0,i=0;

    while(i<=num)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);

}

int main()
{
    int num;
    printf("enter the nunber\n");
    scanf("%d",&num);
    sum(num);
}