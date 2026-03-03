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
#include <stdio.h>

void bubbleSort(int *arr, int n) {
    int i, j, temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
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

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
#include <stdio.h>

int main() {
    int x = 50;
    int *p = &x;
    int **pp = &p;

    printf("Value of x = %d\n", x);
    printf("Using p = %d\n", *p);
    printf("Using pp = %d\n", **pp);

    return 0;
}
#include <stdio.h>

void changeValue(int **pp) {
    **pp = 100;
}

int main() {
    int x = 20;
    int *p = &x;

    changeValue(&p);

    printf("Updated value = %d", x);

    return 0;
}
#include <stdio.h>

void swap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    swap(&p1, &p2);

    printf("After swap:\n");
    printf("p1 points to %d\n", *p1);
    printf("p2 points to %d\n", *p2);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, rows = 2, cols = 3;

    int **arr;

    arr = (int **)malloc(rows * sizeof(int *));

    for(i = 0; i < rows; i++)
        arr[i] = (int *)malloc(cols * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    printf("Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // Free memory
    for(i = 0; i < rows; i++)
        free(arr[i]);

    free(arr);

    return 0;
}
#include <stdio.h>

void swap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 20, y = 40;
    int *p1 = &x;
    int *p2 = &y;

    swap(&p1, &p2);

    printf("After swap:\n");
    printf("p1 points to %d\n", *p1);
    printf("p2 points to %d\n", *p2);

    return 0;
}