#include<stdio.h>
int main()
{    
    int i,j;
    char x='F';
    for(i=1;i<=5;i++)
    {   
        x='F'-i;
        for (j=1;j<=i;j++)
        {
          printf("%c",x);
          x++;
        }printf("\n");
    }
}