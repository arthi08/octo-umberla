#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,c=1,v;
    gets(a);
    v=strlen(a);
    for(i=0;i<=c;i++)
    {
    if(a[i]==' ')
    {
        c=c+1;
    }
    }
    printf("the total words is %d",c);
    return 0;
}
