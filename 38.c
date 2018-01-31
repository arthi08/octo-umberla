#include<stdio.h>
void main()
{
int x,y;
scanf("%d%d",&x,&y);
x=x^y;
y=x^y;
x=x^y;
printf("the swapping no is %d%d",x,y);
}
