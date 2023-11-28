///11. Write a C program to find length of string using pointers.
#include <stdio.h>

// Function to find the length of a string using pointers
int stringLength(char *str) {
    int length = 0;

    // Iterate through the string using pointers until the null character is encountered
    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char inputString[100];

    // Get a string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Calculate the length of the string using pointers
    int length = stringLength(inputString);

    // Display the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
