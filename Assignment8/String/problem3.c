///3. Write a C program to print the reverse of a string. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string
    int length = strlen(str);

    // Print the reverse of the string
    printf("Reverse of the string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
