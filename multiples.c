#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    while((a%10) !=0)
    {
        a++;
    }
    printf("the multiples of 10 is %d",a);
}
