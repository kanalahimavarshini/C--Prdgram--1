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
