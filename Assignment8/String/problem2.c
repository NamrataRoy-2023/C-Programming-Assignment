///2. Write a C program to concatenate two strings. 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input from user
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate the strings using strcat function
    strcat(str1, str2);

    // Print the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
