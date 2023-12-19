#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for ( i=0; i<a ; i++ )
    {
        scanf("%d ",&arr[i]);
    }
    float sum=0;
    for ( i=0 ; i<a ; i++)
    {
     sum+=arr[i];
     }
     int ave = sum/a;
     int flag=0;
    for ( i=0; i<a ; i++ )
    {
        if ( ave == arr[i] )
        {
            flag=1;
            break;
        }
    }
     if ( flag == 1)
     printf("True");
     else 
     printf("False");
     
}