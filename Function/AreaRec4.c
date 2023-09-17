// With return with arguments
#include <stdio.h>
int calArea(int length, int width) {
    int answer = length * width;
    return answer;
}

int main() {
    int length, width;
    printf("Enter the value: ");
    scanf("%d %d", &length, &width);
    int result = calArea(length, width);
    printf("Area of the rectangle: %d\n", result);
    return 0;
}