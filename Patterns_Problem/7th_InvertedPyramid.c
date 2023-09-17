#include<stdio.h>
int main(){
    int n,row,col;
    printf("Enter the value :");
    scanf("%d",&n);

    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<row;col++){
            printf(" ");
        }
        //star
        for(int col=0;col<n-row;col++){
            printf("* ");
        }
        printf("\n");
    }
}