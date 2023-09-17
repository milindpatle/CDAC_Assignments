#include<stdio.h>

int sum(int a,int b){

    for(int i=1;i<b;i++){
        a++;

    }
    printf("%d",a);
}
int main(){
    int a = sum(12,32);
//    printf("Enter the number :%d",a);
    return 0;
    
}