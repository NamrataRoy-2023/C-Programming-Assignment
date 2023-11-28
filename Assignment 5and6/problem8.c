///8. Write a C program to find sum of all prime numbers between 1 to n.
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

// Function to find the sum of prime numbers between 1 and n
int sumOfPrimes(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
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

    // Calculate and print the sum of prime numbers
    int result = sumOfPrimes(number);
    printf("Sum of prime numbers between 1 and %d: %d\n", number, result);

    return 0;
}
