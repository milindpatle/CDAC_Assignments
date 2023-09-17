// Without return with arguments
#include <stdio.h>
void kPalindrome(int num) {
    int reversedNum = 0, originalnum, remainder;

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
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    Palindrome(number);
    return 0;
}