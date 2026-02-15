#include <stdio.h>

long long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is %lld", n, factorial(n));

    return 0;
}
#include <stdio.h>

int main() {
    int i = 1;

    while(i <= 5) {
        printf("%d\n", i);
        i++;   // increment
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i = 2;

    while(i <= 10) {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 10; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i = 1;   // initialization

    while (i <= 5) {   // condition
        printf("%d\n", i);
        i++;   // increment
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
initialization;
while(condition) {
    // statements
    increment/decrement;
}
