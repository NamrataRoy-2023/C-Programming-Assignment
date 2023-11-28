///14. Write a program to add the elements of each row and each column of a matrix.
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

// Function to calculate and display the sum of each row
void sumOfRows(int matrix[][100], int rows, int columns) {
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }
}

// Function to calculate and display the sum of each column
void sumOfColumns(int matrix[][100], int rows, int columns) {
    printf("\nSum of each column:\n");
    for (int j = 0; j < columns; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
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

    // Declare a matrix
    int matrix[100][100];

    // Input elements for the matrix
    printf("\nFor the matrix:\n");
    inputMatrix(matrix, rows, columns);

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, columns);

    // Calculate and display the sum of each row
    sumOfRows(matrix, rows, columns);

    // Calculate and display the sum of each column
    sumOfColumns(matrix, rows, columns);

    return 0;
}
