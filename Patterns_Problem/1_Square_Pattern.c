#include<stdio.h>
int main(){
    int i,j,l;
    printf("Enter the value:");
    scanf("%d",&l);
    for(int i=0;i<l;i++){
        for(int j=0;j<5;j++){
            printf("* ");
        }
        printf("\n");

    }
}