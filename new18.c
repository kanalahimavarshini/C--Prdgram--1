#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping: %d %d", x, y);

    return 0;
}
#include <stdio.h>

int sumArray(int *arr, int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sumArray(arr, n);

    printf("Sum = %d", result);

    return 0;
}
#include <stdio.h>

void reverseArray(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    int temp;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverseArray(arr, n);

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
#include <stdio.h>

int findMax(int *arr, int n) {
    int i, max = *arr;

    for(i = 1; i < n; i++) {
        if(*(arr + i) > max)
            max = *(arr + i);
    }
    return max;
}

int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = findMax(arr, n);

    printf("Maximum element = %d", max);

    return 0;
}