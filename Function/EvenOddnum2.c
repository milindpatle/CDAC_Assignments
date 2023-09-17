// Without return with arguments
#include <stdio.h>

void EvenOdd(int i) {
    if (i % 2 == 0) {
        printf("%d is even.\n", i);
    } else {
        printf("%d is odd.\n", i);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    EvenOdd(num);
    return 0;
}