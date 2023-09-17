//Find the Prime Numbers in a Range
#include<stdio.h>
int main(){
    int prime_num ;
    printf("Enter the range: " );
    scanf("%d",&prime_num);

    
    for(int i=1; i< prime_num;i++){
        for(int j=2;j*j<=prime_num;j++)
    {
        if(prime_num % i ==0 ){
            printf("%d",i);
        }
        else{
            printf("THe numbers are not prime number ");
        }

    }
    }

}