#include<stdio.h>
void main()
{
	int a[10],i,max=0;
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\n maximum of 10 numbers is %d",max);
}
