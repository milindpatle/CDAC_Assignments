//.WAP to calculate the area of the rectangle using a function.
// Without return without arguments
#include <stdio.h>
void calArea() {
    int length, width;
    printf("Enter the value: ");
    scanf("%d %d", &width, &length);
    
    int answer = length * width;
    
    printf("Area of the rectangle: %d\n", answer);
}

int main() {
    calArea();
    return 0;
}