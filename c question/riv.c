#include <stdio.h>
int main()
{
    int a;
    printf("enter the num");
    scanf("%d", &a);
    int r, sum = 0, fact;
    int temp = a;
    while (a > 0)
    {
        r = a % 10;
        fact = r * r * r;
        sum = sum + fact;
        a = a / 10;
    }
    if (sum == temp)
    {
        printf("armstrong");
    }
    else
        printf("not armstrong");
}