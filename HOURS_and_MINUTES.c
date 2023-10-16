#include<stdio.h>
int main()
{
    int h,x,m;
    scanf("%d",&x);
    h=x/60;
    m=x%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}