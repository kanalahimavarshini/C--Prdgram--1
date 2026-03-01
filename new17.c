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
#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {9, 4, 7, 6, 3, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
#include <stdio.h>

int fib(int n, int dp[]) {
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fib(n-1, dp) + fib(n-2, dp);
    return dp[n];
}

int main() {
    int n = 10;
    int dp[100];

    for (int i = 0; i <= n; i++)
        dp[i] = -1;

    printf("Fibonacci = %d", fib(n, dp));
}
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int W = 7;
    int n = 4;

    int dp[10][10];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i-1] <= w)
                dp[i][w] = max(val[i-1] + dp[i-1][w - wt[i-1]], dp[i-1][w]);
            else
                dp[i][w] = dp[i-1][w];
        }
    }

    printf("Maximum value = %d", dp[n][W]);
}
#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char X[] = "ABCBDAB";
    char Y[] = "BDCAB";

    int m = strlen(X);
    int n = strlen(Y);

    int dp[20][20];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    printf("LCS Length = %d", dp[m][n]);
}
#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int coins[] = {1, 2, 5};
    int amount = 11;
    int n = 3;

    int dp[100];

    dp[0] = 0;

    for (int i = 1; i <= amount; i++)
        dp[i] = INT_MAX;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    printf("Minimum coins = %d", dp[amount]);
}
#include <stdio.h>

int main() {
    int arr[] = {10, 22, 9, 33, 21, 50};
    int n = 6;

    int dp[100];
    int max = 1;

    for (int i = 0; i < n; i++)
        dp[i] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                if (dp[i] > max)
                    max = dp[i];
            }
        }
    }

    printf("Length of LIS = %d", max);
}
#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int n = 5;

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);
}
#include <stdio.h>

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;

    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        if (current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];

        if (current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("Maximum Subarray Sum = %d", max_sum);
}