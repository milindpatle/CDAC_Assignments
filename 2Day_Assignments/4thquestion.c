#include<stdio.h>
int main(){
    int num,temp1,temp2,sum=0;
    printf("Enter the value :");
    scanf("%d",&num);
    temp1 = num;

    while(temp1 > 0){
        int temp2 = temp1%10;
        sum = sum*10+temp2;
        temp1=temp1/10;
    }
    if(num == sum){
        printf("It is palindrome number");
    }else{
        printf("It is not a palindrome number");
    }

    

}