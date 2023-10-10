#include <stdio.h>


void strong(int a)
{
    int temp = a;
    int r, sum = 0, fact;
    while (a > 0)
    {
        r = a % 10;
        fact = 1;  
        for (int i = r; i >= 1; i--)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        a = a / 10;
    }
    if (temp == sum)
    {
        printf("strong number\n");
    }
    else
    {
        printf("not a strong number\n");
    }
}
int main()
{
    int a;
    printf("enter the num\n");
    scanf("%d", &a);
   strong(a);
//    sum(a);
    // perfect(a);
}