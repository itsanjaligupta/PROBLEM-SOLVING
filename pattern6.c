#include<stdio.h>
int main ()
{   
    int i,j,k,l,m,x=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
          printf("%d",x);
          x++;
        }printf("\n");
        x=1;
        for(k=0;k<=10-2*i;k++)
        {
            printf("  ");
        }
        for(l=1;l<=5;l++)
        {
            x=1;
            x++;
            printf("%d",x);
        }
    }
}