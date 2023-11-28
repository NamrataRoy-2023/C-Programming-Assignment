///13. Write a C program to concatenate two strings using pointers.
#include <stdio.h>

// Function to concatenate two strings using pointers
void concatenateStrings(char *str1, char *str2, char *result) {
    // Copy the characters of the first string to the result string
    while (*str1 != '\0') {
        *result = *str1;
        str1++;
        result++;
    }

    // Copy the characters of the second string to the result string
    while (*str2 != '\0') {
        *result = *str2;
        str2++;
        result++;
    }

    // Add null character to the end of the result string
    *result = '\0';
}

int main() {
    char firstString[100];
    char secondString[100];
    char resultString[200];

    // Get the first string from the user
    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);

    // Get the second string from the user
    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);

    // Concatenate the strings using pointers
    concatenateStrings(firstString, secondString, resultString);

    // Display the concatenated string
    printf("Concatenated string: %s\n", resultString);

    return 0;
}
