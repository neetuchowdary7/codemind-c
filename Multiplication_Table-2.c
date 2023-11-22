#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&c);
    for (b=1;b<=c;b++)
    {
        printf("%d x %d = %d
",a,b,a*b);
    }
}