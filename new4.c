#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d", sum);

    return 0;
}
#include <stdio.h>

int main() {
    int i = 1;

    while(i <= 10) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    result = num1 / num2;

    printf("Result = %.2f", result);

    return 0;
}
#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (num2 == 0) {
        printf("Division by zero is not allowed.");
    } else {
        printf("Result = %.2f", num1 / num2);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Division by zero is not allowed.");
    } else {
        printf("Quotient = %d\n", a / b);
        printf("Remainder = %d", a % b);
    }

    return 0;
}
#include <stdio.h>

float divide(float x, float y) {
    return x / y;
}

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b == 0) {
        printf("Division by zero is not allowed.");
    } else {
        printf("Result = %.2f", divide(a, b));
    }

    return 0;
}
