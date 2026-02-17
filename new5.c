#include <stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter value of x :");
    scanf("%d",&x);
    printf("Enter value of y :");
    scanf("%d",&y);
    printf("Before swapping x=%d,y=%d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("After swapping x=%d,y=%d",x,y);
    return 0;
}
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Integers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
#include <stdio.h>

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num == (int)num)
        printf("It is an integer.\n");
    else
        printf("It is not an integer.\n");

    return 0;
}
#include <stdio.h>

int main() {
    int arr[5];
    int i, count = 0;

    printf("Enter 5 integers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        count++;
    }

    printf("Total integers entered = %d\n", count);

    return 0;
}
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("It is an Even number.\n");
    else
        printf("It is an Odd number.\n");

    return 0;
}
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(n == 1)
        printf("Not Prime\n");
    else if(flag == 0)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    return 0;
}
#include <stdio.h>

int main() {
    int arr[5], i;
    int largest, smallest;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
