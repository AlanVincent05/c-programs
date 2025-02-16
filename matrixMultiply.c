#include <stdio.h>

// Function to read a matrix
void readMatrix(int rows, int cols, int matrix[rows][cols], const char *name) {
    printf("Enter elements of %s:\n", name);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int r1, int c1, int r2, int c2, int A[r1][c1], int B[r2][c2], int C[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;  // Initialize result matrix
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input matrix dimensions
    printf("Enter the no of rows and columns in matrix1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the no of rows and columns in matrix2: ");
    scanf("%d %d", &r2, &c2);

    // Validate multiplication condition
    if (c1 != r2) {
        printf("Matrix multiplication is not possible\n");
        return 1;
    }

    // Declare matrices
    int A[r1][c1], B[r2][c2], C[r1][c2];

    // Read input matrices
    readMatrix(r1, c1, A, "Matrix1");
    readMatrix(r2, c2, B, "Matrix2");

    // Multiply matrices
    multiplyMatrices(r1, c1, r2, c2, A, B, C);

    // Display result
    printf("Resultant Matrix (Matrix1 * Matrix2):\n");
    printMatrix(r1, c2, C);

    return 0;
}