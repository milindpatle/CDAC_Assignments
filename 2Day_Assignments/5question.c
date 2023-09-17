//Write a C program to Subtract Two Numbers Without
//Using the Subtraction Operator
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the value:");
    scanf("%d\n%d",&num1,&num2);
    for(int i=0;i<=num1;i++){
        num1--;

    }
    printf("Substraction value of two numbers: %d",num1);
}