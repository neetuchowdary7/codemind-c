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
    float ave=0;
    for ( i=1 ; i<=a ; i++ )
    {
    ave=(ave+arr[i]);
     }
     printf("%.2f",ave/a);
}