///1. Write a C program to add, subtract, multiply and divide two integers using userdefined type function with return type.
#include <stdio.h>

// Function to add two integers
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to subtract two integers
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Function to multiply two integers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to divide two integers
float divide(int num1, int num2) {
    // Check if the divisor is not zero to avoid division by zero
    if (num2 != 0) {
        return (float)num1 / num2; // Convert the result to float for accurate division
    } else {
        printf("Error: Division by zero is not allowed\n");
        return 0.0; // Return 0 in case of division by zero
    }
}

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
 printf("Enter second integer: ");
    scanf("%d", &num2);

    // Perform operations and display the results
    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));
    
    // For division, display the result only if it's not division by zero
    float result = divide(num1, num2);
    if (result != 0.0) {
        printf("Quotient: %.2f\n", result);
    }

    return 0;
}