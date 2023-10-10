#include <stdio.h>
int main()
{
    int a, fact=1;
    printf("entre the number\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    printf("the factorial of given number\n %d",fact);
    return 0;
}