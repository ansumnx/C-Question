#include <stdio.h>
int main()
{
    int num[3];

    printf("Enter the elements:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("You entered the elements:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", num[i]);
    }

    printf("Reversed:\n");
    for (int i = 2; i >= 0; i--)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}
