#include<stdio.h>
int main()
{
    int a,i;
    int arr[a];
    scanf("%d",&a);
    for ( i=0 ; i<=a ; i++ )
    {
        scanf("%d ",&arr[i]);
    }
    int sum=0;
    for ( i=0 ; i<=a ; i++ )
    {
    sum=sum+arr[i];
     }
     printf("%d",sum);
}