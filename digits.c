#include<stdio.h>
void main()
{
int n;
int count=0;
printf("enter digits");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("the number of digits an %d",count);
}
