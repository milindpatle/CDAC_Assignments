// 2.WAP to check greater of four numbers.

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter the value :");
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("a is greater");
            }
            else
            {
                printf("d is greater");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is greater");
            }
            else
            {
                printf("d is greater");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("b is greater");
            }
            else
            {
                printf("d is greater");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is greater");
            }
            else
            {
                printf("d is greater");
            }
        }
    }
}