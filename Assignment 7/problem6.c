///6. Write a program to input a binary number in an array and convert into corresponding decimal number.
#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0;

    // Convert binary to decimal
    while (binary != 0) {
        int remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }

    return decimal;
}

int main() {
    long long binary;

    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Check if the binary number is non-negative
    if (binary < 0) {
        printf("Please enter a non-negative binary number.\n");
        return 1;
    }

    // Convert binary to decimal
    int decimal = binaryToDecimal(binary);

    // Display the decimal equivalent
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

