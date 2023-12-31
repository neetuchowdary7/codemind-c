#include<stdio.h>
int main()
{
    int a,b,count=0;
    int i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if( i % 3 == 0 && i % 2 == 0 )
        {
            count++;
        }
    }
    printf("%d",count);
}