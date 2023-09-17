#include<stdio.h>
int main(){
    int n ,j;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d",j+1);
        }
         j=j-1;

        for(;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}