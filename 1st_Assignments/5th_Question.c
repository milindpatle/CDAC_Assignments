// Q1.5 WAP to calculate area of circle (a cir=pi*r*r).
#include <stdio.h>

int main()
{
    int pi, r, a_cir;

    printf("Enter the value :");
    scanf("%d\n%d", &pi, &r);

    a_cir = pi * r * r;
    printf("Value of area of circle : %d ", a_cir);
}