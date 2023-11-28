///10. Write a C program to find power of any number using recursion.
#include <stdio.h>

// Recursive function to calculate power
double power(double base, int exponent) {
    // Base case: if the exponent is 0, the result is 1
    if (exponent == 0) {
        return 1.0;
    } else if (exponent > 0) {
        // Recursive case: power is base * power(base, exponent - 1)
        return base * power(base, exponent - 1);
    } else {
        // Handling negative exponent by taking reciprocal
        return 1.0 / (base * power(base, -exponent - 1));
    }
}

int main() {
    double base;
    int exponent;

    // Input base and exponent from the user
    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Call the recursive function to calculate power
    double result = power(base, exponent);
    // Display the result
    printf("Result: %.2lf\n", result);

    return 0;
}