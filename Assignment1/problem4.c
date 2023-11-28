///4.Write a C program to swap first and last digits of a number.
#include <stdio.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to swap the first and last digits of a number
int swapFirstAndLastDigits(int num) {
    int numDigits = countDigits(num);

    if (numDigits < 2) {
        // Nothing to swap if the number has 0 or 1 digit
        return num;
    }

    // Extract the first and last digits
    int firstDigit = num / (int)pow(10, numDigits - 1);
    int lastDigit = num % 10;

    // Remove the first and last digits from the number
    num %= (int)pow(10, numDigits - 1);
    num /= 10;

    // Construct the new number with swapped digits
    int result = lastDigit * (int)pow(10, numDigits - 1) + num * 10 + firstDigit;

    return result;
}

int main() {
    int number;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Swap the first and last digits
    int result = swapFirstAndLastDigits(number);

    // Print the result
    printf("Number after swapping first and last digits: %d\n", result);

    return 0;
}
