///7. Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print all prime numbers between 1 and n
void printPrimes(int n) {
    printf("Prime numbers between 1 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int number;

    // Input from user
    printf("Enter a positive integer (n): ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print prime numbers
    printPrimes(number);

    return 0;
}
