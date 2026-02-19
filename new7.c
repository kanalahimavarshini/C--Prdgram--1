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
