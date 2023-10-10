//print increasing and creasing
#include<stdio.h>
int factorial(int n)
{
  if (n==0||n==1) return 1;
  return n*factorial(n-1);
}
int main(){
    int n,a;
    printf("enter the number\n");
    scanf("%d",&n);
    a=factorial(n);
    printf("%d",a);
    return 0;
}