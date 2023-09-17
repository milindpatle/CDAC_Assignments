#include <stdio.h>
int main()
{

    int a[3][3], i, j, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i + j == 0) || (i + j == 2) || (i + j == 4))
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("%d", sum);
}