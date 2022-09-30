#include<stdio.h>
int main()
{
  int basic,total,hra,da,allow,pf; 
  char grade; 
  printf("enter basic salary");
  scanf("%d",&basic);
  printf("enter grade");
  scanf("%s",&grade);
  hra =.2*basic;
  da=.5*basic;
  pf=.11*basic;
  total=basic+hra+da+allow-pf;
  if(grade=='A')
  {
       total=basic+hra+da+1700-pf;
       printf("the salary is %d",total);
  }
  else if (grade=='B')
    {
      total=basic+hra+da+1500-pf;
    printf("the salary is %d",total);
    }
    else 
    {
      total=basic+hra+da+1300-pf;
    printf("the salary is %d",total);
    }
    return 0;
  }
