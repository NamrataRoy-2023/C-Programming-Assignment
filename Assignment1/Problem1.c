///1. Write a C program to calculate factorial of a number.
#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input from user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Calculate and print factorial
        unsigned long long result = factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}
