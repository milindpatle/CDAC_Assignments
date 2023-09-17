// Q1.6 WAP to calculate multiplication of three numbers.

#include <stdio.h>
int main()
{

    int a, b, c, mul;

    printf("Enter the value : ");
    scanf("%d\n%d\n%d", &a, &b, &c);

    mul = a * b * c;

    printf("Multiplication value of three numbers : %d", mul);
}