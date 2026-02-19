#include <stdio.h>
int main()
{
    int n,i;
    long fact=1;
    printf("Enter a integer :");
    scanf("%d",&n);
    if (n<0)
    printf("Error :factorial of negative number doesn't exist");
else if (n==0||n==1)
printf("factorial of %d=%ld\n",n,fact);
else{
    for (i=1;i<n;i++)
    printf("factorial of %d=%\d\n"n,fact);
}
return 0;
}
#include <stdio.h>

// Function for Binary Search
int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            return mid;   // element found
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
    return -1;   // element not found
}

int main()
{
    int arr[100], n, i, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (in sorted order
#include <stdio.h>

// Function definition
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
    return -1;   // return -1 if not found
}

int main()
{
    int arr[100], n, i, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = linearSearch(arr, n, key);

    if(pos != -1)
        printf("Element found at position %d", pos + 1);
    else
        printf("Element not found");

    return 0;
}
    #include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int *ptr;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    ptr = arr;   // pointer points to first element

    for(i = 0; i < n; i++)
    {
        if(*(ptr + i) == key)
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

int main()
{
    int arr[100], n, i, key;
    int low = 0, high, mid;
    int *ptr;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (in sorted order):\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    ptr = arr;        // pointer to first element
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(*(ptr + mid) == key)
        {
            found = 1;
            break;
        }
        else if(*(ptr + mid) < key)
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

