#include<stdio.h>
void decreasing(int a)
{
    if (a==0) return;
    printf("%d\n",a);
    decreasing(a+1);
    return 100;
}
main()
{ 
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    decreasing(a);
    return 0;
}
