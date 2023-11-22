#include<stdio.h>
int main()
{
    int a,largest=0;
    scanf("%d",&a);
    while(a>0)
    {
        a%10;
        if(a%10 > largest)
        {
        largest=a%10;
        }
        a/=10;
    }
    printf("%d",largest);
}