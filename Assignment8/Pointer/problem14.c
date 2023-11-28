///14. Write a C program to compare two strings using pointers.
#include <stdio.h>

// Function to compare two strings using pointers
int compareStrings(char *str1, char *str2) {
    // Compare each character of the strings using pointers
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            // If characters are not equal, return the ASCII difference
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }

    // Strings are equal if both end at the null character
    return *str1 - *str2;
}

int main() {
    char firstString[100];
    char secondString[100];

    // Get the first string from the user
    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);

    // Get the second string from the user
    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);

    // Compare the strings using pointers
    int result = compareStrings(firstString, secondString);

    // Display the result of the comparison
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}
