#include<stdio.h>
int main()
{    
    int i,j;
    char x='A';
    for(i=1;i<=4;i++)
    {
        for (j=1;j<=i;j++)
        {
          printf("%c",x);
          x++;
        }
        x='A'+i;
        printf("\n");
    }
}