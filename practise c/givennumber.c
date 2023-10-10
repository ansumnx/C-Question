#include <stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("number is not odd num") : printf("number is odd");
}