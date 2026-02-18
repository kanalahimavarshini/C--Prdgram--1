#include <stdio.h>
int main()
{
    int a=5,b=6,temp;
    scanf("%d %d",&a,&b);
    temp=0;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // allocate memory
    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);   // free memory

    return 0;
}
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcPtr)(int, int);

    funcPtr = add;  // function pointer

    printf("Sum = %d\n", funcPtr(5, 3));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    if(ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("Elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("Enter new size: ");
    scanf("%d", &n);

    ptr = (int*)realloc(ptr, n * sizeof(int));

    printf("Enter new elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("All elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp, *newNode;
    int n, i;

    printf("How many nodes? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        // Allocate memory
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if(head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Display Linked List
    printf("Linked List: ");
    temp = head;

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
