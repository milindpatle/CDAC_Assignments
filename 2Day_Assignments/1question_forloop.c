#include<stdio.h>
int main(){
int n,fact=1;
printf("Enter the value:");
scanf("%d",&n);

for(int i=1;i<=n;++i){
    fact = fact * i;
}
printf("The value if fact is %d",fact);
return 0;
}