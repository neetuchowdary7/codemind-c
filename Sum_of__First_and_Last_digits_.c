#include<stdio.h>
int main()
{
    int a,fd,ld,sum=0;
    scanf("%d",&a);
    ld=a%10;
    while(a>=10)
    {
        a/=10;
    }
    fd=a;
    sum=fd+ld;
    printf("%d",sum);
}