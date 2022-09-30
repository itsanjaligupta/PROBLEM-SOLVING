#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=7-2*i;j++)
        {
            printf("*");
        }printf("\n");
    }
    i=1;
    for(i=1;i<=2;i++)
    {
        for(j=0;j<=2*i+1;j++)
        {
            printf("*");
        }printf("\n");
    }
}