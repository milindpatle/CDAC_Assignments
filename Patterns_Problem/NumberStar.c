#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value :");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d",i);
            if(j!=i)
            {
                printf("*");
            }
        }

        printf("\n");
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("%d",i);
            if(j!=n-i-1)
            {
                printf("*");
            }

        }

        printf("\n");
    }
}