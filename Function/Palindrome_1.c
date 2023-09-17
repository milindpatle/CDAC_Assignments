// Without return without arguments
#include <stdio.h>
void Palindrome() {
    int num, reversedNum = 0, originalnum, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalnum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalnum == reversedNum) {
        printf("%d is a palindrome.\n", originalnum);
    } else {
        printf("%d is not a palindrome.\n", originalnum);
    }
}

int main() {
    Palindrome();
    return 0;
}