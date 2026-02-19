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
#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int low = 0, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (in sorted order):\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 1)
        printf("Element found at position %d", mid + 1);
    else
        printf("Element not found");

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted elements in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, min_index, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        min_index = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        // Swap
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("Sorted elements in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");

    return 0;
}
#include <stdio.h>

// Function for Linear Search
int linearSearch(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;   // return index if found
        }
    }
    return -1;  // return -1 if not found
}

int main()
{
    int arr[100], n, i, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, n, key);

    if(result != -1)
        printf("Element found at position %d", result + 1);
    else
        printf("Element not found");

    return 0;
}
