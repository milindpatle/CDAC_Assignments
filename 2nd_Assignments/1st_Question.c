// 1.WAP to calculate total amount if purchase amount is greater than 1500 then
// discount is Rs.200.
#include <stdio.h>
int main()
{
    float total_amount, purchase_amount;
    printf("Enter the purchaseamount :");
    scanf("%f", &purchase_amount);
    if (purchase_amount > 1500)
    {

        total_amount = purchase_amount - 200;
        printf("Total Amount = %.2f", total_amount);
    }
    else
    {
        printf("Please enter the purchase amount above 1500");
    }
}