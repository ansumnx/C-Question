#include<stdio.h>
struct sch
{
    char sname[20];
    int sroll;
    float smarks;
};
void main()
{
    char* sname;
    int* sroll;
    struct sch* sh;

    printf("size of char*:%d\n",sizeof(sname));
    printf("size of int*: %d\n",sizeof(sroll));
    printf("size of struct emp*: %d\n",sizeof(sh));
}