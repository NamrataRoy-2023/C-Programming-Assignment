///4. Write a C program to find HCF (GCD) of two numbers.
#include <stdio.h>

// Function to find the Greatest Common Divisor (GCD) using Euclidean Algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input from user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find and print the GCD (HCF)
    int gcd = findGCD(num1, num2);
    printf("GCD (HCF) of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
