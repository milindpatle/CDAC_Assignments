// Q1.2 WAP to calculate the sum of two variables whose value is p=2.5 and q=3.6.
#include <stdio.h>
int main()
{
    float p, q, sum;
    printf("Enter the values :");
    scanf("%f\n%f", &p, &q);
    sum = p + q;
    printf("Sum of two variables : %f", sum);
}