//4. Write a C program to check if it is a palindrome number
//or not using a recursive method.

#include<stdio.h>
int main(){
    int num, temp1,temp2,sum=0;
    printf("Enter the value:");
    scanf("%d",&num);
    temp1 = num;
    while(temp1>0){
        
        temp2 = temp1%10;
        sum = sum * 10 +temp2;
        temp1 = temp1/10;
    }
    if(num == sum)
    {
        
        printf("The number is Palindrome");
    }else
    {
        printf("The number is not Palindrome");
    }

}



    
    
