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
    printf("Popped = %d\n", stack[top--]);
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

int main() {
    int a[] = {1,3,5};
    int b[] = {2,4,6};
    int c[6];

    int i=0,j=0,k=0;

    while(i<3 && j<3) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i<3)
        c[k++] = a[i++];

    while(j<3)
        c[k++] = b[j++];

    for(i=0;i<6;i++)
        printf("%d ", c[i]);

    return 0;
}