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
#include <stdio.h>

int main() {
    int arr[] = {1,2,2,3,1};
    int n = 5;

    for(int i=0;i<n;i++) {
        int count = 1;

        if(arr[i] == -1)
            continue;

        for(int j=i+1;j<n;j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n = 3;

    for(int i=0;i<n;i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;

        if(head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;

    int left = 0;
    int right = n - 1;

    while(left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int left = 0;
    int right = strlen(str) - 1;
    int flag = 1;

    while(left < right) {
        if(str[left] != str[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,6,8};
    int target = 10;
    int n = 6;

    int left = 0;
    int right = n - 1;

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(sum == target) {
            printf("Pair: %d %d", arr[left], arr[right]);
            return 0;
        }
        else if(sum < target)
            left++;
        else
            right--;
    }

    printf("No pair found");
    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {1,1,2,2,3,4,4};
    int n = 7;

    int i = 0;

    for(int j=1;j<n;j++) {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    for(int k=0;k<=i;k++)
        printf("%d ", arr[k]);

    return 0;
}