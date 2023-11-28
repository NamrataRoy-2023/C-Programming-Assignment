///7. Write a C program to find maximum and minimum between two numbers using functions.
#include <stdio.h>

// Function to find the maximum between two numbers
int findMaximum(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

// Function to find the minimum between two numbers
int findMinimum(int num1, int num2) {
    return (num1 < num2) ? num1 : num2;
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the functions to find maximum and minimum
    int maximum = findMaximum(num1, num2);
    int minimum = findMinimum(num1, num2);

    // Display the results
    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}