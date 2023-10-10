#include<stdio.h>
main()
{
    int limit,a,b,sum;
    printf("enter the limit\n");
    scanf("%d",&limit);
    for(a=1;a<limit;a++)
    {
        sum=0;
        for(b=1;b<a;b++)
        {
            if (a%b==0)
            {
                sum=sum+b;
            }

        }
        
        if(a==sum)
        printf("%d,",a);
    }
}