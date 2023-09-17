#include<stdio.h>
int main(){
    int i,s,c,k,row;
    printf("Enter the value :");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int s=i;s<=5;s++){
            printf(" ");
            
        }
        for(c=i;c>=1;c--){
            printf("*");

        }    
        for(k=2;k<=i;k++){
            printf("*");

        }
        printf("\n");
    }
}
