// With return with arguments
#include <stdio.h>
int Factorial(int c) {
    int answer = 1;
    for (int i = 1; i <= c; i++) {
        answer *= i;
    }
    
    return answer;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = Factorial(num);
    printf("Factorial: %d\n", result);
    return 0;
}