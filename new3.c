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
