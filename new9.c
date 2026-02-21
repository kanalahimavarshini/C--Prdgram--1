#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;   // loop stops when i becomes 5
        }
        printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    char temp;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    reverse(str);

    printf("Reversed string: %s", str);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory not allocated");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest element = %d", largest);

    free(arr);

    return 0;
}
#include <stdio.h>

struct student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Student %d Details\n", i+1);
        printf("ID: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nID: %d", s[i].id);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "w");

    printf("Enter text: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "%s", text);
    fclose(fp);

    fp = fopen("data.txt", "r");

    fscanf(fp, " %[^\n]", text);

    printf("File content: %s", text);

    fclose(fp);

    return 0;
}
#include <stdio.h>

int fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}