#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int found = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 34};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest element = %d", max);
    return 0;
}