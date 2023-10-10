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
    int smallest = num[0];
    int largest=num[0];
    for (int i = 1; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }

    }
    for(int i=1;i<size;i++)
    {
        if(num[i]>largest)
        {
            largest=num[i];
        }
    }
    printf("%d is smallest element\n",smallest);
    printf("%d is largest\n",largest);
    return 0;
}