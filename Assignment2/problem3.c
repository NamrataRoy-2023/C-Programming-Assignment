///3. Write a C program to count number of digits in a number.
#include <stdio.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;

    // Count digits using a loop
    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main() {
    int number;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Count and print the number of digits
    int digitCount = countDigits(number);
    printf("Number of digits in %d: %d\n", number, digitCount);

    return 0;
}
