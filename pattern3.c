#include<stdio.h>
int main()
{    
    int i,j;
    char x='A';
    for(i=1;i<=3;i++)
    {
        for (j=1;j<=i;j++)
        {
          printf("%c",x);
        }printf("\n");
        x++;
    }
}