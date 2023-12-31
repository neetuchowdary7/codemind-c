#include<stdio.h>
int main()
{
    int a,b,maxi;
    scanf("%d%d",&a,&b);
    maxi = ( a>b )?a:b;
    while (1)
    {
        if ( maxi % a == 0 && maxi % b == 0 )
        {
           printf("%d",maxi);
           break;
        }
        maxi++;
    }
}