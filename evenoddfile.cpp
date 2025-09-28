#include <stdio.h>

int main () {
    FILE *inputfile, *evenfile, *oddfile;
    int num[30];
    int i;

    inputfile = fopen("number.txt", "w");
    if (inputfile == NULL) {
        printf("Error opening Number \n");
        return 1;
    }

    printf("Enter 30 numbers: \n");
    for (i = 0; i < 30; i++) {
        scanf("%d", &num[i]);
        fprintf(inputfile, "%d\n", num[i]);
    }
    fclose(inputfile);

    evenfile = fopen("even.txt", "w");
    oddfile = fopen("odd.txt", "w");

    if (evenfile == NULL || oddfile == NULL) {
        printf("Error opening output files\n");
        return 1;
    }

    for (i = 0; i < 30; i++) {
        if (num[i] % 2 == 0) {
            fprintf(evenfile, "%d\n", num[i]);
        } else {
            fprintf(oddfile, "%d\n", num[i]);
        }
    }

    fclose(evenfile);
    fclose(oddfile);

    return 0;
}

