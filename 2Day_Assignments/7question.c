// .A number is entered through the keyboard.the number
//may contain 1,2,3,4 or 5 digits.Write a program to find a
//number of digits in the number
#include<stdio.h>
int main(){

    int i ,num=0;
    printf("Enter the value:");
    scanf("%d",&i);
    while(i!=0){
        num=i/10;
        num++;
    }
    printf("%d",num);
    return 0;

}