#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i=0,size=0;
    puts("enter the sentence");
    gets(a);
    puts("the size of string");
    while(a[i]!='\0')
    {
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
}