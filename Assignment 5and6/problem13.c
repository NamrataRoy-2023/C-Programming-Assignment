///Write a C program to print the following pyramid
///     *
///    * *
///   * * *
///  * * * *
/// * * * * *

#include <stdio.h>

int main() {
    int rows;

    // Input from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pyramid pattern
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

