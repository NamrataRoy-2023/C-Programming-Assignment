///12. Write a C program to copy one string to another using pointer.
#include <stdio.h>

// Function to copy one string to another using pointers
void copyString(char *source, char *destination) {
    // Iterate through the characters using pointers until the null character is encountered
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    // Add null character to the end of the destination string
    *destination = '\0';
}

int main() {
    char sourceString[100];
    char destinationString[100];

    // Get a string from the user
    printf("Enter a string: ");
    fgets(sourceString, sizeof(sourceString), stdin);

    // Copy the string using pointers
    copyString(sourceString, destinationString);

    // Display the copied string
    printf("Copied string: %s\n", destinationString);

    return 0;
}
