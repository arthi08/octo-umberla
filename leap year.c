# include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if((n%100==0)||(n%400==0)||(n%4==0))
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
}
