//print 1 to take input
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    int b=1;
    while(b<=a)
    {
        printf("%d\n",b);
        b++;
    }
    return 0;
}