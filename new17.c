#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int detectCycle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }
    return 0;
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 2;

    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 3;

    head->next = second;
    second->next = third;
    third->next = head;   // cycle created

    if (detectCycle(head))
        printf("Cycle Found");
    else
        printf("No Cycle");
}