///5. Write a C program to find LCM of two numbers.
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

// Function to find the Least Common Multiple (LCM) of two numbers
int findLCM(int a, int b) {
    // LCM * GCD = a * b
    // Therefore, LCM = (a * b) / GCD
    int gcd = findGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main() {
    int num1, num2;

    // Input from user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find and print the LCM
    int lcm = findLCM(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
