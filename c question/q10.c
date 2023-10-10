// perfect number
/*#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("enter the number\n");
    scanf("%d", &a);
    for(int b=1;b<a;b++)
    {
        if(a%b==0)
        {
            sum=sum+b;
        }
    }
    if(a==sum)
    {
        printf("number is perfect\n");
    }
    else
    {
        printf("number is not perfect\n");
    }
    return 0;
}*/

// in range
#include <stdio.h>
int main()
{
    int range, a, sum = 0;
    printf("enter the number\n");
    scanf("%d", &range);
    for (int b = 1; b <= range; b++)

    {
        sum = 0;
        for (a = 1; a < b; a++)
        {

            if (b % a == 0)
            {
                sum = sum + a;
            }
        }
        if (b == sum)
        {
            printf("%d\n", b);
        }
    }
    return 0;
}