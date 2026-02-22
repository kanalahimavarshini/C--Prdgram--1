#include <stdio.h>
int main(){
int x;
printf("enter a number:");
scanf("%d,&x");
printf("%d",x%2==0);
return 0;
}

#include <stdio.h>
int main(){
int x;
printf("enter a number:");
scanf("%d,&x");
printf("%d",x%5==0);
return 0;
}
#include <stdio.h>

int main()
{
    int arr[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found at position %d", i+1);
    else
        printf("Element not found");

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int low = 0, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found");
    return 0;
}