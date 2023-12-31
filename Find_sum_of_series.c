#include<stdio.h>
int main()
{
    float i,n;
    scanf("%f",&n);
    float sum=0;
    for ( i = 1.0 ; i<=n ; i++ )
    {
        sum += 1.0/i;
    }
    printf("%.2f",sum);
}
