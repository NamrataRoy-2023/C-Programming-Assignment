///2. Write a C program to find all factors of a number.
#include <stdio.h>

// Function to find and print all factors of a number
void findFactors(int num) {
    printf("Factors of %d are: ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int number;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Find and print factors
    findFactors(number);

    return 0;
}
