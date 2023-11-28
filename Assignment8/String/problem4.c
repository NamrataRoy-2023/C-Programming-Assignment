///4. Write a C program to find the 3rd element of a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];

    // Input from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string has at least 3 characters
    if (strlen(str) >= 3) {
        // Print the third element (character) of the string
        printf("The third element of the string: %c\n", str[2]);
    } else {
        printf("The string has less than 3 characters.\n");
    }

    return 0;
}
