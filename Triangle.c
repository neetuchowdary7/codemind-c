#include<stdio.h> 
int main()
{
    int a,c,b;
    scanf("%d%d%d%d%d",&a,&b,&c);
    if (a==b&&b==c)
    printf("Equilateral triangle");
    else if (a==b||b==c||c==a)
    printf("Isosceles triangle");
    else 
    printf("Scalene triangle");
}