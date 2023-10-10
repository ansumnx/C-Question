#include <stdio.h>
int main()
{
    int a, temp, r=0;
    printf("entre the digit\n");
    scanf("%d", &a);
    while (a > 0)
    {
        temp = a % 10;
        r = r * 10 + temp;
        a = a / 10;
    }
    printf("%d", r);
}