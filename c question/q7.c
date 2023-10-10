// even and odd code
/*#include<stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}*/

// even odd in range
#include <stdio.h>
int main()
{
    int a, range;
    printf("enter the range\n");
    scanf("%d", &range);
    printf("even number are\n");
    for (int a = 1; a <= range; a++)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
    }
    return 0;
}