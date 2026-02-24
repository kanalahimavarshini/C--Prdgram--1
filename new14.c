#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int found = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 34};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest element = %d", max);
    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 2, 1};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if(top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped element = %d\n", stack[top--]);
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    int n = strlen(str);
    int flag = 1;

    for(int i = 0; i < n/2; i++) {
        if(str[i] != str[n-i-1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}