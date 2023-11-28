///3. Write a C program to add two numbers using pointers.
#include <stdio.h>

// Function to add two numbers using pointers
int addNumbers(int *a, int *b) {
    return (*a + *b);
}

int main() {
    int num1, num2;

    // Get values from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the values before addition
    printf("\nValues before addition:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    // Add the numbers using the addNumbers function
    int sum = addNumbers(&num1, &num2);

    // Display the sum
    printf("\nSum of the two numbers: %d\n", sum);

    return 0;
}
