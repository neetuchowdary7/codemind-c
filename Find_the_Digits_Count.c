#include<stdio.h>
int main()
{
    int i,count=0;
    scanf("%d",&i);
    while(i!=0)
    {
        i/=10;
        count++;
    }
    printf("%d",count);
}