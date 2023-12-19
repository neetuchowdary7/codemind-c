#include<stdio.h>
int main()
{
    int a,i;
    int arr[a];
    scanf("%d",&a);
    for ( i=1 ; i<=a ; i++ )
    {
        scanf("%d ",&arr[i]);
    }
    int sum=0;
    for ( i=1 ; i<=a ; i++ )
    {
     if ( arr[i] % 2 !=0)
     sum+=arr[i];
     }
     printf("%d",sum);
}