#include <stdio.h>
int main()
{
    int limit, a = 0, b = 1;
    printf("enter the limit\n");
    scanf("%d", &limit);
    printf("firstelement\na=%d\nsecond element\nb=%d\n",a,b);
    printf("up to limit\n");
    int i = 1;
    while (i <= (limit-2))
    {
        int c = a + b;
        printf("%d\t", c);

        a = b;
        b = c;
        i++;
    }
    return 0;
}