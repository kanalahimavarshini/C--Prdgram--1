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
