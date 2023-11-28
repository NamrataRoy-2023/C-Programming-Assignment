///10. Write a C program to multiply two 2 X 2 matrix using pointers.
#include <stdio.h>

// Function to multiply two matrices using pointers
void multiplyMatrices(int mat1[2][2], int mat2[2][2], int result[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            *(*(result + i) + j) = 0;  // Initialize result matrix element to 0

            // Multiply and accumulate the product for each element
            for (int k = 0; k < 2; ++k) {
                *(*(result + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
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

    // Multiply the matrices using pointers
    multiplyMatrices(mat1, mat2, result);

    // Display the matrices and the result
    printf("\nMatrix 1:\n");
    printMatrix(mat1);

    printf("\nMatrix 2:\n");
    printMatrix(mat2);

    printf("\nProduct of the matrices:\n");
    printMatrix(result);

    return 0;
}
