#include<stdio.h>
int main()
{
    float H;
    scanf("%f",&H);
    if (H<150)
    printf("The person is Dwarf.");
    else if (H>150 && H<=165)
    printf("The person is average heighted.");
    else if (H>165 && H<=195)
    printf("The person is taller.");
    else 
    printf("Abnormal height.");
}