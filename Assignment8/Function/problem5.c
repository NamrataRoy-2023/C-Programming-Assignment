///5. Write a C program to find sum of digits of the number using Recursive Function.
#include <stdio.h>

// Recursive function to find the sum of digits
int sumOfDigits(int n) {
    // Base case: if the number is 0, the sum is 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: sum of digits is the last digit + sum of digits in the remaining number
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits using the recursive function
    int result = sumOfDigits(number);

    // Display the result
    printf("Sum of digits of %d: %d\n", number, result);

    return 0;
}