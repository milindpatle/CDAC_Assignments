#include <stdio.h>
int main()
{
    int n = 6, row, col;

    for (int row = 1; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            printf(" ");
        }
        for (int col = 0; col < 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = 4; row >= 0; row--)
    {
        // space
        for (int col = 1; col <= n - row - 1; col++)
        {
            printf(" ");
        }
        // star
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}