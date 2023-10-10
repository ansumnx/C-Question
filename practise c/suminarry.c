#include<stdio.h>
int main()
{
    int arr[100],size,i,sum=0;
    printf("enter array size\n");
    scanf("%d",&size);
    printf("enter array element\n");
    for(i=0;i<size;i++)
       scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
        sum=sum+arr[i];
    printf("the value of sum is %d",sum);
    return 0;
}