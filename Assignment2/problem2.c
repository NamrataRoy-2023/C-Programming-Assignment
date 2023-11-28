///2. Write a C program to display the N terms of odd numbers and their sum.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display odd numbers and calculate their sum
    printf("First %d odd numbers are:\n", n);
    for (i = 1; i <= 2 * n; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    // Display the sum of odd numbers
    printf("\nSum of the first %d odd numbers: %d\n", n, sum);

    return 0;
}

