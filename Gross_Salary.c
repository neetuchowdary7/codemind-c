#include<stdio.h>
int main()
{
    float b,h,d,g;
    scanf("%f",&b);
    if ( b<=10000 )
    {
        h=(b*0.2);
        d=(b*0.8);
    }
    else if (b<=20000)
    {
        h=(b*0.25);
        d=(b*0.9);
    }
    else 
    {
        h=(b*0.30);
        d=(b*0.95);
    }
    g=b+h+d;
    printf("%.2f",g);
}