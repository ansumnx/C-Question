#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=5;a++)
    {
        for(b=a;b<5;b++)
        {
            printf(" ");
        }
        for(c=1;c<=a;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}