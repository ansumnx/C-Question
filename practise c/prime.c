#include <stdio.h>
int main()
{
    int a, count = 0;
    printf("entre an integer\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number\n");
    }
    return 0;
}