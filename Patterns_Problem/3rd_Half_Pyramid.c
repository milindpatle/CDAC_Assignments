#include<stdio.h>
int main(){
    int n=6,row,col;

    for(int row=0;row<n;row++){
        for(int col=0;col<=row+1;col++){
            printf("* ");

        }
        printf("\n");
    }
}