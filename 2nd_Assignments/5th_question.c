// Nested if else
//  1.WAP to check greater of three numbers

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value :");
    scanf("%d\n%d\n%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is greater than c");
        }
        else
        {
            printf("c is greater than a");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is grater than c");
        }
        else
        {
            printf(" c is greater than b");
        }
    }
}