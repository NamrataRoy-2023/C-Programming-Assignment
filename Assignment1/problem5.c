///5.Write a C program to find frequency of each digit in a given integer.
#include <stdio.h>

// Function to calculate the frequency of each digit
void digitFrequency(int num) {
    int count[10] = {0}; // Array to store the frequency of each digit

    // Count the frequency of each digit
    while (num != 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Print the frequency of each digit
    printf("Digit Frequency:\n");
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("Digit %d: %d times\n", i, count[i]);
        }
    }
}

int main() {
    int number;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calculate and print digit frequency
    digitFrequency(number);

    return 0;
}
