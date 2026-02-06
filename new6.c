#include <stdio.h>

int main() {
    int a[5], i;
    int sum = 0;
    float average;

    // Read 5 elements
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    // Calculate average
    average = sum / 5.0;

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
