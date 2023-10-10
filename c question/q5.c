//star print increment

 #include<stdio.h>
int main()
{
    int row;
    printf("enter the row\n");
    scanf("%d",&row);
    for(int a=1;a<=row;a++)
    {
        for(int b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 

// star print(decrement)
/*#include<stdio.h>
int main()
{
    int row;
    printf("enter the row\n");
    scanf("%d",&row);
    for(int a=row;a>=1;a--)
    {
        for(int b=a;b>=1;b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/