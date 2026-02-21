#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;   // increment i
    }

    return 0;
}

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>

void quicksort(int arr[], int low, int high)
{
    int i = low, j = high;
    int pivot = arr[(low + high) / 2];
    int temp;

    while(i <= j)
    {
        while(arr[i] < pivot)
            i++;

        while(arr[j] > pivot)
            j--;

        if(i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if(low < j)
        quicksort(arr, low, j);

    if(i < high)
        quicksort(arr, i, high);
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quicksort(arr, 0, n-1);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}