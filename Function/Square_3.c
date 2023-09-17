// With return without arguments
#include <stdio.h>

double Square() {
    double num, answer;

    printf("Enter a number: ");
    scanf("%lf", &num);

    answer = num * num;

    return answer;
}

int main() {
    double result = Square();
    printf("The square of the number is %.2lf\n", result);
    return 0;
}