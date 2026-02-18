#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d", sum);

    return 0;
}
#include <stdio.h>

int main() {
    int i = 1;

    while(i <= 10) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    result = num1 / num2;

    printf("Result = %.2f", result);

    return 0;
}
#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (num2 == 0) {
        printf("Division by zero is not allowed.");
    } else {
        printf("Result = %.2f", num1 / num2);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Division by zero is not allowed.");
    } else {
        printf("Quotient = %d\n", a / b);
        printf("Remainder = %d", a % b);
    }

    return 0;
}
#include <stdio.h>

float divide(float x, float y) {
    return x / y;
}

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b == 0) {
        printf("Division by zero is not allowed.");
    } else {
        printf("Result = %.2f", divide(a, b));
    }

    return 0;
}
#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;   // pointer stores address of a

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Pointer value (address) = %p\n", p);
    printf("Value using pointer = %d\n", *p);

    return 0;
}
#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;
    int *p;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    p = arr;   // pointer to first element

    for(i = 0; i < 5; i++) {
        sum += *(p + i);
    }

    printf("Sum = %d\n", sum);

    return 0;
}
#include <stdio.h>

int main() {
    int arr[5], i;
    int *p, max;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    p = arr;
    max = *p;

    for(i = 1; i < 5; i++) {
        if(*(p + i) > max)
            max = *(p + i);
    }

    printf("Largest number = %d\n", max);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void deleteNode(struct Node **head, int key) {
    struct Node *temp = *head, *prev = NULL;

    // If head node holds the key
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Search for the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void display(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int n, i, value;

    printf("How many nodes? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL)
            head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Enter value to delete: ");
    scanf("%d", &value);

    deleteNode(&head, value);

    display(head);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertEnd(struct Node **head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp;

    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void display(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    display(head
