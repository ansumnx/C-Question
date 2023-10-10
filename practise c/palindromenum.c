#include <stdio.h>
int main()
{
    int a, r = 0;
    printf("enter the num\n");
    scanf("%d", &a);
    int b=a;
    while (b > 0)
    {
        int temp = b % 10;
        r = r * 10 + temp;
        b = b / 10;
    }
    if (r == a)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}