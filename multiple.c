#include<stdio.h>
void main()
{
int n,limit,m=0;
printf("table no and limit");
scanf("%d%d",&n,&limit);
printf("multiplication table");
for(inti=;1<=limit;i++)
{
m=i*n;
printf("%d*%d=%d",i,n,m);
}
}
