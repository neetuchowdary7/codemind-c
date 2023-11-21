#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int i;
    for (i=a;b<=c;b++)
    {
        printf("%d x %d = %d
",a,b,a*b);
    }
}