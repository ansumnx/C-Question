#include <stdio.h>
int main()
{
    int size;
    printf("enter the size\n");
    scanf("%d", &size);
    int num[size];
    printf("enter the element\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }
    int largest = num[0];
    for (int i = 1; i < size; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    printf("largest element %d", largest);
    return 0;
}