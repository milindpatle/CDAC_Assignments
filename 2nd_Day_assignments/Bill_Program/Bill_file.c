#include <stdio.h>
int main()
{
    int Vanila = 120;
    int Mango = 130;
    int Rashmalayi = 150;
    int item;
    int quantity;
    int total;
    float gst = 1.18;
    float total_gst;
    printf("IceCream Menu");
    printf("\n---------------------------------------");
    printf("\n1.Vanilla IceCream Price = 120\n2. S Icecream Price=130\n3.Third Icecream Price=150\n");
    printf("\nDATE:12-08-2023");

    printf("\n-----------------------------------------");


    printf("\nEnter the ice-cream name : ");
    scanf("%d", &item);
    switch (item)
    {

    case 1:
        printf("Enter the quantity of vanila icecream:");
        scanf("%d", &quantity);
        total = quantity * Vanila;
        printf("Total value of icecream is %d\n", total);
        total_gst = total * gst;
        printf("Total value with GST :%f", total_gst);

        break;

    case 2:
        printf("Enter the quantity of Mango icecream:");
        scanf("%d", &quantity);
        total = quantity * Mango;
        printf("Total value of icecream is %d\n", total);
        total_gst = total * gst;
        printf("Total value with GST :%f", total_gst);
        break;
    case 3:
        printf("Enter the quantity of Rashmalayi icecream:");
        scanf("%d", &quantity);
        total = quantity * Rashmalayi;
        printf("Total value of icecream is %d\n", total);
        total_gst = total * gst;
        printf("Total value with GST :%f", total_gst);
        break;



    default:
          

        break;
    }
    printf("\n**************************************************************");
    printf("\nThank you for your purchase; we hope you will come again soon.");
    printf("\n**************************************************************");

    
}