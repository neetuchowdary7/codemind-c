#include<stdio.h>
int main()
{
    int T,S,B,C,KB;
    scanf("%d%d%d",&T,&S,&B);
    C=(2*T*S*B*512);
    KB=(C/1024);
    printf("%d KB",KB);
    
}