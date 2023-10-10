// prime number
#include <stdio.h>
int main()
{
    int b, a, count = 0;
    printf("enter the number\n");
    scanf("%d", &a);

    for (int b = 1; b <= a; b++)
    {
        if (a % b == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("prime number are %d\n", count);
    }
    else
    {
        printf("not prime");
    }
}