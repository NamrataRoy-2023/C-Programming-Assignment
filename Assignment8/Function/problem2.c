///2. Write a C program to calculate sum of first 20 natural numbers using recursive function.
#include <stdio.h>

// Recursive function to calculate the sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    // Base case: if n is 0, the sum is 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: sum of n natural numbers is n + sum of (n-1) natural numbers
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    // Calculate the sum of the first 20 natural numbers
    int n = 20;
    int result = sumOfNaturalNumbers(n);

    // Display the result
    printf("Sum of first %d natural numbers: %d\n", n, result);

    return 0;
}