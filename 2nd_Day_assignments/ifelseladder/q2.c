#include<stdio.h>
void main()
{ 
    int n;
    printf("enter number :");
    scanf("%d",&n);

    if(n%8==0 && n%5==0)
    {
        printf("no is divisible by 8 & 5");
    }
    else if (n%8==0)
    {
        printf("no is divisible by 8");
    }
    else if (n%5==0)
    {
        printf("no is divisible by 5");
    }
    else
    {
        printf("no is divisible neither by 8 nor by 5");
    }
   
}