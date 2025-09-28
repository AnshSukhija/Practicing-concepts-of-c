#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int n, i;
    float sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Do you want to add more elements? (yes=1 / no=0): ");
    int addMore;
    scanf("%d", &addMore);

    if (addMore) {
        int extra;
        printf("How many more elements? ");
        scanf("%d", &extra);
        arr = (int *)realloc(arr, (n + extra) * sizeof(int));
        if (arr == NULL) {
            printf("Memory reallocation failed!\n");
            return 1;
        }
        printf("Enter %d more elements:\n", extra);
        for (i = n; i < n + extra; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        n += extra; 
    }

    
    float average = sum / n;
    printf("The average of the array elements is: %.2f\n", average);

    
    free(arr);

    return 0;
}
