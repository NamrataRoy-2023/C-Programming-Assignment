///9. Write a C program to input any character and check whether it is alphabet, digit or special character.
#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];  // Assuming a maximum word length of 100 characters

    printf("Enter a word: ");
    scanf("%s", word);

    int hasAlphabet = 0;
    int hasDigit = 0;
    int hasSpecialChar = 0;

    for (int i = 0; word[i] != '\0'; ++i) {
        if (isalpha(word[i])) {
            hasAlphabet = 1;
        } else if (isdigit(word[i])) {
            hasDigit = 1;
        } else {
            hasSpecialChar = 1;
        }
    }

    if (hasAlphabet && hasDigit && hasSpecialChar) {
        printf("The word contains a combination of alphabetic characters, digits, and special characters\n");
    } else if (hasAlphabet && hasDigit) {
        printf("The word contains a combination of alphabetic characters and digits\n");
    } else if (hasAlphabet && hasSpecialChar) {
        printf("The word contains a combination of alphabetic characters and special characters\n");
    } else if (hasDigit && hasSpecialChar) {
        printf("The word contains a combination of digits and special characters\n");
    } else if (hasAlphabet) {
        printf("The word contains only alphabetic characters\n");
    } else if (hasDigit) {
        printf("The word contains only digits\n");
    } else if (hasSpecialChar) {
        printf("The word contains only special characters\n");
    } else {
        printf("The word is empty\n");
    }

    return 0;
}