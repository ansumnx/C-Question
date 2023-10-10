// table of any given number
#include <stdio.h>
int main()
{
    int a, c = 0;
    printf("enter the number\n");
    scanf("%d", &a);
    for (int b = 1; b <= 10; b++)
    {
        c = a * b;
        printf("%dx%d=%d\n", a, b, c);
    }
    printf("visit again");
    return 0;
}