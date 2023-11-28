///17. Write a program to check whether a matrix is sparse matrix or not.
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

// Function to check if a matrix is a sparse matrix
int isSparseMatrix(int matrix[][100], int rows, int columns) {
    int zeroCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    // If the number of zero elements is greater than half the total elements, it's considered sparse
    return (zeroCount > (rows * columns) / 2);
}

int main() {
    int rows, columns;

    // Input the dimensions of the matrix
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

    // Check if the matrix is a sparse matrix
    if (isSparseMatrix(matrix, rows, columns)) {
        printf("\nThe matrix is a Sparse Matrix.\n");
    } else {
        printf("\nThe matrix is not a Sparse Matrix.\n");
    }

    return 0;
}
