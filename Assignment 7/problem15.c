///15. Write a program to perform multiplication of two matrices.
#include <stdio.h>

// Function to input elements of a matrix
void inputMatrix(int matrix[][100], int rows, int columns) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][100], int rows, int columns) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[][100], int rows1, int columns1, int matrix2[][100], int rows2, int columns2, int result[][100]) {
    // Check if matrices can be multiplied
    if (columns1 != rows2) {
        printf("Matrices cannot be multiplied. Invalid dimensions.\n");
        return;
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows1, columns1, rows2, columns2;

    // Input the dimensions of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &columns1);

    // Input the dimensions of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &columns2);

    // Check if matrix dimensions are valid for multiplication
    if (columns1 != rows2) {
        printf("Matrices cannot be multiplied. Invalid dimensions.\n");
        return 1;
    }

    // Declare two matrices and the result matrix
    int matrix1[100][100], matrix2[100][100], result[100][100];

    // Input elements for the first matrix
    printf("\nFor the first matrix:\n");
    inputMatrix(matrix1, rows1, columns1);

    // Input elements for the second matrix
    printf("\nFor the second matrix:\n");
    inputMatrix(matrix2, rows2, columns2);

    // Perform matrix multiplication
    multiplyMatrices(matrix1, rows1, columns1, matrix2, rows2, columns2, result);

    // Display the result of multiplication
    printf("\nResult of Matrix Multiplication:\n");
    displayMatrix(result, rows1, columns2);

    return 0;
}
