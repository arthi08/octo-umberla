#include "stdio.h"

int main(void) 
{
  int a,b,number;
  printf("enter the number \n");
  scanf("%d %d",&a,&b);
  if((a+b)%2==0)
  {
    printf("even \n");
  }
  else
  {
    printf("odd \n");
  }
  return 0;
}
  
