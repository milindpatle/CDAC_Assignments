// Q1.3 WAP to calculate simple interest. (si=p*n*r)/100

#include <stdio.h>

int main()
{
    float si, p, n, r;
    printf("Enter the values : ");
    scanf("%f\n%f\n%f", &p, &n, &r);

    si = p * n * r / 100;

    printf("Value of Simple Interest:%f ", si);
}