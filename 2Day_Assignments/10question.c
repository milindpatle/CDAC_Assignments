#include<stdio.h>
int main(){
    int Customer_order,stock_order;
    char credit;
    printf("Enter the values :");
    scanf("%d%d %c\n",&Customer_order,&stock_order,&credit);

    if(Customer_order <=stock_order && credit == 'ok'){
        printf("Supply has requriments");
    }elseif(Customer_order>stock_order && credit == 'ok'){
        print("stock is number")

    }else{
        printf("Do not supply");
        
    }
}