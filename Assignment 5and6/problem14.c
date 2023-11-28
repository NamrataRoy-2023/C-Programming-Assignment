///Write a c program to draw the following pyramid.
///                0
///             0  1
///          0  1  0
///       0  1  0  1
///    0  1  0  1  0

#include <stdio.h>

int main() {
    int rows;

    // Input from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Draw the pyramid
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf("   ");
        }

        // Print 0 and 1 alternatively
        for (int k = 0; k <= i; k++) {
            if (k % 2 == 0) {
                printf("0  ");
            } else {
                printf("1  ");
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
