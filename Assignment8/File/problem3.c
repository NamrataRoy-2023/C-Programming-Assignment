///3. Write a C Program to print contents of file.
#include <stdio.h>
#include <stdlib.h>

void printFileContents(const char *filename) {
    FILE *file;
    char ch;

    // Open the file
    file = fopen(filename, "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Print contents of the file
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);
}

int main() {
    char filename[100];

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Print the contents of the file
    printf("\nContents of %s:\n", filename);
    printFileContents(filename);

    return 0;
}
