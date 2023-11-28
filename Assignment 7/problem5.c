///5. Write a program to convert a decimal number taken as input from user to corresponding binary number and store the result in an array.
#include <stdio.h>

// Function to convert decimal to binary and store in an array
void decimalToBinary(int decimal, int binaryArray[], int *size) {
    *size = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binaryArray[*size] = decimal % 2;
        decimal /= 2;
        (*size)++;
    }

    // If the input decimal is 0
    if (*size == 0) {
        binaryArray[*size] = 0;
        (*size)++;
    }
}

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Binary representation: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int decimal, size;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Check if the decimal number is non-negative
    if (decimal < 0) {
        printf("Please enter a non-negative decimal number.\n");
        return 1;
    }

    // Declare an array to store the binary representation
    int binaryArray[32];  // Assuming a 32-bit binary representation

    // Convert decimal to binary and store in the array
    decimalToBinary(decimal, binaryArray, &size);

    // Display the binary representation
    displayArray(binaryArray, size);

    return 0;
}
