#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for ( i=0; i<a ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    int sum_e=0,sum_o=0;
    for ( i=0 ; i<a ; i++)
    {
        if (arr[i] % 2 == 0)
        sum_e+=arr[i];
        else
        sum_o+=arr[i];
    }
    printf("%d",abs(sum_e - sum_o));
}