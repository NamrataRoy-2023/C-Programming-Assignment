///3. Write a C program to generate Fibonacci series using recursive function.
#include <stdio.h>

// Recursive function to generate Fibonacci series
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        // Fibonacci series: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Input the number of terms in the Fibonacci series
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}