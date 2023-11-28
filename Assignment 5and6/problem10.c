///10. Write a C program to check whether a number is Armstrong number or not.
#include <stdio.h>

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
    int number;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
