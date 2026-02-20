#include <stdio.h>

int main() {
    int a[5], b[5], c[5], i;

    // Read first array
    printf("Enter 5 elements of first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Read second array
    printf("Enter 5 elements of second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    // Add arrays and store in third array
    for (i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }

    // Print result
    printf("Sum of two arrays:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
#include <stdio.h>

int largest(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Largest = %d", largest(x, y));
    return 0;
}
