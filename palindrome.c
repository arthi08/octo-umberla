#include<stdio.h>
void main()
{
int a,d,rev,r;
printf("enter the number");
scanf("%d",&a);
rev=0;
d=a;
{
r=a%0;
rev=rev*10+r;
a=a/10;
}
if(d==rev)
{
printf("palindrome");
}
else
{
printf("not");
}
}
