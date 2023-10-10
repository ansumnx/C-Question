#include <stdio.h>
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int a;
    printf("entre the num\n");
    scanf("%d", &a);
    printf("the factorial of given number %d", factorial(a));
    return 0;
}