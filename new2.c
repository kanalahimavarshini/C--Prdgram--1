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
#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14159;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = pi * radius * radius;

    // Display result
    printf("Area of the circle = %.2f", area);

    return 0;
}
