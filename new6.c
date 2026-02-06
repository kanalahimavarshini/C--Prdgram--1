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
#include <stdio.h>

int main() {
    int a[10], i;
    int even = 0, odd = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total even numbers = %d\n", even);
    printf("Total odd numbers = %d\n", odd);

    return 0;
}
