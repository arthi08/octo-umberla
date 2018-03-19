#include<stdio.h>
void main()
{
	int n,i;
	char str[10];
	gets(str);
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
	}
	
}
