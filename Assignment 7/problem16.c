///16. Write a program to check whether a matrix is identity matrix or not.
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

// Function to check if a matrix is an identity matrix
int isIdentityMatrix(int matrix[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Check diagonal elements for 1 and non-diagonal elements for 0
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return 0; // Not an identity matrix
            }
        }
    }
    return 1; // Identity matrix
}

int main() {
    int size;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Check if the size is valid
    if (size <= 0) {
        printf("Please enter a valid size for the matrix.\n");
        return 1;
    }

    // Declare a matrix
    int matrix[100][100];

    // Input elements for the matrix
    printf("\nFor the matrix:\n");
    inputMatrix(matrix, size, size);

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, size, size);

    // Check if the matrix is an identity matrix
    if (isIdentityMatrix(matrix, size)) {
        printf("\nThe matrix is an Identity Matrix.\n");
    } else {
        printf("\nThe matrix is not an Identity Matrix.\n");
    }

    return 0;
}
