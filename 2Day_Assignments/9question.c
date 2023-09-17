#include<stdio.h>
int main(){
    int num,temp1,temp2;
    if(num/100!=0){
        temp1=num/100;
        switch (temp1)
        {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;

        case 4:
            printf("four");
            break;
        
        case 5:
            printf("five");
            break;
        
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");

   
    
        
        default:
            break;
        }

    }
     if(num/10!=0){
        temp2=num/10;
        switch(temp2)
        {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
        case 3:
            printf("Three");

        case 4:
            printf("four");
        
        case 5:
            printf("five");
        
        case 6:
            printf("six");
        case 7:
            printf("seven");
        case 8:
            printf("Eight");
        case 9:
            printf("Nine");

    }


}