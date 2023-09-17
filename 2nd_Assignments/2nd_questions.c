// 2.WAP to calculate commission if sale amount is greater than 1000 then
// commission =15%.

#include <stdio.h>
int main()
{
    float sale_amount, commission;
    printf("Enter the sales amount:");
    scanf("%f", &sale_amount);
    if (sale_amount > 1000)
    {
        commission = sale_amount * 15 / 100;
        printf("Commission=%.2f", commission);
    }
}