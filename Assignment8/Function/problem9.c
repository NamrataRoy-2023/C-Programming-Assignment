///9. Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0; // Not a prime number
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0, digit;

    while (num > 0) {
        digit = num % 10;
        sum += pow(digit, 3); // For Armstrong number of 3 digits
        num /= 10;
    }

    return (sum == originalNum);
}
// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 1; // Start with 1 as every number is divisible by 1

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num);
}
int main() {
    int number;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    // Check if the number is Armstrong
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    // Check if the number is perfect
    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}