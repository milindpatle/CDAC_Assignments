#include <stdio.h>
int main()
{
    int i, j;

    for (int i = 0; i < 5; i++)
    {
        if (i == 0 || i == 4)
        {
            for (int j = 1; j <= 5; j++)
            {

                printf("%d ",j);
            }
        }
        else
        {
            printf("1 ");
            for (int m = 0; m <= 5; m++)
            {
                printf(" ");
            }
            printf("5");

        }

        printf("\n");
    }
}