///2. Write a C program to print all Prime numbers between 1 to N.
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

// Function to print prime numbers up to N
void printPrimes(int N) {
    printf("Prime numbers between 1 and %d are:\n", N);
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int N;

    // Input from user
    printf("Enter a positive integer (N): ");
    scanf("%d", &N);

    // Check if the number is positive
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        // Print prime numbers
        printPrimes(N);
    }

    return 0;
}
