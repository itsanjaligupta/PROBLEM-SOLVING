#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the coordinates");
    scanf("%d%d",&x,&y);
    if (x>=0 && y>=0)
    {
        printf("the coordinate is in first quadrant");
    }
    else if (x<0 && y>0)
    {
        printf("the coordinate is in second quadrant");
    }
    else if (x<0 && y<0)
    {
        printf("the coordinate is in third quadrant");
    }
    else
    {
        printf("the coordinate is in fourth quadrant");
    }
    return 0;
}