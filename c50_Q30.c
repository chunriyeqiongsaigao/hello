#include<stdio.h>
int main()
{
  char str[9];
  int tar,i,count;
  scanf("%s",str);
  scanf("%d",&tar);

  for(i=0;i<9;i++)
  {
    if(str[i]=tar)
    count++;    
  }

  printf("%d",count);

  int m=0;
  for(i=0;i<=count;i++)
  {
      m+=(10^i)*tar;
  }

  printf("%d",m);

  return 0;


}