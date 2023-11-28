///12. Write a program to perform addition and subtraction between two matrices.
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

// Function to add two matrices
void addMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main() {
    int rows, columns;

    // Input the number of rows and columns for the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Check if the matrix dimensions are valid
    if (rows <= 0 || columns <= 0) {
        printf("Please enter valid dimensions for the matrices.\n");
        return 1;
    }

    // Declare two matrices and the result matrix
    int matrix1[100][100], matrix2[100][100], result[100][100];

    // Input elements for the first matrix
    printf("\nFor the first matrix:\n");
    inputMatrix(matrix1, rows, columns);

    // Input elements for the second matrix
    printf("\nFor the second matrix:\n");
    inputMatrix(matrix2, rows, columns);

    // Perform addition
    addMatrices(matrix1, matrix2, result, rows, columns);

    // Display the result of addition
    printf("\nAddition Result:\n");
    displayMatrix(result, rows, columns);

    // Perform subtraction
    subtractMatrices(matrix1, matrix2, result, rows, columns);

    // Display the result of subtraction
    printf("\nSubtraction Result:\n");
    displayMatrix(result, rows, columns);

    return 0;
}
