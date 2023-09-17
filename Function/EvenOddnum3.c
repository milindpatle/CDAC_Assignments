// With return with argument
#include <stdio.h>
char* EvenOdd() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}

int main() {
    char* result = EvenOdd();
    printf("The number is %s.\n", result);
    return 0;
}