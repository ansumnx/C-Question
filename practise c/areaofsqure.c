#include <stdio.h>
int main()
{
    int side;
    printf("enter the side\n");
    scanf("%d", &side);
    int area = side * side;
    printf("%d", area);
    return 0;
}