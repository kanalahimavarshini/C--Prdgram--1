#include <stdio.h>

int main() {
    int num1, num2, product;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Multiplication
    product = num1 * num2;

    // Display result
    printf("Multiplication of %d and %d is: %d\n", num1, num2, product);

    return 0;
}
#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (num2 != 0) {
        result = num1 / num2;
        printf("Division of %.2f by %.2f is: %.2f\n", num1, num2, result);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }

    return 0;
}
