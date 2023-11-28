///1. Write a C program to display the cube of the number upto n.
#include <stdio.h>

int main() {
    int n;

    // Input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display cubes of numbers up to n
    printf("Cubes of numbers up to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("Cube of %d: %d\n", i, i * i * i);
    }

    return 0;
}
