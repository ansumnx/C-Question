// fabonacci series
#include <stdio.h>
int main()
{
    int a;
    printf("first number\n");
    scanf("%d", &a);
    int b;
    printf("second number\n");
    scanf("%d", &b);
    printf("first and second number %d ,%d\n", a, b);
    int range, c;
    printf(" enter the range\n");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}