// without return without arguments
#include <stdio.h>

void Factorial() {
    int c;
    printf("Enter a number: ");
    scanf("%d", &c);
    
    int answer = 1;
    for (int i = 1; i <= c; i++) {
        answer *= i;
    }
    
    printf("Factorial: %d\n", answer);
}

int main() {
    Factorial();
    return 0;
}