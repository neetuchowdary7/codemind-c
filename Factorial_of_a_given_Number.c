#include<stdio.h>
int main()
{
    int i,a,d,sum=1;
    scanf("%d",&a);
    for(i=0;i<=a;--i)
    {
        while ( a!=0 )
        {
            d=a-i;
            sum*=d;
            a=a-1;
        }
    }
    printf("%d",sum);
}