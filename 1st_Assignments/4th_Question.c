// Q1.4 WAP to calculate area of rectangle. (a_rec=l*b).

#include <stdio.h>

int main()
{
    int len;
    int bre;
    int a_rec;

    printf("Enter the value :");
    scanf("%d\n%d", &len, &bre);

    a_rec = len * bre;
    printf("Value of Area of Rectanle %d", a_rec);
}