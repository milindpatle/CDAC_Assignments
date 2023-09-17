//. Implement a Simple Calculator

#include<stdio.h>
int main(){
    int num1, num2;
    char operator;
    int num3;
    printf("Enter the operator : ");
    scanf("%c",&operator);
    
    printf("Enter the value : ");
    scanf("%d\n%d",&num1,&num2);
   

    switch (operator)
    {
    case '+':
        printf("Addition  valueis : %d",num1+num2);
        break;
    case '-':
        
        num3 = num1 - num2;
        if(num3 <-num3){
            printf(" Substraction value is:%d",num3);
        }
    case '*':
        printf("Multiplication  value is: %d",num1*num2);
        break;
    case '/':
        printf("Division  value is : %d",num1/num2);
        break;
    
    default:
    printf("INVALID OPERATOR");
        break;
    }
    return 0;
}