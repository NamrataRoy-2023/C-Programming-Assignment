///6. Write a C program to read an integer number and print the reverse of that number using recursion.
#include <stdio.h>

// Function to reverse a given number
int reverseNumber(int n) {
    int reversedNumber = 0;
    while (n != 0) {
        reversedNumber = reversedNumber * 10 + n % 10;
        n /= 10;
    }
    return reversedNumber;
}

int main() {
    int number;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function to reverse the number
    int reversed = reverseNumber(number);

    // Display the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}