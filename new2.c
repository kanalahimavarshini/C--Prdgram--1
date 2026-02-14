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
#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 10; i++) {
        sum = sum + i;
    }

    printf("Sum of first 10 natural numbers = %d", sum);

    return 0;
}
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
