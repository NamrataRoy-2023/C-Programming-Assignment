///Write a C program to print the following pyramid
///              1
///            1 2 3
///          1 2 3 4 5 
///        1 2 3 4 5 6 7
///      1 2 3 4 5 6 7 8 9

#include <stdio.h>

int main() {
    int rows;

    // Input from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pyramid
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print numbers
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d ", k);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
