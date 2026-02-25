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
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    int largest = *ptr;
    int second = -99999;

    for(i = 1; i < n; i++) {
        if(*(ptr + i) > largest) {
            second = largest;
            largest = *(ptr + i);
        }
        else if(*(ptr + i) > second && *(ptr + i) != largest) {
            second = *(ptr + i);
        }
    }

    printf("Second largest = %d", second);

    return 0;
}
#include <stdio.h>

int main() {
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], arr3[n1 + n2];

    int *p1 = arr1;
    int *p2 = arr2;
    int *p3 = arr3;

    printf("Enter first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", p1 + i);

    printf("Enter second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", p2 + i);

    for(i = 0; i < n1; i++)
        *(p3 + i) = *(p1 + i);

    for(i = 0; i < n2; i++)
        *(p3 + n1 + i) = *(p2 + i);

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", *(p3 + i));

    return 0;
}
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    int max = *ptr;

    for(i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Largest element = %d", max);

    return 0;
}
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Array in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}