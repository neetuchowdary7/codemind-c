#include<stdio.h>
int main()
{
    int a,rev=0,rem;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        rev=rem+(rev*10);
        a/=10;
    }
    printf("%d",rev);
}