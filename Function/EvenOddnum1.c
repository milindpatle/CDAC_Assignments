// Without return without arguments
#include <stdio.h>

void EvenOdd() {
    int even, odd;

    printf("Enter a number: ");
    scanf("%d", &even);

    if (even % 2 == 0) {
        printf("%d is even.\n", even);
    } else {
        printf("%d is odd.\n", even);
    }
}

int main() {
    EvenOdd();
    return 0;
}