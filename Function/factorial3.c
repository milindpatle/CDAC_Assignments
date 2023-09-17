// With return without arguments
#include <stdio.h>
int Factorial() {
    int c;
    printf("Enter a number: ");
    scanf("%d", &c);
    
    int answer = 1;
    for (int i = 1; i <= c; i++) {
        answer *= i;
    }
    
    return answer;
}

int main() {
    int result = Factorial();
    printf("Factorial: %d\n", result);
    return 0;
}