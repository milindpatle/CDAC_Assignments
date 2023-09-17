#include<stdio.h>
void main()
{
    float sa,c;
    printf("Enter sales amount:");
    scanf("%f",&sa);
    if(sa>1000)
    {
        c=sa*15/100;
        printf("Commission=%.2f",c);
    }
   