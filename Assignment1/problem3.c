///3. Write a C program to find first and last digit of a number.
#include <stdio.h>

// Function to find the first digit of a number
int findFirstDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

// Function to find the last digit of a number
int findLastDigit(int num) {
    return num % 10;
}

int main() {
    int number;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Find and print the first and last digits
    int firstDigit = findFirstDigit(number);
    int lastDigit = findLastDigit(number);

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}
