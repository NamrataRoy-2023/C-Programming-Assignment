///2. Write a C program to swap value of two variables using pointer.
#include <stdio.h>

// Function to swap values using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Get values from the user
    printf("Enter value for num1: ");
    scanf("%d", &num1);

    printf("Enter value for num2: ");
    scanf("%d", &num2);

    // Display the values before swapping
    printf("\nValues before swapping:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    // Swap values using the swap function
    swap(&num1, &num2);

    // Display the values after swapping
    printf("\nValues after swapping:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}
