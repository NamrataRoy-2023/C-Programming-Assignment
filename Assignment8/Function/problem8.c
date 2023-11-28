///8. Write a C program to check whether a number is even or odd using functions.
#include <stdio.h>

// Function to check whether a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function to check even or odd
    checkEvenOdd(number);

    return 0;
}