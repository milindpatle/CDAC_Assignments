// Without return with arguments
#include <stdio.h>
void calArea(int length, int width) {
    int answer = length * width;
    printf("Area of the rectangle: %d\n", answer);
}

int main() {
    int length, width;
    printf("Enter the value : ");
    scanf("%d %d", &length, &width);
    cal(length, width);
    return 0;
}