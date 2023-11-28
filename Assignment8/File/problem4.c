///4. Write a C Program to copy contents of one file to another file.
#include <stdio.h>
#include <stdlib.h>

void copyFileContents(const char *sourceFilename, const char *destinationFilename) {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open the source file for reading
    sourceFile = fopen(sourceFilename, "r");

    // Check if the source file is opened successfully
    if (sourceFile == NULL) {
        perror("Error opening source file");
        exit(EXIT_FAILURE);
    }

    // Open the destination file for writing
    destinationFile = fopen(destinationFilename, "w");

    // Check if the destination file is opened successfully
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    // Copy contents from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);
}

int main() {
    char sourceFilename[100], destinationFilename[100];

    // Get the source filename from the user
    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);

    // Get the destination filename from the user
    printf("Enter the destination filename: ");
    scanf("%s", destinationFilename);

    // Copy contents from source file to destination file
    copyFileContents(sourceFilename, destinationFilename);

    printf("Contents of %s copied to %s successfully.\n", sourceFilename, destinationFilename);

    return 0;
}
