///3. Write a C program to calculate factorial of a number.
#include <stdio.h>

// Function to calculate the factorial of a number
long long calculateFactorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calculateFactorial(num - 1);
    }
}

int main() {
    int number;

    // Input from user
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Calculate and print the factorial
    long long factorial = calculateFactorial(number);
    printf("Factorial of %d is: %lld\n", number, factorial);

    return 0;
}
