///Write a C program to find power of a number using for loop.
#include <stdio.h>

// Function to calculate the power of a number using a for loop
long long power(int base, int exponent) {
    long long result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    // Input from user
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate and print the power
    long long result = power(base, exponent);
    printf("%d raised to the power %d is: %lld\n", base, exponent, result);

    return 0;
}
