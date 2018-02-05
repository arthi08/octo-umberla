#include<iostream.h>
void main()
{
int n,t,i,m;
cout<<"enter the num";
cin>>n;
while(n!=0)
{
t=n%10;
m=t*10;
n/=10;
}
cout<<"the num are";
while(m!=0)
{
t=m%10;
cout<<"\t"<<t;
m/=10;
}
}
