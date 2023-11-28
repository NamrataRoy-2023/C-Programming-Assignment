///11. Write a C program to print all Armstrong numbers between 1 to n.
#include <stdio.h>
#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;

    // Calculate the sum of digits raised to the power of the number of digits
    while (num > 0) {
        int digit = num % 10;

        // Use integer multiplication instead of pow
        int digitPower = 1;
        for (int i = 0; i < numDigits; i++) {
            digitPower *= digit;
        }

        sum += digitPower;
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return (originalNum == sum);
}
int main() {
    int n;

    // Input from user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if the number is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print Armstrong numbers between 1 and n
    printf("Armstrong numbers between 1 and %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

