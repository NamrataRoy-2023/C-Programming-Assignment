///9. Write a C program to add two 2 X 2 matrix using pointers.
#include <stdio.h>

// Function to add two matrices using pointers
void addMatrices(int mat1[2][2], int mat2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            *(*(result + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}

// Function to print a 2x2 matrix using pointers
void printMatrix(int mat[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int mat1[2][2], mat2[2][2], result[2][2];

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nEnter elements for the second matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add the matrices using pointers
    addMatrices(mat1, mat2, result);

    // Display the matrices and the result
    printf("\nMatrix 1:\n");
    printMatrix(mat1);

    printf("\nMatrix 2:\n");
    printMatrix(mat2);

    printf("\nSum of the matrices:\n");
    printMatrix(result);

    return 0;
}
