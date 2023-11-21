#include<stdio.h>
int main()
{
    int a,rem,sum=0;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        if(sum=sum+rem)
        a/=10;
        
    }
    printf("%d",sum);
}