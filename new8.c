#include <stdio.h>

int main() {
    int a[5], b[5], c[5], i;

    // Read first array
    printf("Enter 5 elements of first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Read second array
    printf("Enter 5 elements of second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    // Add arrays and store in third array
    for (i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }

    // Print result
    printf("Sum of two arrays:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
#include <stdio.h>

int largest(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Largest = %d", largest(x, y));
    return 0;
}
#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int arr[5], key, pos;

    printf("Enter 5 elements: ");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    pos = linearSearch(arr, 5, key);

    if(pos == -1)
        printf("Not Found");
    else
        printf("Found at position %d", pos + 1);

    return 0;
}#include <stdio.h>

int reverse(int n)
{
    int rev = 0;
    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Reverse = %d", reverse(num));
    return 0;
}