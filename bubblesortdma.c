#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    int *arr;
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n elements
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    // Deallocate the memory
    free(arr);

    return 0;
}

