#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
    printf("Profit");
    else if (b<a) 
    printf ("Loss");
    else
    printf("No Profit and No Loss");
}