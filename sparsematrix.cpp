#include <stdio.h>

int main() {
    int matrix[10][10], triplet[100][3];
    int rows, cols, i, j, k = 1, nonZero = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] != 0)
                nonZero++;
        }
    }

    // Store sparse matrix in triplet form
    triplet[0][0] = rows;
    triplet[0][1] = cols;
    triplet[0][2] = nonZero;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    printf("\nSparse Matrix (Triplet Representation):\n");
    printf("Row\tColumn\tValue\n");

    for (i = 0; i <= nonZero; i++) {
        printf("%d\t%d\t%d\n",
               triplet[i][0],
               triplet[i][1],
               triplet[i][2]);
    }

    return 0;
}
