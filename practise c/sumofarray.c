#include<stdio.h>
int main()
{
    int a[30];
    int size;
    printf("enter the size\n");
    scanf("%d",&size);
    printf("enter the elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum of given array elemrnt %d",sum);
    return 0;
}