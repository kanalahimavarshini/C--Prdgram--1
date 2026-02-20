#include <stdio.h>

int main() {
    int a[5], b[5], c[5], i;

    // Read first array
    printf("Enter 5 elements of first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Read second array
    printf("Enter 5 elements of second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    // Add arrays and store in third array
    for (i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }

    // Print result
    printf("Sum of two arrays:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
#include <stdio.h>

int largest(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Largest = %d", largest(x, y));
    return 0;
}
#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int arr[5], key, pos;

    printf("Enter 5 elements: ");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    pos = linearSearch(arr, 5, key);

    if(pos == -1)
        printf("Not Found");
    else
        printf("Found at position %d", pos + 1);

    return 0;
}#include <stdio.h>

int reverse(int n)
{
    int rev = 0;
    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Reverse = %d", reverse(num));
    return 0;
}
#include <stdio.h>

struct student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f\n", s.marks);

    return 0;
}
#include <stdio.h>

struct student
{
    int id;
    float marks;
};

int main()
{
    struct student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter ID and Marks: ");
        scanf("%d %f", &s[i].id, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++)
    {
        printf("ID = %d  Marks = %.2f\n", s[i].id, s[i].marks);
    }

    return 0;
}
#include <stdio.h>

struct complex
{
    int real, imag;
};

int main()
{
    struct complex c1, c2, sum;

    printf("Enter real and imaginary part of first number: ");
    scanf("%d %d", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second number: ");
    scanf("%d %d", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("Sum = %d + %di", sum.real, sum.imag);

    return 0;
}
#include <stdio.h>

struct student
{
    int id;
    float marks;
};

void display(struct student s)
{
    printf("ID = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
}

int main()
{
    struct student s1;

    printf("Enter ID and Marks: ");
    scanf("%d %f", &s1.id, &s1.marks);

    display(s1);
    return 0;
}