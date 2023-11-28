///1. Write a C program to compare two strings.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input from user
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the strings using strcmp function
    int result = strcmp(str1, str2);

    // Check the result and print the comparison result
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else {
        printf("The first string is lexicographically larger than the second string.\n");
    }

    return 0;
}

