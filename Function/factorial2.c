// Without return without arguments
#include <stdio.h>
void Factorial(int c) {
    int answer = 1;
    for (int i = 1; i <= c; i++) {
        answer *= i;
    }
    
    printf("Factorial: %d\n", answer);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    Factorial(num);
    return 0;
}   