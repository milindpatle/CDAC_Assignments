#include<Stdio.h>
int main(){
    int n=5,row,col;

    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row;col++){
            printf(" ");                      
        }
        if(row==1||row==n){
            for(col=1;col<=row;col++){
                printf("* ");
            }
        }else{
               
            printf("*");
            for(col=1;col<=2*row-3;col++){
                printf(" ");
            }


            printf("*");
        }


        printf("\n");
    }
}