#include<stdio.h>
int main(){
    int n;

    printf("Enter the number:");
    scanf("%d",&n);

    if(n <=1) return;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            printf(i);
            n=n/i;
        }
    }
    if(n>1){
        printf(n);
    }

}