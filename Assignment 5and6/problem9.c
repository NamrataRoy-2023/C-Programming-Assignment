///9. Write a C program to find all prime factors of a number.
#include <stdio.h>

// Function to print all prime factors of a number
void primeFactors(int num) {
    // Print the number of 2s that divide num
    while (num % 2 == 0) {
        printf("%d ", 2);
        num = num / 2;
    }

    // Consider odd factors starting from 3
    for (int i = 3; i * i <= num; i = i + 2) {
        // Print i as a factor while i divides num
        while (num % i == 0) {
            printf("%d ", i);
            num = num / i;
        }
    }

    // If num becomes a prime number greater than 2
    if (num > 2) {
        printf("%d ", num);
    }
}

int main() {
    int number;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print prime factors
    printf("Prime factors of %d are: ", number);
    primeFactors(number);

    return 0;
}
