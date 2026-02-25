#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(*(ptr + j) > *(ptr + j + 1)) {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(*(ptr + mid) == key) {
            found = 1;
            break;
        }
        else if(*(ptr + mid) < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found)
        printf("Element found at position %d", mid + 1);
    else
        printf("Element not found");

    return 0;
}
#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *start = arr;
    int *end = arr + n - 1;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}