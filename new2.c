#include <stdio.h>

int main() {
    float side, area;

    // Input side length
    printf("Enter the side of the square: ");
    scanf("%f", &side);

    // Calculate area
    area = side * side;

    // Display result
    printf("Area of the square = %.2f", area);

    return 0;
}
