///4. Write a C program to swap two integers using call by value and call by reference methods of passing arguments to a function.
#include <stdio.h>

// Function to swap two integers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two integers using call by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Display the original values
    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using call by value (no change in main)
    swapByValue(num1, num2);
    printf("After swap by value: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using call by reference (changes reflected in main)
    swapByReference(&num1, &num2);
    printf("After swap by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}