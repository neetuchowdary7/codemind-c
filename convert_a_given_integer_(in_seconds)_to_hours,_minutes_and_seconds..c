#include<stdio.h>
int main()
{
    int x,s,h,m;
    scanf("%d",&x);
    h=x/3600;
    m=(x-(3600*h))/60;
    s=x-(3600*h)-(m*60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}