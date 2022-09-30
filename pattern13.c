#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7-i;j++)
        {
            printf("%d",j);
        }
        for(k=1;k<i;k++)
        {
            printf("*");
        }
        for(l=2;l<i;l++)
        {
            printf("#");
        }
        for(m=5;m>=i;m--)
        {
            printf("%d",m);
        }m=
        printf("\n");
    }
    return 0;
}