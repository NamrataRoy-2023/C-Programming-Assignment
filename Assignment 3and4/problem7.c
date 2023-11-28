///7. Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];  // Assuming a maximum word length of 100 characters

    printf("Enter a word: ");
    scanf("%s", word);

    int isAlphabet = 1;  // Assume the word is an alphabet until proven otherwise

    for (int i = 0; word[i] != '\0'; ++i) {
        if (!isalpha(word[i])) {
            isAlphabet = 0;  // Set to 0 if any non-alphabetic character is found
            break;
        }
    }

    if (isAlphabet) {
        printf("The entire word is composed of alphabetic characters\n");
    } else {
        printf("The word contains non-alphabetic characters\n");
    }

    return 0;
}