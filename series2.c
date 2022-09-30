#include<stdio.h>
int main()
{
    int i,n,f=1,sum=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    sum=sum+f/i;
    }
    printf("the sum is %d",sum);
    return 0;
}