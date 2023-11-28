///13. Write a program to transpose a matrix.
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

// Function to transpose a matrix
void transposeMatrix(int matrix[][100], int transposedMatrix[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, columns;

    // Input the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Check if the matrix dimensions are valid
    if (rows <= 0 || columns <= 0) {
        printf("Please enter valid dimensions for the matrix.\n");
        return 1;
    }

    // Declare a matrix and the transposed matrix
    int matrix[100][100], transposedMatrix[100][100];

    // Input elements for the matrix
    printf("\nFor the matrix:\n");
    inputMatrix(matrix, rows, columns);

    // Transpose the matrix
    transposeMatrix(matrix, transposedMatrix, rows, columns);

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, columns);

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    displayMatrix(transposedMatrix, columns, rows);

    return 0;
}
