#include<stdio.h>
void main()
{
   float pa,ta;
    printf("Enter purchase amount:");
    scanf("%f",&pa);

    if (pa>1500)
    {
       float a=pa;
        ta=a - 200;
        printf("total amount=%.2f",ta);
    }
    else{
        printf("Please Enter purchase amount above 1500 !!!");
    }
    
}