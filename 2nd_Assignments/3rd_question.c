// WAP to find entered number is even or odd.

#include <stdio.h>
int main()
{

    int n;
    int r= n % 2;
    printf("Enter the number :");
    scanf("%d", &n);
    if (r == 0)
    {
        printf("The number is even ");
    }
    else
    {
        printf("The number is odd");
    }
}