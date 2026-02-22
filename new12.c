#include <stdio.h>

int main() {
    int num1, num2, product;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Multiplication
    product = num1 * num2;

    // Display result
    printf("Multiplication of %d and %d is: %d\n", num1, num2, product);

    return 0;
}
#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (num2 != 0) {
        result = num1 / num2;
        printf("Division of %.2f by %.2f is: %.2f\n", num1, num2, result);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }

    return 0;
}
#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if(top == MAX - 1)
        printf("Overflow\n");
    else
        stack[++top] = value;
}

void pop()
{
    if(top == -1)
        printf("Underflow\n");
    else
        top--;
}

void display()
{
    int i;
    for(i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();

    pop();
    printf("After pop:\n");
    display();

    return 0;
}
#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value)
{
    if(rear == MAX - 1)
        printf("Queue Full\n");
    else
    {
        if(front == -1)
            front = 0;

        queue[++rear] = value;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
        printf("Queue Empty\n");
    else
        front++;
}

void display()
{
    int i;
    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    printf("\nAfter dequeue:\n");
    display();

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *newnode, *temp;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
            head = temp = newnode;
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = head;

    printf("Linked List:\n");
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node* create(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

struct node* insert(struct node* root, int data)
{
    if(root == NULL)
        return create(data);

    if(data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

int main()
{
    struct node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    printf("BST Created");

    return 0;
}