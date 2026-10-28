// Q10. Input a 3 x 3 matrix and calculate
// the sum of each row and each column.

#include <stdio.h>

int main(void) {
    int matrix[3][3];
    int i, j, row_sum, column_sum;

    // Input matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter Number for Row %d, Column %d: ",
                   i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate sum of each row
    for (i = 0; i < 3; i++) {
        row_sum = 0;

        for (j = 0; j < 3; j++) {
            row_sum += matrix[i][j];
        }

        printf("Sum of Row %d = %d\n", i + 1, row_sum);
    }

    // Calculate sum of each column
    for (j = 0; j < 3; j++) {
        column_sum = 0;

        for (i = 0; i < 3; i++) {
            column_sum += matrix[i][j];
        }

        printf("Sum of Column %d = %d\n",
               j + 1, column_sum);
    }

    return 0;
}