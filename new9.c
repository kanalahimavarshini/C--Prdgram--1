#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;   // loop stops when i becomes 5
        }
        printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    char temp;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    reverse(str);

    printf("Reversed string: %s", str);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory not allocated");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest element = %d", largest);

    free(arr);

    return 0;
}