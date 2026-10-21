#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    int *arr;

    printf("Enter number of elements for dynamic allocation: ");
    scanf("%d", &n);

    // Allocate memory dynamically using malloc
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i); // Pointer arithmetic
        sum += *(arr + i);
    }

    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    printf("\nSum of array elements: %d\n", sum);

    // Free dynamically allocated memory
    free(arr);
    printf("Memory successfully freed.\n");

    return 0;
}
