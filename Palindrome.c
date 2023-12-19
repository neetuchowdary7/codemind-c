#include<stdio.h>
int main()
{
    int i,n,t,rev=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        int r=n%10;
        rev = rev*10+r;
        n/=10;
    }
    if ( rev == t )
    printf("Palindrome");
    else 
    printf("Not Palindrome");
}